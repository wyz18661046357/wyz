// Xue_Sheng_Wo_De_Yu_Yue.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "Xue_Sheng_Wo_De_Yu_Yue.h"


// Xue_Sheng_Wo_De_Yu_Yue 对话框

IMPLEMENT_DYNAMIC(Xue_Sheng_Wo_De_Yu_Yue, CDialogEx)

Xue_Sheng_Wo_De_Yu_Yue::Xue_Sheng_Wo_De_Yu_Yue(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Xue_Sheng_Wo_De_Yu_Yue, pParent)
{

}

Xue_Sheng_Wo_De_Yu_Yue::~Xue_Sheng_Wo_De_Yu_Yue()
{
}

void Xue_Sheng_Wo_De_Yu_Yue::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Yi_Yu_Xuan_Ke_Cheng_Biao_Ge);
}


BEGIN_MESSAGE_MAP(Xue_Sheng_Wo_De_Yu_Yue, CDialogEx)
END_MESSAGE_MAP()


// Xue_Sheng_Wo_De_Yu_Yue 消息处理程序



// Jiao_Shi_Cha_Kan_Ke_Cheng 消息处理程序
int Xue_Sheng_Wo_De_Yu_Yue::CalcCount(int n, char(*str)[10])//读出一共有多少个课程发布
{
	TCHAR chSectionNames[2048] = { 0 };//定义一个数组，保存读取节的名字
	CString pSectionName; //保存找到的某个节名字符串的首地址
	int i = 0;          //i指向数组chSectionNames的某个位置，从0开始，顺序后移
	int j = 0;      //j用来保存下一个节名字符串的首地址相对于当前i的位置偏移量
	int k = 0;      //临时变量，用于给str数组赋值
	int m = 0;      //临时变量，用于给str数组赋值
	int count = 0;  //统计节的个数    
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




BOOL Xue_Sheng_Wo_De_Yu_Yue::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);

	CWnd* pWnd = GetDlgItem(IDC_STATIC);
	cfont.CreatePointFont(200, _T("宋体"), NULL);
	pWnd->SetFont(&cfont);

	char str1[50][10] = { 0 };
	int cout = CalcCount(50, str1);
	int add = 0;
	int MAX10 = 50;
	CString str_Zhang_Hao_Du_Chu;
	GetPrivateProfileString(L"当前登录的学生账号信息", L"Zhang_Hao", L"当前登录的学生账号信息", str_Zhang_Hao_Du_Chu.GetBuffer(MAX10), MAX10, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录学生账号.ini");

	CString str[]{ L"  ",L"课程名称",L"任课老师" ,L"上课地点" ,L"上课时间" };
	Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.InsertColumn(0, str[0], LVCFMT_CENTER, 45);
	for (int i = 1; i < 5; i++)
	{
		Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.InsertColumn(i, str[i], LVCFMT_LEFT, 180);//, LVCFMT_CENTER
	}

	for (int i = 1; i <= cout; i++)
	{
		CString Dang_Qian_Ke_Cheng_Xu_Hao;
		Dang_Qian_Ke_Cheng_Xu_Hao.Format(L" % d", i);
		CString add1;
		add1.Format(L" % d", add+1);
		CString Du_Chu_Ke_Cheng_Ming_Cheng;
		int MAX1 = 50;
		GetPrivateProfileString(Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Dang_Qian_Ke_Cheng_Xu_Hao, Du_Chu_Ke_Cheng_Ming_Cheng.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
		CString a;
		a.Format(L"%s", Du_Chu_Ke_Cheng_Ming_Cheng);
		CString name = L"D:\\学生选课管理系统\\各个课程的学生信息\\"+a+L".ini";
		CString Yu_Xuan_Xue_Sheng_Zhang_Hao;
		int MAX2 = 50;
		GetPrivateProfileString(str_Zhang_Hao_Du_Chu, L"Yu_Xuan_Gai_Ke_Cheng_De_Xue_Sheng_Zhang_Hao", NULL, Yu_Xuan_Xue_Sheng_Zhang_Hao.GetBuffer(MAX2), MAX2, name);
        if (PathFileExists(name))
		{		
			if (Yu_Xuan_Xue_Sheng_Zhang_Hao == str_Zhang_Hao_Du_Chu)
		    {
				CString str_Ke_Cheng_Ming_Cheng;
				CString str_Re_Ke_Jiao_Shi;
				CString str_Shang_Ke_Di_Dian;
				CString str_Shang_Ke_Shi_Jian;

				int MAX2 = 50;
				GetPrivateProfileString(Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX2), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				int MAX3 = 50;
				GetPrivateProfileString(Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Dang_Qian_Ke_Cheng_Xu_Hao, str_Re_Ke_Jiao_Shi.GetBuffer(MAX3), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				int MAX4 = 50;
				GetPrivateProfileString(Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Di_Dian", Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Di_Dian.GetBuffer(MAX4), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				int MAX5 = 50;
				GetPrivateProfileString(Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Shi_Jian", Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Shi_Jian.GetBuffer(MAX5), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.InsertItem(add, add1);
				Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.SetItemText(add, 1, str_Ke_Cheng_Ming_Cheng);
				Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.SetItemText(add, 2, str_Re_Ke_Jiao_Shi);
				Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.SetItemText(add, 3, str_Shang_Ke_Di_Dian);
				Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.SetItemText(add, 4, str_Shang_Ke_Shi_Jian);
				add++;
	        }
		}

	}
	Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.SetExtendedStyle(Yi_Yu_Xuan_Ke_Cheng_Biao_Ge.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);


	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}
