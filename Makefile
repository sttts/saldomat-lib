# Reihenfolge:
#
# gettext / runtime / inlt / iconv
# gmp
# libgpg-error
# libygcrypt
# gnutls
# gwen
# aqbanking

AqVer=5.0.14
GwenVer=4.2.1
devdir=Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer

all:
	$(MAKE) build arch=i386 postfix=-i386
	$(MAKE) build arch=i386 postfix=-debug DEBUG=yes
	rm -f static-build-debug static-build-i386
	ln -s static-build-debug-$(AqVer) static-build-debug
	ln -s static-build-i386-$(AqVer) static-build-i386

build: .aqbanking.compiled$(postfix) dsyms

postfix=
DEBUG=no
BASEDIR=$(shell pwd)
PREFIX=$(shell pwd)/static-build$(postfix)-$(AqVer)
BUILDDIR=$(shell pwd)/tmp$(postfix)
ifeq ($(DEBUG),yes)
CFLAGS=-g -isysroot /$(devdir)/SDKs/MacOSX10.9.sdk -arch $(arch) -I$(PREFIX)/include/ -mmacosx-version-min=10.9 -fno-inline
else
CFLAGS=-g -isysroot /$(devdir)/SDKs/MacOSX10.9.sdk -arch $(arch) -I$(PREFIX)/include/ -mmacosx-version-min=10.9 -O
endif

LDFLAGS=-arch $(arch) -L$(PREFIX)/lib -L/$(devdir)/SDKs/MacOSX10.9.sdk/usr/lib/ -mmacosx-version-min=10.9
CONFFLAGS=--disable-dependency-tracking --prefix=$(PREFIX) --disable-shared --enable-static
SHARED_CONFFLAGS=--disable-dependency-tracking --prefix=$(PREFIX) --enable-shared --enable-static
PATH=$(PREFIX)/bin:/usr/bin:/bin:/usr/sbin:/sbin:/usr/X11/bin:/usr/local/bin

.pkg-config.compiled$(postfix):
	mkdir -p $(BUILDDIR)/pkg-config-0.23
	cd $(BUILDDIR)/pkg-config-0.23; \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS) -std=gnu89" \
	CPPFLAGS="$(CFLAGS)" \
	$(BASEDIR)/pkg-config-0.23/configure $(CONFFLAGS) \
		--disable-rpath --enable-relocatable --without-testlib && \
	make && \
	make install
	touch .pkg-config.compiled$(postfix)

.gettext.compiled$(postfix):
	mkdir -p $(BUILDDIR)/gettext-0.17
	cd $(BUILDDIR)/gettext-0.17; \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS)" \
	CPPFLAGS="$(CFLAGS)" \
	$(BASEDIR)/gettext-0.17/gettext-runtime/configure $(CONFFLAGS) \
	--disable-java --disable-openmp --disable-largefile --disable-rpath --enable-relocatable && \
	cd intl && \
	make && \
	make install
	touch .gettext.compiled$(postfix)

.libgpg-error.compiled$(postfix):
	mkdir -p $(BUILDDIR)/libgpg-error-1.17
	cd $(BUILDDIR)/libgpg-error-1.17; \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS)" \
	CPPFLAGS="$(CFLAGS)" \
	$(BASEDIR)/libgpg-error-1.17/configure $(CONFFLAGS) \
	--disable-languages --disable-rpath --disable-nls && \
	make && \
	make install
	touch .libgpg-error.compiled$(postfix)

.libgcrypt.compiled$(postfix): .libgpg-error.compiled$(postfix)
	mkdir -p $(BUILDDIR)/libgcrypt-1.6.2
	cd $(BUILDDIR)/libgcrypt-1.6.2; \
	PATH=$(PREFIX)/bin:$$PATH \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS) -fheinous-gnu-extensions -std=gnu89" \
	CPPFLAGS="$(CFLAGS)" \
	$(BASEDIR)/libgcrypt-1.6.2/configure $(CONFFLAGS) --host=ppc --disable-asm \
	&& \
	make && \
	make install && \
	cp $(BASEDIR)/libgcrypt-1.6.2/src/libgcrypt.m4 $(PREFIX)/share/aclocal
	touch .libgcrypt.compiled$(postfix)

.nettle.compiled$(postfix): .libgpg-error.compiled$(postfix)
	mkdir -p $(BUILDDIR)/nettle-2.7.1
	cd $(BUILDDIR)/nettle-2.7.1; \
	PATH=$(PREFIX)/bin:$$PATH \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS) -fheinous-gnu-extensions -std=gnu89" \
	CPPFLAGS="$(CFLAGS)" \
	$(BASEDIR)/nettle-2.7.1/configure $(CONFFLAGS) --disable-openssl --without-examples \
	&& \
	make && \
	make install
	touch .nettle.compiled$(postfix)

.libtasn1.compiled$(postfix):
	mkdir -p $(BUILDDIR)/libtasn1-4.2
	cd $(BUILDDIR)/libtasn1-4.2; \
	PATH=$(PREFIX)/bin:$$PATH \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS) -fheinous-gnu-extensions -std=gnu89" \
	CPPFLAGS="$(CFLAGS)" \
	$(BASEDIR)/libtasn1-4.2/configure $(CONFFLAGS) \
	&& \
	make && \
	make install
	touch .libtasn1.compiled$(postfix)

.gmp.compiled$(postfix):
	mkdir -p $(BUILDDIR)/gmp-4.3.2
	cd $(BUILDDIR)/gmp-4.3.2; \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS)" \
	CPPFLAGS="$(CFLAGS)" \
	ABI=long \
	$(BASEDIR)/gmp-4.3.2/configure $(CONFFLAGS) --build=none-apple-darwin8.6.1 \
	&& \
	make && \
	make install
	touch .gmp.compiled$(postfix)

.gnutls.compiled$(postfix): .gettext.compiled$(postfix) .gmp.compiled$(postfix) .nettle.compiled$(postfix) .libtasn1.compiled$(postfix)
	mkdir -p $(BUILDDIR)/gnutls-2.12.21-gotofail
	cd $(BUILDDIR)/gnutls-2.12.21-gotofail; \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS) -std=gnu89" \
	CPPFLAGS="$(CFLAGS)" \
	ABI=32 $(BASEDIR)/gnutls-2.12.21-gotofail/configure $(CONFFLAGS) \
	--disable-rpath --disable-nls --disable-guile --without-libextra --disable-cxx --without-p11-kit --with-libgcrypt-prefix=$(PREFIX) && \
	make && \
	make install
	touch .gnutls.compiled$(postfix)

.iconv.compiled$(postfix):
	mkdir -p $(BUILDDIR)/libiconv-1.12
	cd $(BUILDDIR)/libiconv-1.12; \
	PATH=$(PATH) LDFLAGS="$(LDFLAGS)" \
	CFLAGS="$(CFLAGS)" \
	CPPFLAGS="$(CFLAGS)" \
	$(BASEDIR)/libiconv-1.12/configure $(CONFFLAGS) \
	--disable-rpath --enable-binreloc --enable-binreloc-threads \
	--with-libgcrypt-prefix=$(PREFIX) --with-libgnutls-prefix=$(PREFIX) && \
	make && \
	make install
	touch .iconv.compiled$(postfix)

