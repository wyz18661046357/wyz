// Fa_Bu_Ke_Cheng.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "Fa_Bu_Ke_Cheng.h"


// Fa_Bu_Ke_Cheng 对话框

IMPLEMENT_DYNAMIC(Fa_Bu_Ke_Cheng, CDialogEx)

Fa_Bu_Ke_Cheng::Fa_Bu_Ke_Cheng(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Fa_Bu_Ke_Cheng, pParent)
{

}

Fa_Bu_Ke_Cheng::~Fa_Bu_Ke_Cheng()
{
}

void Fa_Bu_Ke_Cheng::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Fa_Bu_Ke_Cheng, CDialogEx)
	ON_BN_CLICKED(IDOK, &Fa_Bu_Ke_Cheng::OnBnClickedOk)
END_MESSAGE_MAP()


// Fa_Bu_Ke_Cheng 消息处理程序


BOOL Fa_Bu_Ke_Cheng::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);


	CWnd* pWnd = GetDlgItem(IDC_STATIC);
	cfont.CreatePointFont(300, _T("宋体"), NULL);
	pWnd->SetFont(&cfont);

	CWnd* pWnd1 = GetDlgItem(IDC_Ke_Cheng_Ming_Cheng);
	cfont1.CreatePointFont(180, _T("宋体"), NULL);
	pWnd1->SetFont(&cfont1);

	CWnd* pWnd2 = GetDlgItem(IDC_Ming_Cheng_Shu_Ru);
	cfont2.CreatePointFont(190, _T("宋体"), NULL);
	pWnd2->SetFont(&cfont2);

	CWnd* pWnd3 = GetDlgItem(IDC_Ren_Ke_Jiao_Shi);
	cfont3.CreatePointFont(180, _T("宋体"), NULL);
	pWnd3->SetFont(&cfont3);

	CWnd* pWnd4 = GetDlgItem(IDC_Jiao_Shi_Shu_Ru);
	cfont4.CreatePointFont(190, _T("宋体"), NULL);
	pWnd4->SetFont(&cfont4);

	CWnd* pWnd5 = GetDlgItem(IDC_Shang_Ke_Di_Dian);
	cfont5.CreatePointFont(180, _T("宋体"), NULL);
	pWnd5->SetFont(&cfont5);

	CWnd* pWnd6 = GetDlgItem(IDC_Di_Dian_Shu_Ru);
	cfont6.CreatePointFont(190, _T("宋体"), NULL);
	pWnd6->SetFont(&cfont6);

	CWnd* pWnd7 = GetDlgItem(IDC_Shang_Ke_Shi_Jian);
	cfont7.CreatePointFont(180, _T("宋体"), NULL);
	pWnd7->SetFont(&cfont7);

	CWnd* pWnd8 = GetDlgItem(IDC_Shi_Jian_Shu_Ru);
	cfont8.CreatePointFont(190, _T("宋体"), NULL);
	pWnd8->SetFont(&cfont8);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}



int Fa_Bu_Ke_Cheng::CalcCount(int n, char(*str)[10])//读出一共有多少个课程发布
{
	TCHAR chSectionNames[2048] = { 0 };//定义一个数组，保存读取节的名字
	CString pSectionName; //保存找到的某个节名字符串的首地址
	int i = 0;          //i指向数组chSectionNames的某个位置，从0开始，顺序后移
	int j = 0;      //j用来保存下一个节名字符串的首地址相对于当前i的位置偏移量
	int k = 0;      //临时变量，用于给str数组赋值
	int m = 0;      //临时变量，用于给str数组赋值
	int count = 0;      //统计节的个数    
	GetPrivateProfileSectionNames(chSectionNames, 2048, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");//获取文件中的节名，每个节名以"\0"分割，保存在chSectionNames中
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


void Fa_Bu_Ke_Cheng::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码

	char str[50][10] = { 0 };
	int cout = CalcCount(50, str);
	CString Ke_Cheng_Ming_Cheng;
	CString Re_Ke_Jiao_Shi;
	CString Shang_Ke_Di_Dian;
	CString Shang_Ke_Shi_Jian;
	GetDlgItemText(IDC_Ming_Cheng_Shu_Ru, Ke_Cheng_Ming_Cheng);
	GetDlgItemText(IDC_Jiao_Shi_Shu_Ru, Re_Ke_Jiao_Shi);
	GetDlgItemText(IDC_Di_Dian_Shu_Ru, Shang_Ke_Di_Dian);
	GetDlgItemText(IDC_Shi_Jian_Shu_Ru, Shang_Ke_Shi_Jian);

	int MAX1 = 50;
	CString str_Zhang_Hao_Du_Chu;
	GetPrivateProfileString(L"当前登录的教师账号信息", L"Zhang_Hao", L"当前登录的教师账号信息", str_Zhang_Hao_Du_Chu.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");

	cout++;
	CString Du_Chu_Fa_Bu_Ke_Cheng_Shu_Liang;
	Du_Chu_Fa_Bu_Ke_Cheng_Shu_Liang.Format(L" % d", cout);
	WritePrivateProfileString(Du_Chu_Fa_Bu_Ke_Cheng_Shu_Liang, L"Fa_Bu_Ke_Cheng_Zhang_Hao", str_Zhang_Hao_Du_Chu, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
	WritePrivateProfileString(Du_Chu_Fa_Bu_Ke_Cheng_Shu_Liang, L"Ke_Cheng_Ming_Cheng", Ke_Cheng_Ming_Cheng, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
	WritePrivateProfileString(Du_Chu_Fa_Bu_Ke_Cheng_Shu_Liang, L"Re_Ke_Jiao_Shi", Re_Ke_Jiao_Shi, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
	WritePrivateProfileString(Du_Chu_Fa_Bu_Ke_Cheng_Shu_Liang, L"Shang_Ke_Di_Dian", Shang_Ke_Di_Dian, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
	WritePrivateProfileString(Du_Chu_Fa_Bu_Ke_Cheng_Shu_Liang, L"Shang_Ke_Shi_Jian", Shang_Ke_Shi_Jian, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
	
	CString csPath_Ke_Cheng(TEXT("D:\\学生选课管理系统\\各个课程的学生信息"));
	if (!PathIsDirectory(L"D:\\学生选课管理系统\\各个课程的学生信息"))
	{
		CreateDirectory(csPath_Ke_Cheng, 0);//不存在则创建
	}
	else { ; }
	CDialogEx::OnOK();
}
