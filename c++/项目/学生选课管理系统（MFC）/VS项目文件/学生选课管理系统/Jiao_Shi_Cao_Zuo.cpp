// Jiao_Shi_Cao_Zuo.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "Jiao_Shi_Cao_Zuo.h"
#include "Fa_Bu_Ke_Cheng.h"
#include"Jiao_Shi_Cha_Kan_Ke_Cheng.h"
#include "Che_Xiao_Ke_Cheng.h"
#include "Xiu_Gai_Ke_Cheng.h"
#include "Cha_Kan_Ke_Cheng_Ren_Shu.h"


// Jiao_Shi_Cao_Zuo 对话框

IMPLEMENT_DYNAMIC(Jiao_Shi_Cao_Zuo, CDialogEx)

Jiao_Shi_Cao_Zuo::Jiao_Shi_Cao_Zuo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Jiao_Shi_Cao_Zuo, pParent)
{

}

Jiao_Shi_Cao_Zuo::~Jiao_Shi_Cao_Zuo()
{
}

void Jiao_Shi_Cao_Zuo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Jiao_Shi_Cao_Zuo, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &Jiao_Shi_Cao_Zuo::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &Jiao_Shi_Cao_Zuo::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &Jiao_Shi_Cao_Zuo::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &Jiao_Shi_Cao_Zuo::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON5, &Jiao_Shi_Cao_Zuo::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON2, &Jiao_Shi_Cao_Zuo::OnBnClickedButton2)
END_MESSAGE_MAP()


// Jiao_Shi_Cao_Zuo 消息处理程序


BOOL Jiao_Shi_Cao_Zuo::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化


	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);

	CWnd* pWnd = GetDlgItem(IDC_STATIC);
	cfont.CreatePointFont(250, _T("宋体"), NULL);
	pWnd->SetFont(&cfont);

	CWnd* pWnd1 = GetDlgItem(IDC_BUTTON1);
	cfont1.CreatePointFont(120, _T("宋体"), NULL);
	pWnd1->SetFont(&cfont1);

	CWnd* pWnd2 = GetDlgItem(IDC_BUTTON2);
	cfont2.CreatePointFont(120, _T("宋体"), NULL);
	pWnd2->SetFont(&cfont2);

	CWnd* pWnd3 = GetDlgItem(IDC_BUTTON4);
	cfont3.CreatePointFont(120, _T("宋体"), NULL);
	pWnd3->SetFont(&cfont3);

	CWnd* pWnd4 = GetDlgItem(IDC_BUTTON5);
	cfont4.CreatePointFont(120, _T("宋体"), NULL);
	pWnd4->SetFont(&cfont4);

	CWnd* pWnd5 = GetDlgItem(IDC_BUTTON6);
	cfont5.CreatePointFont(120, _T("宋体"), NULL);
	pWnd5->SetFont(&cfont5);




	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


//注销当前教师账号的登录
void Jiao_Shi_Cao_Zuo::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码

	WritePrivateProfileString(L"当前登录的教师账号信息", L"Zhang_Hao", NULL, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");
	WritePrivateProfileString(L"当前登录的教师账号信息", L"Mi_Ma", NULL, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");
	WritePrivateProfileString(L"当前登录的教师账号信息", NULL, NULL, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");
	DeleteFile(L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");

	CDialogEx::OnCancel();
}


//查询当前账号已发布的课程信息
void Jiao_Shi_Cao_Zuo::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Jiao_Shi_Cha_Kan_Ke_Cheng dlg2;
	dlg2.DoModal();
}


//发布新的课程
void Jiao_Shi_Cao_Zuo::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	Fa_Bu_Ke_Cheng dlg1;
	dlg1.DoModal();
}


//撤销已发布的课程
void Jiao_Shi_Cao_Zuo::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	Che_Xiao_Ke_Cheng dlg3;
	dlg3.DoModal();
}


//修改已发布的课程的信息
void Jiao_Shi_Cao_Zuo::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	Xiu_Gai_Ke_Cheng dlg4;
	dlg4.DoModal();
}


//所有课程的已预选学生人数
void Jiao_Shi_Cao_Zuo::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	Cha_Kan_Ke_Cheng_Ren_Shu dlg5;
	dlg5.DoModal();

}
