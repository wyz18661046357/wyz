// Cha_Kan_Ke_Cheng_Ren_Shu.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "Cha_Kan_Ke_Cheng_Ren_Shu.h"


// Cha_Kan_Ke_Cheng_Ren_Shu 对话框

IMPLEMENT_DYNAMIC(Cha_Kan_Ke_Cheng_Ren_Shu, CDialogEx)

Cha_Kan_Ke_Cheng_Ren_Shu::Cha_Kan_Ke_Cheng_Ren_Shu(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Cha_Kan_Ke_Cheng_Ren_Shu, pParent)
{

}

Cha_Kan_Ke_Cheng_Ren_Shu::~Cha_Kan_Ke_Cheng_Ren_Shu()
{
}

void Cha_Kan_Ke_Cheng_Ren_Shu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Ke_Cheng_Ren_Shu_Biao_Ge);
}


BEGIN_MESSAGE_MAP(Cha_Kan_Ke_Cheng_Ren_Shu, CDialogEx)
END_MESSAGE_MAP()


// Cha_Kan_Ke_Cheng_Ren_Shu 消息处理程序


// Jiao_Shi_Cha_Kan_Ke_Cheng 消息处理程序
int Cha_Kan_Ke_Cheng_Ren_Shu::CalcCount1(int n, char(*str)[10],CString name)//读出一共有多少个课程发布
{
	TCHAR chSectionNames[2048] = { 0 };//定义一个数组，保存读取节的名字
	CString pSectionName; //保存找到的某个节名字符串的首地址
	int i = 0;          //i指向数组chSectionNames的某个位置，从0开始，顺序后移
	int j = 0;      //j用来保存下一个节名字符串的首地址相对于当前i的位置偏移量
	int k = 0;      //临时变量，用于给str数组赋值
	int m = 0;      //临时变量，用于给str数组赋值
	int count = 0;  //统计节的个数    
	GetPrivateProfileSectionNames(chSectionNames, 2048, name);//获取文件中的节名，每个节名以"\0"分割，保存在chSectionNames中
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


BOOL Cha_Kan_Ke_Cheng_Ren_Shu::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);

	CWnd* pWnd = GetDlgItem(IDC_STATIC);
	cfont.CreatePointFont(200, _T("宋体"), NULL);
	pWnd->SetFont(&cfont);


	CString str[]{ L"  ",L"课程名称",L"任课老师" ,L"学生人数"  };
	Ke_Cheng_Ren_Shu_Biao_Ge.InsertColumn(0, str[0], LVCFMT_CENTER, 45);
	for (int i = 1; i < 3; i++)
	{
		Ke_Cheng_Ren_Shu_Biao_Ge.InsertColumn(i, str[i], LVCFMT_LEFT, 210);//, LVCFMT_CENTER
	}
	Ke_Cheng_Ren_Shu_Biao_Ge.InsertColumn(3, str[3], LVCFMT_LEFT, 80);//, LVCFMT_CENTER

	char str1[50][10] = { 0 };
	int cout = CalcCount1(50, str1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
	int add = 0;

	for (int n = 1; n <= cout; n++)
	{
		CString Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao;
		Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao.Format(L" % d", n);
		CString add1;
		add1.Format(L" % d", add + 1);
		CString str_Ke_Cheng_Ming_Cheng;
		int MAX1 = 50;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
		CString a;
		a.Format(L"%s", str_Ke_Cheng_Ming_Cheng);
		CString name = L"D:\\学生选课管理系统\\各个课程的学生信息\\" + a + L".ini";
		if (PathFileExists(name))
		{
			CString str_Ke_Cheng_Ming_Cheng;
			CString str_Re_Ke_Jiao_Shi;
			int MAX2 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX2), MAX2, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX3 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Re_Ke_Jiao_Shi.GetBuffer(MAX3), MAX3, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			char str2[50][10] = { 0 };
			int cout1 = CalcCount1(50, str2, name);
			CString cout11;
			cout11.Format(L" % d", cout1);
			Ke_Cheng_Ren_Shu_Biao_Ge.InsertItem(add, add1);
			Ke_Cheng_Ren_Shu_Biao_Ge.SetItemText(add, 1, str_Ke_Cheng_Ming_Cheng);
			Ke_Cheng_Ren_Shu_Biao_Ge.SetItemText(add, 2, str_Re_Ke_Jiao_Shi);
			Ke_Cheng_Ren_Shu_Biao_Ge.SetItemText(add, 3, cout11);
			add++;
		}
		else
		{
			CString str_Ke_Cheng_Ming_Cheng;
			CString str_Re_Ke_Jiao_Shi;
			int MAX2 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX2), MAX2, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX3 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Re_Ke_Jiao_Shi.GetBuffer(MAX3), MAX3, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			char str2[50][10] = { 0 };
			int cout1 = CalcCount1(50, str2, name);
			CString cout11;
			cout11.Format(L" % d", cout1);
			Ke_Cheng_Ren_Shu_Biao_Ge.InsertItem(add, add1);
			Ke_Cheng_Ren_Shu_Biao_Ge.SetItemText(add, 1, str_Ke_Cheng_Ming_Cheng);
			Ke_Cheng_Ren_Shu_Biao_Ge.SetItemText(add, 2, str_Re_Ke_Jiao_Shi);
			Ke_Cheng_Ren_Shu_Biao_Ge.SetItemText(add, 3, L"  0 ");
			add++;
		}
	}
	Ke_Cheng_Ren_Shu_Biao_Ge.SetExtendedStyle(Ke_Cheng_Ren_Shu_Biao_Ge.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}
