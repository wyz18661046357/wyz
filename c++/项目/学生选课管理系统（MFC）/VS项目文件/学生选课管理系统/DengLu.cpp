// DengLu.cpp: 实现文件
//
#include <iostream>
#include "pch.h"
#include "stdafx.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "DengLu.h"
#include"学生选课管理系统Dlg.h"


// DengLu 对话框

IMPLEMENT_DYNAMIC(DengLu, CDialogEx)

DengLu::DengLu(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DengLu, pParent)
{



}

DengLu::~DengLu()
{
}

void DengLu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDCANCEL, M_WenBen);
}


BEGIN_MESSAGE_MAP(DengLu, CDialogEx)
//	ON_WM_CTLCOLOR()
ON_EN_CHANGE(IDC_EDIT1, &DengLu::OnEnChangeEdit1)
ON_EN_CHANGE(IDC_EDIT2, &DengLu::OnEnChangeEdit2)
ON_BN_CLICKED(IDOK, &DengLu::OnBnClickedOk)
ON_BN_CLICKED(IDCANCEL, &DengLu::OnBnClickedCancel)
END_MESSAGE_MAP()


// DengLu 消息处理程序





BOOL DengLu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化


	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);


	CString csPath(TEXT("D:\\学生选课管理系统\\当前登录账号密码信息"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统\\当前登录账号密码信息"))

	{

		CreateDirectory(csPath, 0);//不存在则创建

	}
	else { ; }



	CWnd* pWnd = GetDlgItem(IDC_XueShengDengLuWenBen);
	cfont.CreatePointFont(250, _T("宋体"), NULL);
	pWnd->SetFont(&cfont);

	CWnd* pWnd1 = GetDlgItem(IDC_ZhangHaoWenBen2);
	cfont1.CreatePointFont(200, _T("宋体"), NULL);
	pWnd1->SetFont(&cfont1);

	CWnd* pWnd2 = GetDlgItem(IDC_MiMaWenBen);
	cfont2.CreatePointFont(200, _T("宋体"), NULL);
	pWnd2->SetFont(&cfont2);
	
	CWnd* pWnd3 = GetDlgItem(IDC_ZhuYiWenBen);
	cfont3.CreatePointFont(100, _T("宋体"), NULL);
	pWnd3->SetFont(&cfont3);

	CWnd* pWnd4 = GetDlgItem(IDC_EDIT1);
	cfont4.CreatePointFont(210, _T("宋体"), NULL);
	pWnd4->SetFont(&cfont4);

	CWnd* pWnd5 = GetDlgItem(IDC_EDIT2);
	cfont5.CreatePointFont(210, _T("宋体"), NULL);
	pWnd5->SetFont(&cfont5);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


void DengLu::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void DengLu::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}



int DengLu::CalcCount(int n, char(*str)[10])//读出一共有多少个学生注册
{
	TCHAR chSectionNames[2048] = { 0 };//定义一个数组，保存读取节的名字
	CString pSectionName; //保存找到的某个节名字符串的首地址
	int i = 0;          //i指向数组chSectionNames的某个位置，从0开始，顺序后移
	int j = 0;      //j用来保存下一个节名字符串的首地址相对于当前i的位置偏移量
	int k = 0;      //临时变量，用于给str数组赋值
	int m = 0;      //临时变量，用于给str数组赋值
	int count = 0;      //统计节的个数    
	GetPrivateProfileSectionNames(chSectionNames, 2048, L"D:\\学生选课管理系统\\账号密码信息\\学生账号信息.ini");//获取文件中的节名，每个节名以"\0"分割，保存在chSectionNames中
	//要加头文件
	for (i = 0; i < 2048; i++, j++)//对chSectionName中保存的内容进行拆分
	{
		if (chSectionNames[0] == '\0')//如果第一个字符就是0，则说明ini中一个节也没有，
		{
			break;
		}
		if (chSectionNames[i] == '\0')
		{
			count++;
			pSectionName = &chSectionNames[i - j]; //找到一个0，则说明从这个字符往前，减掉j个偏移量，
			//就是一个节名的首地址 
			j = -1;                               //找到一个节名后，j的值要还原，以统计下一个节名地址的偏移量
			//赋成-1是因为节名字符串的最后一个字符0是终止符，不能作为节名
			//在获取节名的时候可以获取该节中键的值，前提是我们知道该节中有哪些键。
			if (chSectionNames[i + 1] == 0)
			{
				break;      //当两个相邻的字符都是0时，则所有的节名都已找到，循环终止
			}
		}
	}
	return count;//返回节名的个数
}



void DengLu::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString a;
	CString b;
		int Pan_Duan=10;
	if (GetDlgItemText(IDC_EDIT1, a) == NULL && GetDlgItemText(IDC_EDIT2, b) == NULL)
	{
		MessageBox(L"账号与密码不能为空！", L"错误提示", MB_ICONWARNING);

	}
	else if (GetDlgItemText(IDC_EDIT1, a) == NULL)
	{
		MessageBox(L"账号不能为空！", L"错误提示", MB_ICONWARNING);
	}
	else if (GetDlgItemText(IDC_EDIT2, b) == NULL)
	{
		MessageBox(L"密码不能为空！", L"错误提示", MB_ICONWARNING);
	}
	else
	{
		GetDlgItemText(IDC_EDIT1, a);
		GetDlgItemText(IDC_EDIT2, b);
		char str[50][10] = { 0 };
		int cout = CalcCount(50, str);
		int n ;//当前判断的账号序号
		CString NUM;
		for (n = 1; n <= cout; n++)
		{
			NUM.Format(L" % d", n);
			int MAX1 = 50;
			CString str_Zhang_Hao_Du_Chu;
			GetPrivateProfileString(NUM, L"Zhang_Hao", NUM, str_Zhang_Hao_Du_Chu.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\账号密码信息\\学生账号信息.ini");
			int MAX2 = 50;
			CString str_Mi_Ma_Du_Chu;
			GetPrivateProfileString(NUM, L"Mi_Ma", NUM, str_Mi_Ma_Du_Chu.GetBuffer(MAX2), MAX2, L"D:\\学生选课管理系统\\账号密码信息\\学生账号信息.ini");
			if (a == str_Zhang_Hao_Du_Chu && b == str_Mi_Ma_Du_Chu)
			{
				Pan_Duan = 1;
				CString str_Zhang_Hao;  str_Zhang_Hao = a;
				WritePrivateProfileString(L"当前登录的学生账号信息", L"Zhang_Hao", str_Zhang_Hao, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini");
				CString str_Mi_Ma;  str_Mi_Ma = b;
				WritePrivateProfileString(L"当前登录的学生账号信息", L"Mi_Ma", str_Mi_Ma, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini");
				break;
			}
			else if (a == str_Zhang_Hao_Du_Chu && b != str_Mi_Ma_Du_Chu)
			{
				Pan_Duan = 2;
				MessageBox(L"密码错误！", L"错误提示", MB_ICONWARNING);
				break;
			}
		}
		if (n == cout + 1)
		{
		MessageBox(L"账号不存在！请先注册账号！", L"错误提示", MB_ICONWARNING);
		Pan_Duan = 0;
		}

	}
	if (Pan_Duan == 1)
	{
				CDialogEx::OnCancel();
	}
}


void DengLu::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
