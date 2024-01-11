// Xue_Sheng_Cao_Zuo.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "Xue_Sheng_Cao_Zuo.h"
#include "Xue_Sheng_Cha_Kan_Ke_Cheng.h"
#include "Xue_Sheng_Yu_Xuan_Ke_Cheng.h"
#include "Xue_Sheng_Qu_Xiao_Yu_Xuan.h"
#include "Xue_Sheng_Wo_De_Yu_Yue.h"


// Xue_Sheng_Cao_Zuo 对话框

IMPLEMENT_DYNAMIC(Xue_Sheng_Cao_Zuo, CDialogEx)

Xue_Sheng_Cao_Zuo::Xue_Sheng_Cao_Zuo(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Xue_Sheng_Cao_Zuo, pParent)
{

}

Xue_Sheng_Cao_Zuo::~Xue_Sheng_Cao_Zuo()
{
}

void Xue_Sheng_Cao_Zuo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Xue_Sheng_Cao_Zuo, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &Xue_Sheng_Cao_Zuo::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &Xue_Sheng_Cao_Zuo::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Xue_Sheng_Cao_Zuo::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON6, &Xue_Sheng_Cao_Zuo::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &Xue_Sheng_Cao_Zuo::OnBnClickedButton7)

END_MESSAGE_MAP()


// Xue_Sheng_Cao_Zuo 消息处理程序


BOOL Xue_Sheng_Cao_Zuo::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);

	CWnd* pWnd = GetDlgItem(IDC_STATIC);
	cfont.CreatePointFont(250, _T("宋体"), NULL);
	pWnd->SetFont(&cfont);

	CWnd* pWnd1 = GetDlgItem(IDC_BUTTON1);
	cfont1.CreatePointFont(170, _T("宋体"), NULL);
	pWnd1->SetFont(&cfont1);

	CWnd* pWnd2 = GetDlgItem(IDC_BUTTON2);
	cfont2.CreatePointFont(170, _T("宋体"), NULL);
	pWnd2->SetFont(&cfont2);


	CWnd* pWnd5 = GetDlgItem(IDC_BUTTON6);
	cfont5.CreatePointFont(170, _T("宋体"), NULL);
	pWnd5->SetFont(&cfont5);

	CWnd* pWnd6 = GetDlgItem(IDC_BUTTON7);
	cfont6.CreatePointFont(170, _T("宋体"), NULL);
	pWnd6->SetFont(&cfont6);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


//注销当前登录的学生账号
void Xue_Sheng_Cao_Zuo::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	WritePrivateProfileString(L"当前登录的学生账号信息", L"Zhang_Hao", NULL, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini");
	WritePrivateProfileString(L"当前登录的学生账号信息", L"Mi_Ma", NULL, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini");
	WritePrivateProfileString(L"当前登录的学生账号信息", NULL, NULL, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini");
	DeleteFile(L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini");
	CDialogEx::OnCancel();
}

//查询可预约课程信息
void Xue_Sheng_Cao_Zuo::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Xue_Sheng_Cha_Kan_Ke_Cheng dlg1;
	dlg1.DoModal();
}


//我的预约
void Xue_Sheng_Cao_Zuo::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	Xue_Sheng_Wo_De_Yu_Yue dlg4;
	dlg4.DoModal();
}


//预选课程
void Xue_Sheng_Cao_Zuo::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	Xue_Sheng_Yu_Xuan_Ke_Cheng dlg2;
	dlg2.DoModal();
}


//取消预选
void Xue_Sheng_Cao_Zuo::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	Xue_Sheng_Qu_Xiao_Yu_Xuan dlg3;
	dlg3.DoModal();
}