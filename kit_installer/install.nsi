; Script generated with the Venis Install Wizard

; Define your application name
!define APPNAME "libcrn dependency kit for MSVC2015"
!define APPNAMEANDVERSION "libcrn dependency kit for MSVC2015 4.0"

; Main Install settings
Name "${APPNAMEANDVERSION}"
InstallDir "$PROGRAMFILES64\libcrn dependency kit for MSVC2015"
InstallDirRegKey HKLM "Software\${APPNAME}" ""
OutFile "libcrn_deps4.exe"

!addplugindir "."
!include "EnvVarUpdate.nsh"

; Do not use compression
SetCompress off

; Modern interface settings
!include "MUI.nsh"

!define MUI_ABORTWARNING

!insertmacro MUI_PAGE_WELCOME
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_PAGE_FINISH

!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES

; Set languages (first is default language)
!insertmacro MUI_LANGUAGE "English"
!insertmacro MUI_LANGUAGE "French"
!insertmacro MUI_RESERVEFILE_LANGDLL

Section "libcrn dependency kit for MSVC2015" Section1

	; Set Section properties
	SetOverwrite on

	; Set Section Files and Shortcuts
	SetOutPath "$INSTDIR\"
	File "PLEIAD_local_vs2015_64.7z"
	Nsis7z::ExtractWithDetails "$INSTDIR\PLEIAD_local_vs2015_64.7z" "Installing package %s..."
	Delete "$INSTDIR\PLEIAD_local_vs2015_64.7z"
	CreateDirectory "$SMPROGRAMS\libcrn dependency kit for MSVC2015"
	CreateShortCut "$SMPROGRAMS\libcrn dependency kit for MSVC2015\Uninstall.lnk" "$INSTDIR\uninstall.exe"
	
	; add env var and path	WriteRegStr HKLM "SYSTEM\CurrentControlSet\Control\Session Manager\Environment" "LIBCRN_DEPS_PATH" "$INSTDIR"	${EnvVarUpdate} $0 "PATH" "A" "HKLM" "$INSTDIR\_bin_"	SendMessage ${HWND_BROADCAST} ${WM_WININICHANGE} 0 "STR:Environment" /TIMEOUT=5000
SectionEnd

Section -FinishSection

	WriteRegStr HKLM "Software\${APPNAME}" "" "$INSTDIR"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${APPNAME}" "DisplayName" "${APPNAME}"
	WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${APPNAME}" "UninstallString" "$INSTDIR\uninstall.exe"
	WriteUninstaller "$INSTDIR\uninstall.exe"

SectionEnd

; Modern install component descriptions
!insertmacro MUI_FUNCTION_DESCRIPTION_BEGIN
	!insertmacro MUI_DESCRIPTION_TEXT ${Section1} ""
!insertmacro MUI_FUNCTION_DESCRIPTION_END

;Uninstall section
Section Uninstall
	
	; remove env var and path
	DeleteRegValue HKLM "SYSTEM\CurrentControlSet\Control\Session Manager\Environment" "LIBCRN_DEPS_PATH"	${un.EnvVarUpdate} $0 "PATH" "R" "HKLM" "$INSTDIR\_bin_"	SendMessage ${HWND_BROADCAST} ${WM_WININICHANGE} 0 "STR:Environment" /TIMEOUT=5000
	
	;Remove from registry...
	DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\${APPNAME}"
	DeleteRegKey HKLM "SOFTWARE\${APPNAME}"

	; Delete self
	Delete "$INSTDIR\uninstall.exe"

	; Delete Shortcuts
	Delete "$SMPROGRAMS\libcrn dependency kit for MSVC2015\Uninstall.lnk"

	; Remove remaining directories
	RMDir "$SMPROGRAMS\libcrn dependency kit for MSVC2015"
	RMDir /r "$INSTDIR\"

SectionEnd

; On initialization
Function .onInit

	!insertmacro MUI_LANGDLL_DISPLAY

FunctionEnd

BrandingText "LIRIS - PLEIAD"

; eof
