// DengLu_ZhuCe.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "DengLu_ZhuCe.h"
#include"学生选课管理系统Dlg.h"
#include"DengLu.h"
#include"DengLu1.h"
#include"ZhuCe.h"
#include"ZhuCe1.h"


// DengLu_ZhuCe 对话框

IMPLEMENT_DYNAMIC(DengLu_ZhuCe, CDialogEx)

DengLu_ZhuCe::DengLu_ZhuCe(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MY_DengLu_ZhuCe, pParent)
{



}

DengLu_ZhuCe::~DengLu_ZhuCe()
{
}

void DengLu_ZhuCe::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, m_DengLu);
	DDX_Control(pDX, IDC_COMBO2, m_XuanZe);

}


BEGIN_MESSAGE_MAP(DengLu_ZhuCe, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &DengLu_ZhuCe::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &DengLu_ZhuCe::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &DengLu_ZhuCe::OnBnClickedButton3)


END_MESSAGE_MAP()


// DengLu_ZhuCe 消息处理程序


void DengLu_ZhuCe::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	EndDialog(IDD_MY_DengLu_ZhuCe);
}




void DengLu_ZhuCe::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	if (m_XuanZe.GetCurSel() != -1)
	{
		CString strChoosed;
		m_XuanZe.GetLBText(m_XuanZe.GetCurSel(), strChoosed);
		if (strChoosed == "学生")
		{

			ZhuCe dlg1;
			dlg1.DoModal();

		}
		else if (strChoosed == "教师")
		{
			ZhuCe1 dlg1;
			dlg1.DoModal();
		}
	}
	else
	{
		MessageBox(L"请先选择你的身份！", L"错误提示", MB_ICONWARNING);
	}


	
}


void DengLu_ZhuCe::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码


	if (m_XuanZe.GetCurSel() != -1)
	{	
	CString strChoosed;
		m_XuanZe.GetLBText(m_XuanZe.GetCurSel(), strChoosed);
		if (strChoosed == "学生")
		{

			DengLu dlg1;
			dlg1.DoModal();


			//判断 当前登录学生账号.ini 文件是否存在，存在即为登录状态
			CFileFind finder;
			BOOL ifFind = finder.FindFile(_T("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini"));
			CString csPath(TEXT("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini"));
			if (ifFind)

			{

				CDialogEx::OnCancel();

			}
			else { ; }

		}
		else if (strChoosed == "教师")
		{
			DengLu1 dlg1;
			dlg1.DoModal();

			//判断 当前登录教师账号.ini 文件是否存在，存在即为登录状态
			CFileFind finder;
			BOOL ifFind = finder.FindFile(_T("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini"));
			CString csPath(TEXT("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini"));
			if (ifFind)

			{

				CDialogEx::OnCancel();

			}
			else { ; }



		}
	}
	else
	{
		MessageBox(L"请先选择你的身份！",L"错误提示", MB_ICONWARNING);
	}

}





BOOL DengLu_ZhuCe::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化


	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);


	CWnd* pWnd = GetDlgItem(IDC_BUTTON3);
	cfont1.CreatePointFont(300, _T("宋体"), NULL);
	pWnd->SetFont(&cfont1);

	CWnd* pWnd1 = GetDlgItem(IDC_BUTTON1);
	cfont2.CreatePointFont(300, _T("宋体"), NULL);
	pWnd1->SetFont(&cfont2);

	CWnd* pWnd3 = GetDlgItem(IDC_STATIC3);
	cfont3.CreatePointFont(150, _T("宋体"), NULL);
	pWnd3->SetFont(&cfont3);

	CWnd* pWnd4 = GetDlgItem(IDC_COMBO2);
	cfont4.CreatePointFont(150, _T("宋体"), NULL);
	pWnd4->SetFont(&cfont4);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}
