; �ű��� Inno Setup �ű��� ���ɡ�
; �����ĵ���ȡ���� INNO SETUP �ű��ļ�����ϸ���ϣ�

#define MyAppName "ѧ��ѡ�ι���ϵͳ"
#define MyAppVersion "1.0"
#define MyAppPublisher "��ܿ��"
#define MyAppExeName "ѧ��ѡ�ι���ϵͳ.exe"

[Setup]
; ע��: AppId ��ֵ��Ψһʶ���������ı�־��
; ��Ҫ������������ʹ����ͬ�� AppId ֵ��
; (�ڱ������е���˵������� -> ���� GUID�����Բ���һ���µ� GUID)
AppId={{D50D05ED-3865-4CF5-ADC2-DE85D53243DF}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
DefaultDirName=D:\ѧ��ѡ�ι���ϵͳ v1.0
DefaultGroupName={#MyAppName}
LicenseFile=D:\vs\vs��Ŀ\ѧ��ѡ�ι���ϵͳ\VS��Ŀ�ļ�\��װ���.txt
OutputDir=D:\vs\vs��Ŀ\ѧ��ѡ�ι���ϵͳ\VS��Ŀ�ļ�\ѧ��ѡ�ι���ϵͳ\x64\Debug\�½��ļ���
OutputBaseFilename=ѧ��ѡ�ι���ϵͳ_setup_v1.0
SetupIconFile=D:\vs\vs��Ŀ\ѧ��ѡ�ι���ϵͳ\VS��Ŀ�ļ�\ѧ��ѡ�ι���ϵͳ\res\ѧ��ѡ�ι���ϵͳ .ico
Compression=lzma
SolidCompression=yes

[Languages]
Name: "chinesesimp"; MessagesFile: "compiler:Languages\ChineseSimp.isl"
Name: "chinesetrad"; MessagesFile: "compiler:Languages\ChineseTrad.isl"
Name: "english"; MessagesFile: "compiler:Languages\English.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "D:\vs\vs��Ŀ\ѧ��ѡ�ι���ϵͳ\VS��Ŀ�ļ�\ѧ��ѡ�ι���ϵͳ\x64\Release\ѧ��ѡ�ι���ϵͳ.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\vs\vs��Ŀ\ѧ��ѡ�ι���ϵͳ\VS��Ŀ�ļ�\ѧ��ѡ�ι���ϵͳ\x64\Release\*"; DestDir: "{app}\���߰���"; Flags: ignoreversion recursesubdirs createallsubdirs
; ע��: ��Ҫ���κι����ϵͳ�ļ�ʹ�� "Flags: ignoreversion"

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent
