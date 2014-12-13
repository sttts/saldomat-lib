; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Input configuration for the Inno Setup Compiler
; Copyright (c) 2005 Christian Stimming <stimming@tuhh.de>
;
; Inno Setup Compiler: See http://www.jrsoftware.org/isdl.php
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

[Setup]
; Using the name here directly because we want it capitalized
AppName=AqBanking
AppVerName=AqBanking 5.5.0.2-git
AppPublisher=AqBanking Development Team
AppPublisherURL=http://sourceforge.net/projects/aqbanking
AppSupportURL=http://sourceforge.net/support/getsupport.php?group_id=115695
AppUpdatesURL=http://sourceforge.net/project/showfiles.php?group_id=115695
Compression=lzma
DefaultDirName={pf}\aqbanking
DirExistsWarning=no
InfoAfterFile=README
LicenseFile=COPYING
OutputBaseFilename=aqbanking-5.5.0.2-git-setup
OutputDir=.
UninstallFilesDir={app}\uninstall\aqbanking

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
; All main DLLs
Source: "win32-tmp\usr\bin\*.dll"; DestDir: "{app}\bin"; Flags: sharedfile promptifolder replacesameversion; Components: main

; Everything from the lib directory, including all plugins
Source: "win32-tmp\usr\lib\lib*.la"; DestDir: "{app}\lib"; Components: main
Source: "win32-tmp\usr\lib\aqbanking\*"; DestDir: "{app}\lib\aqbanking"; Flags: recursesubdirs; Components: main

; The plugins that belong to gwenhywfar. 
Source: "win32-tmp\gwen\dbio\*"; DestDir: "{reg:HKLM\Software\Gwenhywfar\Paths,dbio-plugins|{app}\lib\aqbanking\plugins\34}"; Flags: ignoreversion recursesubdirs; Components: main
Source: "win32-tmp\gwen\crypttoken\*"; DestDir: "{reg:HKLM\Software\Gwenhywfar\Paths,plugindir|{app}\lib\aqbanking\plugins\34}\crypttoken"; Flags: ignoreversion recursesubdirs; Components: main

; The commandline tools
Source: "win32-tmp\usr\bin\*.exe"; DestDir: "{app}\bin"; Components: main

; The config-scripts. They are post-processed by the Pascal script below.
Source: "aqbanking-config.in.in"; DestDir: "{app}\bin"; Components: devel; AfterInstall: MyAfterInstallConfig(ExpandConstant('{app}\bin\aqbanking-config'))
Source: "src\plugins\backends\aqhbci\aqhbci-config.in.in"; DestDir: "{app}\bin"; Components: devel; AfterInstall: MyAfterInstallConfig(ExpandConstant('{app}\bin\aqhbci-config'))
Source: "src\frontends\qbanking\lib\qbanking-config.in.in"; DestDir: "{app}\bin"; Components: devel; AfterInstall: MyAfterInstallConfig(ExpandConstant('{app}\bin\qbanking-config'))

; The headers, and the aclocal macro. 
Source: "win32-tmp\usr\include\*"; DestDir: "{app}\include"; Flags: ignoreversion recursesubdirs; Components: devel
Source: "win32-tmp\usr\share\*"; DestDir: "{app}\share"; Flags: ignoreversion recursesubdirs; Components: devel
Source: "win32-tmp\share\*"; DestDir: "{app}\share"; Flags: ignoreversion recursesubdirs; Components: devel


; And all the documentation
Source: "README"; DestDir: "{app}\doc\aqbanking"; Components: doc
Source: "NEWS"; DestDir: "{app}\doc\aqbanking"; Components: doc
Source: "COPYING"; DestDir: "{app}\doc\aqbanking"; Components: doc
Source: "AUTHORS"; DestDir: "{app}\doc\aqbanking"; Components: doc
Source: "ChangeLog"; DestDir: "{app}\doc\aqbanking"; Components: doc

; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Delete automatically created files on uninstall
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[UninstallDelete]
Type: files; Name: "{app}\bin\*-config"

; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; Define the registry keys Setup should create (HKLM = HKEY_LOCAL_MACHINE)
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[Registry]
Root: HKLM; Subkey: "Software\Aqbanking"; ValueType: none; Flags: uninsdeletekeyifempty
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: none; Flags: uninsdeletekeyifempty
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "prefix"; ValueData: "{app}"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "libdir"; ValueData: "{app}\lib"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "pkglibdir"; ValueData: "{app}\lib\aqbanking"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "plugindir"; ValueData: "{app}\lib\aqbanking\plugins\34"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "providerdir"; ValueData: "{app}\lib\aqbanking\plugins\34\providers"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "bankinfodir"; ValueData: "{app}\lib\aqbanking\plugins\34\bankinfo"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "imexporterdir"; ValueData: "{app}\lib\aqbanking\plugins\34\imexporters"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "importerdir"; ValueData: "{app}\lib\aqbanking\plugins\34\imexporters"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "pkgdatadir"; ValueData: "{app}\share\aqbanking"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "sysconfdir"; ValueData: "{app}\etc"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "wizarddir"; ValueData: "{app}\lib\aqbanking\plugins\34\wizards"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\Aqbanking\Paths"; ValueType: string; ValueName: "localedir"; ValueData: "{app}\share\locale"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\AqBanking\Paths"; ValueType: string; ValueName: "xmldatadir"; ValueData: "{app}\share\aqhbci\xml"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\AqBanking\Paths"; ValueType: string; ValueName: "cfgmoduledir"; ValueData: "{app}\lib\aqbanking\plugins\34\frontends\qbanking\cfgmodules"; Flags: uninsdeletevalue


; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; This large section is a Pascal scripting program that will modify
; the aqbanking-config shell script so that it then includes the
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
  FileString, appdir, windir, bindir, includedir, plugindir, datadir, pkgdatadir: String;
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
  bindir := appdir + '/bin';
  plugindir := appdir + '/lib/aqbanking/plugins/34';
  datadir := appdir + '/share';
  pkgdatadir := datadir + '/aqbanking';

  { Now make all the replacements }
  { Explanation: StringChange(S,FromStr,ToStr): Change all occurances in S of FromStr to ToStr. }
  StringChange(FileString, '@'+'prefix@', appdir);
  StringChange(FileString, '@'+'libdir@', windir);
  StringChange(FileString, '@'+'all_includes@', '-I/Users/sts/Quellen/mac/hbci/lib/static-build-debug-5.5.0.2/include/gwenhywfar4');
  StringChange(FileString, '@'+'aqbanking_includes@', '-I'+includedir);
  StringChange(FileString, '@'+'aqbanking_ldflags@', '-L'+bindir);
  StringChange(FileString, '@'+'aqbanking_libs@', '-laqbanking');
  StringChange(FileString, '@'+'aqbanking_plugindir@', plugindir);
  StringChange(FileString, '@'+'aqbanking_pkgdatadir@', pkgdatadir);
  StringChange(FileString, '@'+'AQBANKING_VERSION_MAJOR@', '5');
  StringChange(FileString, '@'+'AQBANKING_VERSION_MINOR@', '5');
  StringChange(FileString, '@'+'AQBANKING_VERSION_PATCHLEVEL@', '0');
  StringChange(FileString, '@'+'AQBANKING_VERSION_BUILD@', '2');
  StringChange(FileString, '@'+'AQBANKING_VERSION_TAG@', 'git');

  StringChange(FileString, '@'+'cbanking_libs@', '-L' + bindir + ' @cbanking_libs@');
  StringChange(FileString, '@'+'cbanking_includes@', '-I'+includedir);
  StringChange(FileString, '@'+'qbanking_libs@', '-L' + bindir + ' @qbanking_libs@');
  StringChange(FileString, '@'+'qbanking_includes@', '-I'+includedir);
  StringChange(FileString, '@'+'qbanking_data@', datadir + '/qbanking');
  StringChange(FileString, '@'+'QBANKING_VERSION_MAJOR@', '@QBANKING_VERSION_MAJOR@');
  StringChange(FileString, '@'+'QBANKING_VERSION_MINOR@', '@QBANKING_VERSION_MINOR@');
  StringChange(FileString, '@'+'QBANKING_VERSION_PATCHLEVEL@', '@QBANKING_VERSION_PATCHLEVEL@');
  StringChange(FileString, '@'+'QBANKING_VERSION_BUILD@', '@QBANKING_VERSION_BUILD@');
  StringChange(FileString, '@'+'kbanking_libs@', '-L' + bindir + ' @kbanking_libs@');
  StringChange(FileString, '@'+'kbanking_includes@', '-I'+includedir);

  { Save the final file }
  Res := SaveStringToFile(FileName, FileString, False);
  if Res = False then
    MsgBox('Error on saving '+FileName+' for final adaptation', mbInformation, MB_OK);

end;


function InitializeSetup(): Boolean;
begin
  Result := Length(ExpandConstant('{reg:HKLM\Software\Gwenhywfar\Paths,prefix|a}')) > 1;
  if Result = False then 
    MsgBox(ExpandConstant('{cm:PrereqNotFound}'), mbInformation, MB_OK);
end;


[Languages]
Name: "en"; MessagesFile: "compiler:Default.isl"
Name: "de"; MessagesFile: "compiler:Languages\German.isl"


; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; These are only for improved text messages
; ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;[Messages]
;; *** "Select Destination" wizard page
;SelectDirLabel3=Setup will install [name] into the following folder. If you have MinGW installed on your system, you can safely choose MinGW's root folder here as well (e.g. c:\msys\1.0).
;
;de.SelectDirLabel3=Das Setup wird [name] in den folgenden Ordner installieren. Wenn Sie MinGW auf Ihrem Computer installiert haben, k�nnen Sie hier problemlos das Root-Verzeichnis von MinGW angeben (z.B. c:\msys\1.0).


; The customized messages with their translations here.
[CustomMessages]
; *** Prerequisite message
PrereqNotFound=The setup program did not find the DLL of the Gwenhywfar package and/or the registry keys of the Gwenhywfar installation. You need to install Gwenhywfar from the setup executable, and then start this setup again.

de.PrereqNotFound=Das Setup-Programm hat die DLL des Gwenhywfar-Pakets und/oder dessen Registry-Keys nicht gefunden. Sie m�ssen zuerst Gwenhywfar �ber dessen Setup-Programm installieren und dann dieses Setup-Programm erneut starten.

; *** "Select Components" wizard page
FullInstall=Full installation
BinaryInstall=Install only libraries
CustomInstall=Custom installation

MainFiles=Aqbanking DLL Library
DevelFiles=Development files
DocFiles=Documentation files

de.FullInstall=Komplett-Installation
de.BinaryInstall=Nur Bibliotheken installieren
de.CustomInstall=Benutzerdefiniert

de.MainFiles=Aqbanking DLL Bibliothek
de.DevelFiles=Entwickler-Dateien
de.DocFiles=Dokumentations-Dateien
