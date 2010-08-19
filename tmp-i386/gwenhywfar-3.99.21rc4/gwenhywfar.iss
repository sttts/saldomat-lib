; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Input configuration for the Inno Setup Compiler
; Copyright (c) 2004-2005 Christian Stimming <stimming@tuhh.de>
;
; Inno Setup Compiler: See http://www.jrsoftware.org/isdl.php
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

[Setup]
; Using the name here directly because we want it capitalized
AppName=Gwenhywfar
AppVerName=Gwenhywfar 3.99.21rc4
AppPublisher=Gwenhywfar Development Team
AppPublisherURL=http://sourceforge.net/projects/gwenhywfar
AppSupportURL=http://sourceforge.net/support/getsupport.php?group_id=88769
AppUpdatesURL=http://sourceforge.net/project/showfiles.php?group_id=88769
DefaultDirName={pf}\gwenhywfar
LicenseFile=COPYING
Compression=lzma
OutputDir=.
OutputBaseFilename=gwenhywfar-3.99.21rc4-setup
UninstallFilesDir={app}\uninstall\gwenhywfar
InfoAfterFile=README

[Types]
Name: "full"; Description: "{cm:FullInstall}"
Name: "binary"; Description: "{cm:BinaryInstall}"
Name: "custom"; Description: "{cm:CustomInstall}"; Flags: iscustom

[Components]
Name: "main"; Description: "{cm:MainFiles}"; Types: full binary custom; Flags: fixed
Name: "devel"; Description: "{cm:DevelFiles}"; Types: full
Name: "doc"; Description: "{cm:DocFiles}"; Types: full

; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Here we configure the included files and the place of their
; installation
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[Files]
; The main DLL
Source: "distribution\usr\bin\*.dll"; DestDir: "{win}"; Flags: sharedfile; Components: main

; The lib file for linking against it
Source: "distribution\usr\lib\libgwenhywfar.la"; DestDir: "{app}\lib"; Flags: sharedfile; Components: devel
Source: "distribution\usr\lib\*.dll.a"; DestDir: "{app}\lib"; Flags: sharedfile; Components: devel

; The config-script. It is post-processed by the Pascal script below.
Source: "gwenhywfar-config.in.in"; DestDir: "{app}\bin"; Flags: recursesubdirs; Components: devel; AfterInstall: MyAfterInstallConfig(ExpandConstant('{app}\bin\gwenhywfar-config'))

; The tools executables
Source: "distribution\usr\bin\*.exe"; DestDir: "{app}\bin"; Flags: ignoreversion; Components: devel

; The headers, and the aclocal macro. 
Source: "distribution\usr\include\*"; DestDir: "{app}\include"; Flags: ignoreversion recursesubdirs; Components: devel
Source: "distribution\usr\share\*"; DestDir: "{app}\share"; Flags: ignoreversion recursesubdirs; Components: devel

; The plugins
Source: "distribution\usr\lib\gwenhywfar\plugins\59\*"; DestDir: "{app}\lib\gwenhywfar\plugins\59"; Flags: ignoreversion recursesubdirs; Components: main

; The certificate file
Source: "distribution\usr\etc\gwen-public-ca.crt"; DestDir: "{app}\etc"; Components: main

; And all the documentation
Source: "README"; DestDir: "{app}\doc\gwenhywfar"; Components: doc
Source: "COPYING"; DestDir: "{app}\doc\gwenhywfar"; Flags: ignoreversion; Components: doc
Source: "README.W32"; DestDir: "{app}\doc\gwenhywfar"; Components: doc
Source: "AUTHORS"; DestDir: "{app}\doc\gwenhywfar"; Components: doc
Source: "ChangeLog"; DestDir: "{app}\doc\gwenhywfar"; Components: doc


; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Define the registry keys Setup should create (HKCU = HKEY_CURRENT_USER)
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[Registry]
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "prefix"; ValueData: "{app}"
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "libdir"; ValueData: "{app}\lib"
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "pkglibdir"; ValueData: "{app}\lib\gwenhywfar"
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "plugindir"; ValueData: "{app}\lib\gwenhywfar\plugins\59"
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "dbio-plugins"; ValueData: "{app}\lib\gwenhywfar\plugins\59\dbio"
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "crypttoken-plugins"; ValueData: "{app}\lib\gwenhywfar\plugins\59\crypttoken"
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "sysconfdir"; ValueData: "{app}\etc"
Root: HKLM; Subkey: "Software\Gwenhywfar\Paths"; ValueType: string; ValueName: "localedir"; ValueData: "{app}\share\locale"

; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Delete the created config script on uninstall
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[UninstallDelete]
Type: files; Name: "{app}\bin\gwenhywfar-config"

; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; This large section is a Pascal scripting program that will modify
; the gwenhywfar-config shell script so that it then includes the
; correct values according to our local installation. See
; http://www.remobjects.com/?ps for a syntax reference.
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[Code]
function MingwBacksl(const S: String): String;
begin
  { Modify the path name S so that it can be used by MinGW }
  if Length(ExtractFileDrive(S)) = 0 then
    Result := S
  else begin
    Result := '/'+S;
    StringChange(Result, ':\', '\');
  end;
  StringChange(Result, '\', '/');
end;

procedure MyAfterInstallConfig(FileName: String);
var
  FileString, appdir, windir, includedir, plugindir: String;
  Res: Boolean;
begin

  { Load the unchanged original file }
  Res := LoadStringFromFile(Format('%s.in.in',[FileName]), FileString);
  if Res = False then
    MsgBox('Error on loading '+FileName+'.in.in for final adaptation', mbInformation, MB_OK);

  { Insert the custom file header; #10 is the linefeed character }
  Insert('#!/bin/sh '#10'dir="@prefix'+'@"'#10, FileString, 0);

  { Get the installation-specific paths }
  windir := MingwBacksl(ExpandConstant('{win}'));
  appdir := MingwBacksl(ExpandConstant('{app}'));
  includedir := appdir + '/include';
  plugindir := appdir + '/lib/gwenhywfar/plugins/59';

  { Now make all the replacements }
  { Explanation: StringChange(S,FromStr,ToStr): Change all occurances in S of FromStr to ToStr. }
  StringChange(FileString, '@'+'prefix@', appdir);
  StringChange(FileString, '@'+'libdir@', windir);
  StringChange(FileString, '@'+'ssl_includes@', '');
  StringChange(FileString, '@'+'gwenhywfar_headerdir@', includedir);
  StringChange(FileString, '@'+'gwenhywfar_ldflags@', '-L'+windir);
  StringChange(FileString, '@'+'gwenhywfar_libs@', '-lgwenhywfar');
  StringChange(FileString, '@'+'gwenhywfar_libspp@', '');
  StringChange(FileString, '@'+'gwenhywfar_libsui@', '');
  StringChange(FileString, '@'+'gwenhywfar_pkgincludedir@', includedir+'/gwenhywfar');
  StringChange(FileString, '@'+'gwenhywfar_plugindir@', plugindir);
  StringChange(FileString, '@'+'GWENHYWFAR_VERSION_MAJOR@', '3');
  StringChange(FileString, '@'+'GWENHYWFAR_VERSION_MINOR@', '99');
  StringChange(FileString, '@'+'GWENHYWFAR_VERSION_PATCHLEVEL@', '21');
  StringChange(FileString, '@'+'GWENHYWFAR_VERSION_BUILD@', '0');
  StringChange(FileString, '@'+'GWENHYWFAR_VERSION_TAG@', 'rc4');
  StringChange(FileString, '@'+'USE_CRYPT@', '@USE_CRYPT@');

  { Save the final file }
  Res := SaveStringToFile(FileName, FileString, False);
  if Res = False then
    MsgBox('Error on saving '+FileName+' for final adaptation', mbInformation, MB_OK);

end;


[Languages]
Name: "en"; MessagesFile: "compiler:Default.isl"
Name: "de"; MessagesFile: "compiler:Languages\German.isl"
Name: "pt"; MessagesFile: "compiler:Languages\Portuguese.isl"
Name: "fr"; MessagesFile: "compiler:Languages\French.isl"

; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; These are only for improved text messages
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[Messages]
; *** "Select Destination" wizard page
SelectDirLabel3=Setup will install [name] into the following folder. If you have MinGW installed on your system, you can safely choose MinGW's root folder here as well (e.g. c:\msys\1.0).

de.SelectDirLabel3=Das Setup wird [name] in den folgenden Ordner installieren. Wenn Sie MinGW auf Ihrem Computer installiert haben, können Sie hier problemlos das Root-Verzeichnis von MinGW angeben (z.B. c:\msys\1.0).


[CustomMessages]
; *** "Select Components" wizard page
FullInstall=Full installation
BinaryInstall=Install only libraries
CustomInstall=Custom installation

MainFiles=Gwenhywfar DLL Library
DevelFiles=Development files
DocFiles=Documentation files

de.FullInstall=Komplett-Installation
de.BinaryInstall=Nur Bibliotheken installieren
de.CustomInstall=Benutzerdefiniert

de.MainFiles=Gwenhywfar DLL Bibliothek
de.DevelFiles=Entwickler-Dateien
de.DocFiles=Dokumentations-Dateien
