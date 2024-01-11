; 脚本用 Inno Setup 脚本向导 生成。
; 查阅文档获取创建 INNO SETUP 脚本文件的详细资料！

#define MyAppName "学生选课管理系统"
#define MyAppVersion "1.0"
#define MyAppPublisher "温芸仲"
#define MyAppExeName "学生选课管理系统.exe"

[Setup]
; 注意: AppId 的值是唯一识别这个程序的标志。
; 不要在其他程序中使用相同的 AppId 值。
; (在编译器中点击菜单“工具 -> 产生 GUID”可以产生一个新的 GUID)
AppId={{D50D05ED-3865-4CF5-ADC2-DE85D53243DF}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
DefaultDirName=D:\学生选课管理系统 v1.0
DefaultGroupName={#MyAppName}
LicenseFile=D:\vs\vs项目\学生选课管理系统\VS项目文件\安装许可.txt
OutputDir=D:\vs\vs项目\学生选课管理系统\VS项目文件\学生选课管理系统\x64\Debug\新建文件夹
OutputBaseFilename=学生选课管理系统_setup_v1.0
SetupIconFile=D:\vs\vs项目\学生选课管理系统\VS项目文件\学生选课管理系统\res\学生选课管理系统 .ico
Compression=lzma
SolidCompression=yes

[Languages]
Name: "chinesesimp"; MessagesFile: "compiler:Languages\ChineseSimp.isl"
Name: "chinesetrad"; MessagesFile: "compiler:Languages\ChineseTrad.isl"
Name: "english"; MessagesFile: "compiler:Languages\English.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "D:\vs\vs项目\学生选课管理系统\VS项目文件\学生选课管理系统\x64\Release\学生选课管理系统.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\vs\vs项目\学生选课管理系统\VS项目文件\学生选课管理系统\x64\Release\*"; DestDir: "{app}\乱七八糟"; Flags: ignoreversion recursesubdirs createallsubdirs
; 注意: 不要在任何共享的系统文件使用 "Flags: ignoreversion"

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent
