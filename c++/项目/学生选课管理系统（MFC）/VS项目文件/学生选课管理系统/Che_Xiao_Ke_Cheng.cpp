﻿// Che_Xiao_Ke_Cheng.cpp: 实现文件
//

#include "pch.h"
#include "学生选课管理系统.h"
#include "afxdialogex.h"
#include "Che_Xiao_Ke_Cheng.h"


// Che_Xiao_Ke_Cheng 对话框

IMPLEMENT_DYNAMIC(Che_Xiao_Ke_Cheng, CDialogEx)

Che_Xiao_Ke_Cheng::Che_Xiao_Ke_Cheng(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_Che_Xiao_Ke_Cheng, pParent)
{

}

Che_Xiao_Ke_Cheng::~Che_Xiao_Ke_Cheng()
{
}

void Che_Xiao_Ke_Cheng::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Che_Xiao_Biao_Ge);
	DDX_Control(pDX, IDC_COMBO1, Ke_Cheng_Ming_Cheng);
	DDX_Control(pDX, IDC_COMBO3, Ren_Ke_Jiao_Shi);
}


BEGIN_MESSAGE_MAP(Che_Xiao_Ke_Cheng, CDialogEx)
	ON_BN_CLICKED(IDCANCEL2, &Che_Xiao_Ke_Cheng::OnBnClickedCancel2)
	ON_CBN_SELCHANGE(IDC_COMBO1, &Che_Xiao_Ke_Cheng::OnCbnSelchangeCombo1)
	ON_CBN_SELCHANGE(IDC_COMBO3, &Che_Xiao_Ke_Cheng::OnCbnSelchangeCombo3)
END_MESSAGE_MAP()


// Che_Xiao_Ke_Cheng 消息处理程序


int Che_Xiao_Ke_Cheng::CalcCount(int n, char(*str)[10])//读出一共有多少个课程发布
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



BOOL Che_Xiao_Ke_Cheng::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, FALSE);

	CWnd* pWnd = GetDlgItem(IDC_STATIC);
	cfont.CreatePointFont(200, _T("宋体"), NULL);
	pWnd->SetFont(&cfont);

	CWnd* pWnd1 = GetDlgItem(IDC_STATIC1);
	cfont1.CreatePointFont(150, _T("宋体"), NULL);
	pWnd1->SetFont(&cfont1);

	CWnd* pWnd2 = GetDlgItem(IDC_STATIC4);
	cfont2.CreatePointFont(150, _T("宋体"), NULL);
	pWnd2->SetFont(&cfont2);

	CWnd* pWnd3 = GetDlgItem(IDC_LIST1);
	cfont3.CreatePointFont(110, _T("宋体"), NULL);
	pWnd3->SetFont(&cfont3);

	CString str[]{ L"  ",L"课程名称",L"任课老师" ,L"上课地点" ,L"上课时间" };
	Che_Xiao_Biao_Ge.InsertColumn(0, str[0], LVCFMT_CENTER, 45);
	for (int i = 1; i < 5; i++)
	{
		Che_Xiao_Biao_Ge.InsertColumn(i, str[i], LVCFMT_LEFT, 180);//, LVCFMT_CENTER
	}
	Che_Xiao_Biao_Ge.SetExtendedStyle(Che_Xiao_Biao_Ge.GetExtendedStyle() | LVS_EX_FULLROWSELECT);
	char str1[50][10] = { 0 };
	int cout = CalcCount(50, str1);
	int add1 = 0;
	for (int i = 1; i <= cout; i++)
	{
		CString Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao;
		Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao.Format(L" % d", i);

		int MAX1 = 50;
		CString str_Fa_Bu_Ke_Cheng_Zhang_Hao;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Fa_Bu_Ke_Cheng_Zhang_Hao", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Fa_Bu_Ke_Cheng_Zhang_Hao.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
		int MAX6 = 50;
		CString str_Zhang_Hao_Du_Chu;
		GetPrivateProfileString(L"当前登录的教师账号信息", L"Zhang_Hao", L"当前登录的教师账号信息", str_Zhang_Hao_Du_Chu.GetBuffer(MAX6), MAX1, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");

		CString str_Ke_Cheng_Ming_Cheng;
		CString str_Re_Ke_Jiao_Shi;
		CString str_Shang_Ke_Di_Dian;
		CString str_Shang_Ke_Shi_Jian;

		if (str_Zhang_Hao_Du_Chu == str_Fa_Bu_Ke_Cheng_Zhang_Hao)
		{
			int MAX2 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX2), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX3 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Re_Ke_Jiao_Shi.GetBuffer(MAX3), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX4 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Di_Dian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Di_Dian.GetBuffer(MAX4), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX5 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Shi_Jian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Shi_Jian.GetBuffer(MAX5), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			CString na;
			na.Format(L"%d", add1 + 1);
			Che_Xiao_Biao_Ge.InsertItem(add1, na);
			Che_Xiao_Biao_Ge.SetItemText(add1, 1, str_Ke_Cheng_Ming_Cheng);
			Che_Xiao_Biao_Ge.SetItemText(add1, 2, str_Re_Ke_Jiao_Shi);
			Che_Xiao_Biao_Ge.SetItemText(add1, 3, str_Shang_Ke_Di_Dian);
			Che_Xiao_Biao_Ge.SetItemText(add1, 4, str_Shang_Ke_Shi_Jian);
			add1++;
			Ke_Cheng_Ming_Cheng.AddString(str_Ke_Cheng_Ming_Cheng);
			Ren_Ke_Jiao_Shi.AddString(str_Re_Ke_Jiao_Shi);
		}

	}
	Che_Xiao_Biao_Ge.SetExtendedStyle(Che_Xiao_Biao_Ge.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


void Che_Xiao_Ke_Cheng::OnBnClickedCancel2()
{
	// TODO: 在此添加控件通知处理程序代码

	CString str10;
	CString str11;
	int nId,mm=0;
	//首先得到点击的位置
	POSITION pos = Che_Xiao_Biao_Ge.GetFirstSelectedItemPosition();
	if (pos == NULL)
	{
		MessageBox(L"请先在表格中选择一门你要撤销的课程！", L"提示", MB_ICONEXCLAMATION);
		return;
	}
	//得到行号，通过POSITION转化
	nId = (int)Che_Xiao_Biao_Ge.GetNextSelectedItem(pos);
//	str5.Format(L"%d", nId + 1);
//	MessageBox(L"您选中第" + str5 + L"行");
	//得到列中的内容（0表示第一列，同理1,2,3...表示第二，三，四...列）
	str10 = Che_Xiao_Biao_Ge.GetItemText(nId, 1);
	str11 = Che_Xiao_Biao_Ge.GetItemText(nId, 2);




	char str1[50][10] = { 0 };
	int cout = CalcCount(50, str1);
	int add1 = 0;
	for (int i = 1; i <= cout; i++)
	{
		CString Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao;
		Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao.Format(L" % d", i);

		int MAX1 = 50;
		CString str_Fa_Bu_Ke_Cheng_Zhang_Hao;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Fa_Bu_Ke_Cheng_Zhang_Hao", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Fa_Bu_Ke_Cheng_Zhang_Hao.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
		int MAX6 = 50;
		CString str_Zhang_Hao_Du_Chu;
		GetPrivateProfileString(L"当前登录的教师账号信息", L"Zhang_Hao", L"当前登录的教师账号信息", str_Zhang_Hao_Du_Chu.GetBuffer(MAX6), MAX6, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");

		int MAX7 = 50;
		CString Ke_Cheng_Ming_Cheng1;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, Ke_Cheng_Ming_Cheng1.GetBuffer(MAX7), MAX7, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");

		int MAX8 = 50;
		CString Ren_Ke_Jiao_Shi1;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, Ren_Ke_Jiao_Shi1.GetBuffer(MAX8), MAX8, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");

		CString str_Ke_Cheng_Ming_Cheng;
		CString str_Re_Ke_Jiao_Shi;
		CString str_Shang_Ke_Di_Dian;
		CString str_Shang_Ke_Shi_Jian;


		if (str_Zhang_Hao_Du_Chu == str_Fa_Bu_Ke_Cheng_Zhang_Hao)
		{
			if (str10 == Ke_Cheng_Ming_Cheng1&& str11== Ren_Ke_Jiao_Shi1)
			{
				mm = 1;
				WritePrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, NULL, NULL, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				for (int nn = i+1; nn <= cout; nn++)
				{
					CString num;
					num.Format(L" % d", nn);
					int MAX9 = 50;
					GetPrivateProfileString(num, L"Fa_Bu_Ke_Cheng_Zhang_Hao", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Fa_Bu_Ke_Cheng_Zhang_Hao.GetBuffer(MAX9), MAX9, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					int MAX10 = 50;
					GetPrivateProfileString(num, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX10), MAX10, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					int MAX11 = 50;
					GetPrivateProfileString(num, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Re_Ke_Jiao_Shi.GetBuffer(MAX11), MAX11, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					int MAX12 = 50;
					GetPrivateProfileString(num, L"Shang_Ke_Di_Dian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Di_Dian.GetBuffer(MAX12), MAX12, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					int MAX13 = 50;
					GetPrivateProfileString(num, L"Shang_Ke_Shi_Jian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Shi_Jian.GetBuffer(MAX13), MAX13, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					WritePrivateProfileString(num, NULL, NULL, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					CString num1;
					num1.Format(L" % d", nn-1);
					WritePrivateProfileString(num1, L"Fa_Bu_Ke_Cheng_Zhang_Hao", str_Zhang_Hao_Du_Chu, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					WritePrivateProfileString(num1, L"Ke_Cheng_Ming_Cheng", str_Ke_Cheng_Ming_Cheng, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					WritePrivateProfileString(num1, L"Re_Ke_Jiao_Shi", str_Re_Ke_Jiao_Shi, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					WritePrivateProfileString(num1, L"Shang_Ke_Di_Dian", str_Shang_Ke_Di_Dian, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
					WritePrivateProfileString(num1, L"Shang_Ke_Shi_Jian", str_Shang_Ke_Shi_Jian, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");



				}
			}

		}

	}
	if (MessageBox(L"撤销课程成功！", L"提示", MB_ICONEXCLAMATION)&&mm==1)
	CDialogEx::OnCancel();
}

//当选择下拉框某一项后，自动触发该事件
void Che_Xiao_Ke_Cheng::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
	Ren_Ke_Jiao_Shi.SetCurSel(-1);//清除当前下拉框选中的数据
	Che_Xiao_Biao_Ge.DeleteAllItems();//清空表格中的所有表项
	char str1[50][10] = { 0 };
	int cout = CalcCount(50, str1);
	int add1 = 0;
	for (int i = 1; i <= cout; i++)
	{
		CString Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao;
		Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao.Format(L" % d", i);

		int MAX1 = 50;
		CString str_Fa_Bu_Ke_Cheng_Zhang_Hao;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Fa_Bu_Ke_Cheng_Zhang_Hao", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Fa_Bu_Ke_Cheng_Zhang_Hao.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
		int MAX6 = 50;
		CString str_Zhang_Hao_Du_Chu;
		GetPrivateProfileString(L"当前登录的教师账号信息", L"Zhang_Hao", L"当前登录的教师账号信息", str_Zhang_Hao_Du_Chu.GetBuffer(MAX6), MAX6, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");
		
		int MAX7 = 50;
		CString Ke_Cheng_Ming_Cheng1;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, Ke_Cheng_Ming_Cheng1.GetBuffer(MAX7), MAX7, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");


		CString str_Ke_Cheng_Ming_Cheng;
		CString str_Re_Ke_Jiao_Shi;
		CString str_Shang_Ke_Di_Dian;
		CString str_Shang_Ke_Shi_Jian;

		CString strChoosed;
		Ke_Cheng_Ming_Cheng.GetLBText(Ke_Cheng_Ming_Cheng.GetCurSel(), strChoosed);

		if (str_Zhang_Hao_Du_Chu == str_Fa_Bu_Ke_Cheng_Zhang_Hao)
		{
			if (strChoosed == Ke_Cheng_Ming_Cheng1)
			{
			int MAX2 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX2), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX3 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Re_Ke_Jiao_Shi.GetBuffer(MAX3), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX4 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Di_Dian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Di_Dian.GetBuffer(MAX4), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			int MAX5 = 50;
			GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Shi_Jian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Shi_Jian.GetBuffer(MAX5), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
			CString na;
			na.Format(L"%d", add1 + 1);
			Che_Xiao_Biao_Ge.InsertItem(add1, na);
			Che_Xiao_Biao_Ge.SetItemText(add1, 1, str_Ke_Cheng_Ming_Cheng);
			Che_Xiao_Biao_Ge.SetItemText(add1, 2, str_Re_Ke_Jiao_Shi);
			Che_Xiao_Biao_Ge.SetItemText(add1, 3, str_Shang_Ke_Di_Dian);
			Che_Xiao_Biao_Ge.SetItemText(add1, 4, str_Shang_Ke_Shi_Jian);
			add1++;

			}

		}

	}
	Che_Xiao_Biao_Ge.SetExtendedStyle(Che_Xiao_Biao_Ge.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
}

//当选择下拉框某一项后，自动触发该事件
void Che_Xiao_Ke_Cheng::OnCbnSelchangeCombo3()
{
	// TODO: 在此添加控件通知处理程序代码
	Che_Xiao_Biao_Ge.DeleteAllItems();//清空表格中的所有表项
	Ke_Cheng_Ming_Cheng.SetCurSel(-1);//清除当前下拉框选中的数据
	char str1[50][10] = { 0 };
	int cout = CalcCount(50, str1);
	int add1 = 0;
	for (int i = 1; i <= cout; i++)
	{
		CString Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao;
		Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao.Format(L" % d", i);

		int MAX1 = 50;
		CString str_Fa_Bu_Ke_Cheng_Zhang_Hao;
		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Fa_Bu_Ke_Cheng_Zhang_Hao", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Fa_Bu_Ke_Cheng_Zhang_Hao.GetBuffer(MAX1), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
		int MAX6 = 50;
		CString str_Zhang_Hao_Du_Chu;
		GetPrivateProfileString(L"当前登录的教师账号信息", L"Zhang_Hao", L"当前登录的教师账号信息", str_Zhang_Hao_Du_Chu.GetBuffer(MAX6), MAX6, L"D:\\学生选课管理系统\\当前登录账号密码信息\\当前登录教师账号.ini");

		int MAX7 = 50;
		CString Ren_Ke_Jiao_Shi1;

		GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, Ren_Ke_Jiao_Shi1.GetBuffer(MAX7), MAX7, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");


		CString str_Ke_Cheng_Ming_Cheng;
		CString str_Re_Ke_Jiao_Shi;
		CString str_Shang_Ke_Di_Dian;
		CString str_Shang_Ke_Shi_Jian;

		CString strChoosed1;
		Ren_Ke_Jiao_Shi.GetLBText(Ren_Ke_Jiao_Shi.GetCurSel(), strChoosed1);

		if (str_Zhang_Hao_Du_Chu == str_Fa_Bu_Ke_Cheng_Zhang_Hao)
		{
			if (strChoosed1 == Ren_Ke_Jiao_Shi1)
			{
				int MAX2 = 50;
				GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Ke_Cheng_Ming_Cheng", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Ke_Cheng_Ming_Cheng.GetBuffer(MAX2), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				int MAX3 = 50;
				GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Re_Ke_Jiao_Shi", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Re_Ke_Jiao_Shi.GetBuffer(MAX3), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				int MAX4 = 50;
				GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Di_Dian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Di_Dian.GetBuffer(MAX4), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				int MAX5 = 50;
				GetPrivateProfileString(Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, L"Shang_Ke_Shi_Jian", Du_Chu_Dang_Qian_Ke_Cheng_Xu_Hao, str_Shang_Ke_Shi_Jian.GetBuffer(MAX5), MAX1, L"D:\\学生选课管理系统\\课程信息\\教师已发布的课程信息.ini");
				CString na;
				na.Format(L"%d", add1 + 1);
				Che_Xiao_Biao_Ge.InsertItem(add1, na);
				Che_Xiao_Biao_Ge.SetItemText(add1, 1, str_Ke_Cheng_Ming_Cheng);
				Che_Xiao_Biao_Ge.SetItemText(add1, 2, str_Re_Ke_Jiao_Shi);
				Che_Xiao_Biao_Ge.SetItemText(add1, 3, str_Shang_Ke_Di_Dian);
				Che_Xiao_Biao_Ge.SetItemText(add1, 4, str_Shang_Ke_Shi_Jian);
				add1++;

			}

		}

	}
	Che_Xiao_Biao_Ge.SetExtendedStyle(Che_Xiao_Biao_Ge.GetExtendedStyle() | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
}