.gwen.compiled$(postfix): .pkg-config.compiled$(postfix) .gettext.compiled$(postfix) .libgcrypt.compiled$(postfix) .gnutls.compiled$(postfix)
	mkdir -p $(BUILDDIR)/gwenhywfar-$(GwenVer)
	cd gwenhywfar; glibtoolize -f --automake
	cd gwenhywfar; aclocal -I ./m4 -I $(PREFIX)/share/aclocal/
	cd gwenhywfar; autoheader
	cd gwenhywfar; if test ! -f i18nsources; then echo > i18nsources; fi
	cd gwenhywfar; automake -f --add-missing
	cd gwenhywfar; autoconf
	cd $(BUILDDIR)/gwenhywfar-$(GwenVer); \
	PATH=$(PATH) \
	LDFLAGS="-framework CoreFoundation $(LDFLAGS) -lcharset -liconv -lintl -lgmp -lgpg-error -lgcrypt -lgnutls -lgnutls-extra -lgnutls-openssl" \
	CFLAGS="$(CFLAGS)" \
	CPPFLAGS="$(CFLAGS)" \
	LIBGNUTLS_CFLAGS="-H$(PREFIX)/include/gnutls" \
	LIBGNUTLS_LIBS="-lz -lintl -lgnutls -lgnutls-openssl" \
	PKG_CONFIG=$(PREFIX)/bin/pkg-config PKG_CONFIG_PATH=$(PREFIX)/lib/pkgconfig/ \
	$(BASEDIR)/gwenhywfar/configure $(SHARED_CONFFLAGS) --enable-debug=$(DEBUG) \
	--enable-local-install --disable-rpath --enable-binreloc --enable-binreloc-threads \
	--disable-fox --with-guis="" \
	--with-libgcrypt-prefix=$(PREFIX) --with-libgnutls-prefix=$(PREFIX) \
	--disable-variadic-macros --with-iconv=/usr && \
	PATH=$(PATH):/usr/local/git/bin make && \
	make install && \
	(rm -rf ar-tmp; mkdir ar-tmp; cd ar-tmp; \
	find ../plugins -name "*.a" -exec ar x {} \; ; \
	ar cr $(PREFIX)/lib/libgwen_plugins.a *.o; \
	ranlib $(PREFIX)/lib/libgwen_plugins.a)
	touch .gwen.compiled$(postfix)

.aqbanking.compiled$(postfix): .gwen.compiled$(postfix)
	mkdir -p $(BUILDDIR)/aqbanking-$(AqVer)
	cd aqbanking; glibtoolize -f --automake
	cd aqbanking; aclocal -I ./m4 -I $(PREFIX)/share/aclocal/
	cd aqbanking; autoheader
	cd aqbanking; if test ! -f i18nsources; then echo > i18nsources; fi
	cd aqbanking; automake -f --add-missing
	cd aqbanking; autoconf
	cd $(BUILDDIR)/aqbanking-$(AqVer); \
	PATH=$(PATH) \
	LDFLAGS="-framework CoreFoundation $(LDFLAGS) -lcharset -liconv -lintl -lgmp -lgpg-error -lgcrypt -lgnutls -lgnutls-extra -lgnutls-openssl -lgwenhywfar" \
	CFLAGS="$(CFLAGS)" \
	CPPFLAGS="$(CFLAGS)" \
	PKG_CONFIG=$(PREFIX)/bin/pkg-config PKG_CONFIG_PATH=$(PREFIX)/lib/pkgconfig/ \
	$(BASEDIR)/aqbanking/configure $(SHARED_CONFFLAGS) --enable-debug=$(DEBUG) \
	--with-backends="aqhbci" --with-frontends="" --disable-gwenhywfar-test \
	--enable-local-install --disable-tutorials --with-bankinfos="de" --without-imexports \
	--disable-qt3-threads --disable-qt3 --with-exporter=csv \
	--disable-variadic-macros && \
	PATH=$(PATH):/usr/local/git/bin make && \
	make install && \
	(rm -rf ar-tmp; mkdir ar-tmp; cd ar-tmp; \
	find ../src/plugins -name "*.a" -exec ar x {} \; ; \
	ar cr $(PREFIX)/lib/libaqb_plugins.a *.o; \
	ranlib $(PREFIX)/lib/libaqb_plugins.a)
	touch .aqbanking.compiled$(postfix)

dsyms:
	find $(BUILDDIR) -name '*.dSYM' | \
	while read f; do \
	  libname=`basename $$f .dSYM`; \
	  buildlib="`dirname $$f`/$$libname"; \
	  if [ -f "$$buildlib" ]; then \
		buildmd5=`md5 -q $$buildlib`; \
		find $(PREFIX) -name "$$libname" | \
		while read l; do \
			libmd5=`md5 -q $$l`; \
			if [ "$$libmd5" == "$$buildmd5" ]; then \
				echo "link `dirname $$l`/$$libname.dSYM $$f"; \
				cp -a $$f "`dirname $$l`/"; \
			fi; \
		done; \
	  fi; \
	done

distclean: clean
	rm -rf static-build-*-$(AqVer)

clean:
	rm -rf tmp tmp-debug tmp-i386 tmp-ppc
	rm -f .*.compiled-* .dsyms*
	rm -f .*-cvs
