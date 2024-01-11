
// 学生选课管理系统Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "学生选课管理系统.h"
#include "学生选课管理系统Dlg.h"
#include "afxdialogex.h"
#include"DengLu_ZhuCe.h"
#include"Xue_Sheng_Cao_Zuo.h"
#include"Jiao_Shi_Cao_Zuo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{

}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C学生选课管理系统Dlg 对话框



C学生选课管理系统Dlg::C学生选课管理系统Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MY_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C学生选课管理系统Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC1, m_static);
	DDX_Control(pDX, IDC_STATIC2, m_picture);
}

BEGIN_MESSAGE_MAP(C学生选课管理系统Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_STN_CLICKED(IDC_STATIC1, &C学生选课管理系统Dlg::OnStnClickedStatic1)
	ON_STN_CLICKED(IDC_STATIC2, &C学生选课管理系统Dlg::OnStnClickedStatic2)
END_MESSAGE_MAP()



// C学生选课管理系统Dlg 消息处理程序

BOOL C学生选课管理系统Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码







	m_Font.CreatePointFont(300,LPCTSTR("Arial"));	
	//字体高度，字体宽度，，，字体的磅数，...,字体的名称
	//CEdit *m_Edit=(CEdit *)GetDlgItem(IDC_EDIT1);
	m_static.SetFont(&m_Font, TRUE);
	m_static.SetFont(&m_Font);

		CString csPath(TEXT("D:\\学生选课管理系统"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统"))

	{
		CreateDirectory(csPath, 0);//不存在则创建
	}
	else { ; }

	CString csPath_Ke_Cheng(TEXT("D:\\学生选课管理系统\\课程信息"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统\\课程信息"))

	{
		CreateDirectory(csPath_Ke_Cheng, 0);//不存在则创建
	}
	else { ; }

	CString csPath_Deng_Lu(TEXT("D:\\学生选课管理系统\\当前登录账号密码信息"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统\\当前登录账号密码信息"))

	{
		CreateDirectory(csPath_Deng_Lu, 0);//不存在则创建
	}
	else { ; }

	CString csPath_Xue_Sheng_Xin_Xi(TEXT("D:\\学生选课管理系统\\各个课程的学生信息"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统\\各个课程的学生信息"))

	{
		CreateDirectory(csPath_Xue_Sheng_Xin_Xi, 0);//不存在则创建
	}
	else { ; }

	CString csPath_Zhang_Hao_Xin_Xi(TEXT("D:\\学生选课管理系统\\账号密码信息"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统\\账号密码信息"))

	{
		CreateDirectory(csPath_Zhang_Hao_Xin_Xi, 0);//不存在则创建
	}
	else { ; }
	
	CRect rect;
	GetDlgItem(IDC_STATIC2)->GetWindowRect(&rect);           //IDC_WAVE_DRAW为Picture Control的ID
	ScreenToClient(&rect);
	GetDlgItem(IDC_STATIC2)->MoveWindow(rect.left, rect.top, 600, 600, true);    //固定Picture Control控件的大小


	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void C学生选课管理系统Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void C学生选课管理系统Dlg::OnPaint()
{


	/*更改图片控件中插入的bmp图片大小*/
	{
	        UpdateWindow();
			CBitmap bitmap;
			//加载指定位图资源 Bmp图片ID  
			bitmap.LoadBitmap(IDB_BITMAP1);
			//获取对话框上的句柄 图片控件ID  
			CStatic* p = (CStatic*)GetDlgItem(IDC_STATIC2);
			//设置静态控件窗口风格为位图居中显示   
			p->ModifyStyle(0xf, SS_BITMAP | SS_CENTERIMAGE);
			//将图片设置到Picture控件上  
			BITMAP bmpInfo;
			bitmap.GetBitmap(&bmpInfo);
			CDC dcMemory;
			CDC* pDC = GetDlgItem(IDC_STATIC2)->GetDC();
			dcMemory.CreateCompatibleDC(pDC);
			CBitmap* pOldBitmap = dcMemory.SelectObject(&bitmap);
			CRect rect;
			m_picture.GetClientRect(&rect);
			int nX = rect.left + (rect.Width() - bmpInfo.bmWidth) / 2;
			int nY = rect.top + (rect.Height() - bmpInfo.bmHeight) / 2;
			//pDC->BitBlt(0, 0, bmpInfo.bmWidth, bmpInfo.bmHeight, &dcMemory, 0, 0, SRCCOPY);  
			pDC->SetStretchBltMode(STRETCH_HALFTONE);
			pDC->StretchBlt(0, 0, rect.Width(), rect.Height(), &dcMemory, 0, 0, bmpInfo.bmWidth, bmpInfo.bmHeight, SRCCOPY);
			dcMemory.SelectObject(pOldBitmap);
			ReleaseDC(pDC);
	}

		

	
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
	
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C学生选课管理系统Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C学生选课管理系统Dlg::OnStnClickedStatic1()
{
	// TODO: 在此添加控件通知处理程序代码
	//设置Static字体  
 //或者GetDlgItem(IDC_STATIC1)->SetFont(m_Font);

}


void C学生选课管理系统Dlg::OnStnClickedStatic2()
{
	// TODO: 在此添加控件通知处理程序代码
	DengLu_ZhuCe dlg;
	dlg.DoModal();


	//判断 当前登录学生账号.ini 文件是否存在，存在即为登录状态
	CFileFind finder1;
	BOOL ifFind1 = finder1.FindFile(_T("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini"));
	CString csPath1(TEXT("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini"));
	if (ifFind1)
	{

		Xue_Sheng_Cao_Zuo dlg1;
		dlg1.DoModal();

	}
	else { ; }


	//判断 当前登录教师账号.ini 文件是否存在，存在即为登录状态
	CFileFind finder2;
	BOOL ifFind2 = finder2.FindFile(_T("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini"));
	CString csPath2(TEXT("D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini"));
	if (ifFind2)
	{

		Jiao_Shi_Cao_Zuo dlg2;
		dlg2.DoModal();

	}
	else { ; }

}
