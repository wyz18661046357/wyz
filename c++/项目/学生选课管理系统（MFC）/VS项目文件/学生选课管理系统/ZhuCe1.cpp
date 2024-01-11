// ZhuCe1.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "ZhuCe1.h"


// ZhuCe1 对话框

IMPLEMENT_DYNAMIC(ZhuCe1, CDialogEx)

ZhuCe1::ZhuCe1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ZhuCe1, pParent)
{

}

ZhuCe1::~ZhuCe1()
{
}

void ZhuCe1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ZhuCe1, CDialogEx)
	ON_BN_CLICKED(IDOK, &ZhuCe1::OnBnClickedOk)
END_MESSAGE_MAP()


// ZhuCe1 消息处理程序


BOOL ZhuCe1::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化


	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);


	CString csPath(TEXT("D:\\学生选课管理系统\\账号密码信息"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统\\账号密码信息"))

	{

		CreateDirectory(csPath, 0);//不存在则创建

	}
	else { ; }


	CWnd* pWnd = GetDlgItem(IDC_JiaoShiZhuCeWenBen);
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


int ZhuCe1::CalcCount1(int n, char(*str)[10])//读出一共有多少个教师注册
{
	TCHAR chSectionNames[2048] = { 0 };//定义一个数组，保存读取节的名字
	CString pSectionName; //保存找到的某个节名字符串的首地址
	int i = 0;          //i指向数组chSectionNames的某个位置，从0开始，顺序后移
	int j = 0;      //j用来保存下一个节名字符串的首地址相对于当前i的位置偏移量
	int k = 0;      //临时变量，用于给str数组赋值
	int m = 0;      //临时变量，用于给str数组赋值
	int count = 0;      //统计节的个数    
	GetPrivateProfileSectionNames(chSectionNames, 2048, L"D:\\学生选课管理系统\\账号密码信息\\教师账号信息.ini");//获取文件中的节名，每个节名以"\0"分割，保存在chSectionNames中
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



void ZhuCe1::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString a;
	CString b;
	char str[50][10] = { 0 };
	int cout = CalcCount1(50, str);
	if (GetDlgItemText(IDC_EDIT1, a) == NULL && GetDlgItemText(IDC_EDIT2, b) == NULL)
	{
	MessageBox(L"账号与密码不能为空！", L"错误提示", MB_ICONWARNING);
	
	}
	else if (GetDlgItemText(IDC_EDIT1, a)==NULL)
	{
		MessageBox(L"账号不能为空！", L"错误提示", MB_ICONWARNING);
	}
	else if (GetDlgItemText(IDC_EDIT2, b) == NULL)
	{
		MessageBox(L"密码不能为空！", L"错误提示", MB_ICONWARNING);
	}
	else
	{
		cout++;
		CString Du_Chu_Zhu_Ce_Jiao_Shi_Ren_Shu;
		Du_Chu_Zhu_Ce_Jiao_Shi_Ren_Shu.Format(L" % d", cout);
		CString str_Zhang_Hao;  str_Zhang_Hao = a;
		WritePrivateProfileString(Du_Chu_Zhu_Ce_Jiao_Shi_Ren_Shu, L"Zhang_Hao", str_Zhang_Hao, L"D:\\学生选课管理系统\\账号密码信息\\教师账号信息.ini");
		CString str_Mi_Ma;  str_Mi_Ma = b;
		WritePrivateProfileString(Du_Chu_Zhu_Ce_Jiao_Shi_Ren_Shu, L"Mi_Ma", str_Mi_Ma, L"D:\\学生选课管理系统\\账号密码信息\\教师账号信息.ini");
		CDialog::OnOK();
	}


}
