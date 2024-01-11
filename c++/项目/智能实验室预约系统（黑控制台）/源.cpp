#include<iostream>
#include <locale>/*使输入文本文件的中文不报乱码的头文件*/
#include <Windows.h>/*改变输出到控制台字体颜色的头文件*/
#include<fstream>/*文件操作的头文件*/
#include<conio.h>/*兼容_getch()函数的头文件*/
#include<stdlib.h>
#include <sstream>/*关于写入当前系统时间的头文件*/
#include <direct.h>/*关于文件与文件夹操作的头文件*/
#include <io.h>/*关于文件与文件夹操作的头文件*/
#include<string>/*一些关于string类型变量的操作函数头文件*/
#pragma warning(disable:4996)/*防止编译器给strncpy（）函数报错*/
using namespace std;

/*函数声明分割线*/
void aa();
char bb();
char cc();
char dd();
char ee();
char ff();
char gg();
char ii();
void mmmm();
void nnnn();
void qqqq();
void tttt();
void aaaaa();
void jjjj();
void ddddd();
void iiiii();
/*函数声明分割线*/

/*更改字体大小分界线*/
void SetFont(int size = 30) {
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = size;  //设置字体大小
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL; //字体粗细 FW_BOLD
	wcscpy_s(cfi.FaceName, L"宋体");  //设置字体，必须是控制台已有的
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
/*更改字体大小分界线*/


/*管理员数据结构分界线*/
class admin
{
protected:
	char name[10];   /*管理员姓名*/
	char password[10];   /*管理员密码*/
	char ID[5];   /*管理员工号*/
};
/*管理员数据结构分界线*/


/*学生数据结构分界线*/
class student
{
private:
	string name;   /*学生姓名*/
	string password;   /*学生密码*/
	string ID;   /*学生学号*/
	int time;   /*学生使用电脑累计时间*/
public:
	student();
	student(string name, string password, string ID, int time);
	string getname(string s1);
	string showname();
	string getpassword(string s1);
	string showpassword();
	string getID(string s1);
	string showID();
};
student::student()
{
	name = "";
	password = "";
	ID = "";
	time = 0;
}
student::student(string name, string password, string ID, int time) :name(name), password(password), ID(ID), time(time)
{

}
string student::getname(string s1)
{
	name=s1;
	return name;
}
string student::showname()
{
	return name;
}
string student::getpassword(string s1)
{
	password = s1;
	return password;
}
string student::showpassword()
{
	return password;
}
string student::getID(string s1)
{
	ID = s1;
	return ID;
}
string student::showID()
{
	return ID;
}
/*学生数据结构分界线*/


/*实验室电脑数据结构分界线*/
class lab
{
protected:
	int No;   /*实验室电脑编号*/
	string name;   /*当前使用电脑的学生的姓名*/
	string number;   /*当前使用电脑的学生的学号*/
	int eight;   /*电脑时间段状态：八点*/
	int nine;   /*电脑时间段状态：九点*/
	int ten;   /*电脑时间段状态：十点*/
	int eleven;   /*电脑时间段状态：十一点*/
	int twelve;   /*电脑时间段状态：十二点*/
	int thirteen;   /*电脑时间段状态：十三点*/
	int fourteen;   /*电脑时间段状态：十四点*/
	int fifteen;   /*电脑时间段状态：十五点*/
	int sixteen;   /*电脑时间段状态：十六点*/
	int good;
public:
	lab();
	int showNo();
	int getNo(int N);
	int showEight();
	int getEight(int N);
	int showNine();
	int getNine(int N);
	int showTen();
	int getTen(int N);
	int showeEleven();
	int geteEleven(int N);
	int showTwelve();
	int getTwelve(int N);
	int showThirteen();
	int getThirteen(int N);
	int showFourteen();
	int getFourteen(int N);
	int showFifteen();
	int getFifteen(int N);
	int showSixteen();
	int getSixteen(int N);
	int showGood();
	int getGood(int N);
};
lab::lab()
{
	No = 0;
	name = " ";
	number = " ";
	eight = 0;
	nine = 0;
	ten = 0;
	eleven = 0;
	twelve = 0;
	thirteen = 0;
	fourteen = 0;
	fifteen = 0;
	sixteen = 0;
}
int lab::getNo(int N)
{
	No = N;
	return No;
}
int lab::showNo()
{
	return No;
}
int lab::showEight()
{
	return eight;
}
int lab::getEight(int N)
{
	eight = N;
	return eight;
}
int lab::showNine()
{
	return nine;
}
int lab::getNine(int N)
{
	nine = N;
	return nine;
}
int lab::showTen()
{
	return ten;
}
int lab::getTen(int N)
{
	ten = N;
	return ten;
}
int lab::showeEleven()
{
	return eleven;
}
int lab::geteEleven(int N)
{
	eleven = N;
	return eleven;
}
int lab::showTwelve()
{
	return twelve;
}
int lab::getTwelve(int N)
{
	twelve = N;
	return twelve;
}
int lab::showThirteen()
{
	return thirteen;
}
int lab::getThirteen(int N)
{
	thirteen = N;
	return thirteen;
}
int lab::showFourteen()
{
	return fourteen;
}
int lab::getFourteen(int N)
{
	fourteen = N;
	return fourteen;
}
int lab::showFifteen()
{
	return fifteen;
}
int lab::getFifteen(int N)
{
	fifteen = N;
	return fifteen;
}
int lab::showSixteen()
{
	return sixteen;
}
int lab::getSixteen(int N)
{
	sixteen = N;
	return sixteen;
}
int lab::showGood()
{
	return good;
}
int lab::getGood(int N)
{
	good = N;
	return good;
}
/*实验室电脑数据结构分界线*/


/*返回"computer"字符串函数分界线*/
string Computer()
{
	string g = "computer";
	return g;
}
/*返回"computer"字符串函数分界线*/


/*计算当前系统日期，星期，时间的函数分割线*/
string WORDToString(WORD w)
{
	char tmpbuff[16];
	sprintf(tmpbuff, "%d", w);
	string res = tmpbuff;
	return res;
}
string getTime()
{
	string week[7] = { "星期日","星期一","星期二","星期三","星期四","星期五","星期六" };
	SYSTEMTIME now;
	string currentTime;
	GetLocalTime(&now);
	currentTime = WORDToString(now.wHour);
	return currentTime;
}
/*计算当前系统日期，星期，时间的函数分割线*/
//直接调用getTime();就能返回当前日期，星期，时间信息

/*当前日期，星期，时间写入的函数分割线*/
void llll(string h)
{
	ofstream Time;
	Time.open("D:\\实验室预约系统\\Time.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	Time << h << " ";//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	Time.close();
}
/*当前日期，星期，时间写入函数分割线*/



/*当前登录学生姓名写入函数分割线*/
 void aaaa(string h)
{
	 ofstream StudentLogIn;
	 StudentLogIn.open("D:\\实验室预约系统\\StudentLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//设定
	 StudentLogIn <<h << " ";//正常写入
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//还原区域设定
	 StudentLogIn.close();
}
 /*当前登录学生姓名写入函数分割线*/


 /*当前登录学生姓名读出函数分割线*/
 string dddd()
 {
	 string h,m;
	 ifstream StudentLogIn;
	 StudentLogIn.open("D:\\实验室预约系统\\StudentLogIn.txt", ios::app);
	 StudentLogIn >> h;
	 m = h;
	 StudentLogIn.close();
	 return m;
 }
 /*当前登录学生姓名读出函数分割线*/

  /*当前登录学生密码读出函数分割线*/
int dddd1()
 {
	 string h, m;
	 int h1, m1;
	 ifstream StudentLogIn;
	 StudentLogIn.open("D:\\实验室预约系统\\StudentLogIn.txt", ios::app);
	 StudentLogIn >> h;
	 StudentLogIn >> h1;
	 m = h;
	 m1 = h1;
	 StudentLogIn.close();
	 return m1;
 }
 /*当前登录学生密码读出函数分割线*/


   /*当前登录学生密码读出函数分割线*/
 int dddd2()
 {
	 string h, m;
	 int h1, m1;
	 int h2, m2;
	 ifstream StudentLogIn;
	 StudentLogIn.open("D:\\实验室预约系统\\StudentLogIn.txt", ios::app);
	 StudentLogIn >> h;
	 StudentLogIn >> h1;
	 StudentLogIn >> h2;
	 m = h;
	 m1 = h1;
	 m2 = h2;
	 StudentLogIn.close();
	 return m2;
 }
 /*当前登录学生密码读出函数分割线*/



 /*当前登录学生密码与学号写入函数分割线*/
 void bbbb(int h)
 {
	 ofstream StudentLogIn;
	 StudentLogIn.open("D:\\实验室预约系统\\StudentLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//设定
	 StudentLogIn << h << " ";//正常写入
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//还原区域设定
	 StudentLogIn.close();
 }
 /*当前登录学生密码与学号写入函数分割线*/


 /*注销当前登录的学生账号的函数分割线*/
 void cccc()
 {
	 string file_name = "D:\\实验室预约系统\\StudentLogIn.txt";
	 ofstream file_writer(file_name, ios_base::out);
 }
 /*注销当前登录的学生账号的函数分割线*/


 /*当前登录管理员姓名写入函数分割线*/
 void eeee(string h)
 {
	 ofstream AdministratorLogIn;
	 AdministratorLogIn.open("D:\\实验室预约系统\\AdministratorLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//设定
	 AdministratorLogIn << h << " ";//正常写入
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//还原区域设定
	 AdministratorLogIn.close();
 }
 /*当前登录管理员姓名写入函数分割线*/


 /*当前登录管理员姓名读出函数分割线*/
 string ffff()
 {
	 string h, m;
	 ifstream AdministratorLogIn;
	 AdministratorLogIn.open("D:\\实验室预约系统\\AdministratorLogIn.txt", ios::app);
	 AdministratorLogIn >> h;
	 m = h;
	 AdministratorLogIn.close();
	 return m;
 }
 /*当前登录管理员姓名读出函数分割线*/


 /*当前登录管理员密码与工号写入函数分割线*/
 void gggg(int h)
 {
	 ofstream AdministratorLogIn;
	 AdministratorLogIn.open("D:\\实验室预约系统\\AdministratorLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//设定
	 AdministratorLogIn << h << " ";//正常写入
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//还原区域设定
	 AdministratorLogIn.close();
 }
 /*当前登录管理员密码与工号写入函数分割线*/


 /*注销当前登录的管理员账号的函数分割线*/
 void hhhh()
 {
	 string file_name = "D:\\实验室预约系统\\AdministratorLogIn.txt";
	 ofstream file_writer(file_name, ios_base::out);
 }
 /*注销当前登录的管理员账号的函数分割线*/


 /*创建汇总txt文件夹的函数分割线*/
 void FileCreate()
 {
	 /*创建存放txt文件的文件夹*/
	 string di = "D:\\实验室预约系统";
	 mkdir(di.c_str());
	  string de = "D:\\实验室预约系统\\电脑状态信息";
	 mkdir(de.c_str());
/*	创建存放txt文件的文件夹*/
 }
 /*创建汇总txt文件夹的函数分割线*/


  /*删除汇总txt文件夹的函数分割线*/
 void FileDelete()
 {
	 /*删除存放txt文件的文件夹*/
	 string di = "D:\\实验室预约系统";
	 rmdir(di.c_str());
	 /*删除存放txt文件的文件夹*/
 }
 /*删除汇总txt文件夹的函数分割线*/


 /*判断学生与管理员数量统计txt文件是否存在函数分割线*/
 void SAnumber()
 {
	 const char* dir = "D:\\实验室预约系统\\number.txt";
	 int a;
	 if (_access(dir, 0) == -1)
	 {
		 ofstream number;
		 int kk = 0;
		 int kkk = 0;
		 number.open("D:\\实验室预约系统\\number.txt", ios::app);
		 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		 setlocale(LC_CTYPE, "chs");//设定
		 number << kk << " " << kkk;//正常写入
		 setlocale(LC_CTYPE, old_locale);
		 free(old_locale);//还原区域设定
		 number.close();
	 }
	 else
	 {

	 }
 }
 /*判断学生与管理员数量统计txt文件是否存在函数分割线*/


/*学生数量统计读取函数分割线*/
int Snumberout()
{
	ifstream number;
	int h;
	number.open("D:\\实验室预约系统\\number.txt", ios::app);
	number >> h;
	number.close();
	return h;
}
/*学生数量统计读取函数分割线*/


/*管理员数量统计读取函数分割线*/
int Anumberout()
{
	ifstream number;
	int h;
	int y;
	number.open("D:\\实验室预约系统\\number.txt", ios::app);
	number >> h;
	number >> y;
	number.close();
	return y;
}
/*管理员数量统计函数分割线*/


 /*学生数量统计写入函数分割线*/
 int Snumberint()
 {

		 int a = Snumberout();
		 int b = Anumberout();
	 ofstream number;
		 a++;
		 string file_name = "D:\\实验室预约系统\\number.txt";
		 ofstream file_writer(file_name, ios_base::out);
		 number.open("D:\\实验室预约系统\\number.txt", ios::app);
		 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		 setlocale(LC_CTYPE, "chs");//设定
		 number << a<< " " << b<<endl;//正常写入
		 setlocale(LC_CTYPE, old_locale);
		 free(old_locale);//还原区域设定
		 number.close();
	 return 0;
 }
 /*学生数量统计写入函数分割线*/


/*管理员数量统计写入函数分割线*/
int Anumberint()
{
	ofstream number;
	int a = Snumberout();
	int b = Anumberout();
	b++;
	string file_name = "D:\\实验室预约系统\\number.txt";
	ofstream file_writer(file_name, ios_base::out);
	number.open("D:\\实验室预约系统\\number.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	number << a << " " << b;//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	number.close();
	return 0;
}
/*管理员数量统计写入函数分割线*/


/*选择是否注销当前登录的学生账号的函数分割线*/
void kkkk()
{
	char a;
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m┌──────────────────────────────────────┐\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m│  请确认是否注销当前登录的学生账号！  │\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m└──────────────────────────────────────┘\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    ┌\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t确认注销→按1\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t取消注销→按0\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    └\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	a = _getch();
	if (a == '1')
	{
		cccc();
		aa();
	}
	else if (a == '0')
	{
		system("cls");/*清空控制台命令*/
		mmmm();
	}
}
/*选择是否注销当前登录的学生账号的函数分割线*/

	lab computer[40];
/*创建36台电脑类数组的函数分割线*/
void oooo()
{
	int n ,m;
	const char* die = "D:\\实验室预约系统\\电脑状态信息\\computer1.txt";
	int a;
	if (_access(die, 0) == -1)
	{
		for (n = 0, m = 1; n < 36; n++, m++)
		{
			string u = to_string(m);
			string h = Computer() + u;
			string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
			ofstream b1;
			b1.open(g, ios::app);
			char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
			setlocale(LC_CTYPE, "chs");//设定
			computer[n].getNo(m);
			b1 <<computer[n].showNo()<<" "<<computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
			setlocale(LC_CTYPE, old_locale);
			free(old_locale);//还原区域设定
			b1.close();
		}
	}
	else
	{
		for (n = 0, m = 1; n < 36; n++, m++)
		{
			int aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,good1;
			int kk, ll, mm, nn, oo, pp,qq,rr,ss,tt,good2;
			string u = to_string(m);
			string h = Computer() + u;
			string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
			ifstream a1;
			a1.open(g, ios::app);
			a1 >> aa;
			a1 >> bb;
			a1 >> cc;
			a1 >> dd;
			a1 >> ee;
			a1 >> ff;
			a1 >> gg;
			a1 >> hh;
			a1 >> ii;
			a1 >> jj;
			a1 >> good1;
			kk = aa;
			ll = bb;
			mm = cc;
			nn = dd;
			oo = ee;
			pp = ff;
			qq = gg;
			rr = hh;
			ss = ii;
			tt = jj;
			good2 = good1;
			computer[n].getNo(kk);
			computer[n].getEight(ll);
			computer[n].getNine(mm);
			computer[n].getTen(nn);
			computer[n].geteEleven(oo);
			computer[n].getTwelve(pp);
			computer[n].getThirteen(qq);
			computer[n].getFourteen(rr);
			computer[n].getFifteen(ss);
			computer[n].getSixteen(tt);
			computer[n].getGood(good2);
			a1.close();
		}
	}

}
/*创建40台电脑类数组的函数分割线*/


 /*判断预约文件是否存在函数分割线*/
void aaaaaa()
{
	const char* dii = "D:\\实验室预约系统\\电脑状态信息\\预约.txt";
	int a;
	if (_access(dii, 0) == -1)
	{
		ofstream number;
		number.open("D:\\实验室预约系统\\电脑状态信息\\预约.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		number.close();
	}
	else
	{

	}
}
/*判断预约文件是否存在函数分割线*/


/*学生判断是否为故障电脑*/
int yyyy(int n)
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36;
	int aa1, aa2, aa3, aa4, aa5, aa6, aa7, aa8, aa9, aa10, aa11, aa12, aa13, aa14, aa15, aa16, aa17, aa18, aa19, aa20, aa21, aa22, aa23, aa24, aa25, aa26, aa27, aa28, aa29, aa30, aa31, aa32, aa33, aa34, aa35, aa36;
	string g = "D:\\实验室预约系统\\电脑状态信息\\error.txt";
	ifstream b1;
	b1.open(g, ios::app);
	b1 >> a1;	aa1 = a1;
	b1 >> a2;	aa2 = a2;
	b1 >> a3;	aa3 = a3;
	b1 >> a4;	aa4 = a4;
	b1 >> a5;	aa5 = a5;
	b1 >> a6;	aa6 = a6;
	b1 >> a7;	aa7 = a7;
	b1 >> a8;	aa8 = a8;
	b1 >> a9;	aa9 = a9;
	b1 >> a10;	aa10 = a10;
	b1 >> a11;	aa11= a11;
	b1 >> a12;	aa12= a12;
	b1 >> a13;	aa13= a13;
	b1 >> a14;	aa14= a14;
	b1 >> a15;	aa15= a15;
	b1 >> a16;	aa16= a16;
	b1 >> a17;	aa17= a17;
	b1 >> a18;	aa18= a18;
	b1 >> a19;	aa19= a19;
	b1 >> a20;	aa20= a20;
	b1 >> a21;	aa21= a21;
	b1 >> a22;	aa22= a22;
	b1 >> a23;	aa23= a23;
	b1 >> a24;	aa24= a24;
	b1 >> a25;	aa25= a25;
	b1 >> a26;	aa26= a26;
	b1 >> a27;	aa27= a27;
	b1 >> a28;	aa28= a28;
	b1 >> a29;	aa29= a29;
	b1 >> a30;	aa30= a30;
	b1 >> a31;	aa31= a31;
	b1 >> a32;	aa32= a32;
	b1 >> a33;	aa33= a33;
	b1 >> a34;	aa34= a34;
	b1 >> a35;	aa35= a35;
	b1 >> a36;	aa36= a36;
	b1.close();
	switch (n)
	{
	case 1:	if (aa1 == 1) return 1; else return 0; break;
	case 2:	if (aa2 == 1) return 1; else return 0; break;
	case 3:	if (aa3 == 1) return 1; else return 0; break;
	case 4:	if (aa4 == 1) return 1; else return 0; break;
	case 5:	if (aa5 == 1) return 1; else return 0; break;
	case 6:	if (aa6 == 1) return 1; else return 0; break;
	case 7:	if (aa7 == 1) return 1; else return 0; break;
	case 8:	if (aa8 == 1) return 1; else return 0; break;
	case 9:	if (aa9 == 1) return 1; else return 0; break;
	case 10:	if (aa10 == 1) return 1; else return 0; break;
	case 11:	if (aa11 == 1) return 1; else return 0; break;
	case 12:	if (aa12 == 1) return 1; else return 0; break;
	case 13:	if (aa13 == 1) return 1; else return 0; break;
	case 14:	if (aa14 == 1) return 1; else return 0; break;
	case 15:	if (aa15 == 1) return 1; else return 0; break;
	case 16:	if (aa16 == 1) return 1; else return 0; break;
	case 17:	if (aa17 == 1) return 1; else return 0; break;
	case 18:	if (aa18 == 1) return 1; else return 0; break;
	case 19:	if (aa19 == 1) return 1; else return 0; break;
	case 20:	if (aa20 == 1) return 1; else return 0; break;
	case 21:	if (aa21 == 1) return 1; else return 0; break;
	case 22:	if (aa22 == 1) return 1; else return 0; break;
	case 23:	if (aa23 == 1) return 1; else return 0; break;
	case 24:	if (aa24 == 1) return 1; else return 0; break;
	case 25:	if (aa25 == 1) return 1; else return 0; break;
	case 26:	if (aa26 == 1) return 1; else return 0; break;
	case 27:	if (aa27 == 1) return 1; else return 0; break;
	case 28:	if (aa28 == 1) return 1; else return 0; break;
	case 29:	if (aa29 == 1) return 1; else return 0; break;
	case 30:	if (aa30 == 1) return 1; else return 0; break;
	case 31:	if (aa31 == 1) return 1; else return 0; break;
	case 32:	if (aa32 == 1) return 1; else return 0; break;
	case 33:	if (aa33 == 1) return 1; else return 0; break;
	case 34:	if (aa34 == 1) return 1; else return 0; break;
	case 35:	if (aa35 == 1) return 1; else return 0; break;
	case 36:	if (aa36 == 1) return 1; else return 0; break;
	}


}
/*学生判断是否为故障电脑*/


/*学生判断8:00～9:00是否预约函数分界线*/
string rrrr1(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (ll == 0)
	{
		return "未预约";
	}
	else if (ll == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断8:00～9:00是否预约函数分界线*/


/*学生判断9:00～10:00是否预约函数分界线*/
string rrrr2(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (mm == 0)
	{
		return "未预约";
	}
	else if (mm == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断9:00～10:00是否预约函数分界线*/


/*学生判断10:00～11:00是否预约函数分界线*/
string rrrr3(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (nn == 0)
	{
		return "未预约";
	}
	else if (nn == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断10:00～11:00是否预约函数分界线*/


/*学生判断11:00～12:00是否预约函数分界线*/
string rrrr4(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (oo == 0)
	{
		return "未预约";
	}
	else if (oo == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断11:00～12:00是否预约函数分界线*/


/*学生判断12:00～13:00是否预约函数分界线*/
string rrrr5(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (pp == 0)
	{
		return "未预约";
	}
	else if (pp == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断12:00～13:00是否预约函数分界线*/



/*学生判断13:00～14:00是否预约函数分界线*/
string rrrr6(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (qq== 0)
	{
		return "未预约";
	}
	else if (qq == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断13:00～14:00是否预约函数分界线*/


/*学生判断14:00～15:00是否预约函数分界线*/
string rrrr7(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (rr== 0)
	{
		return "未预约";
	}
	else if (rr == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断14:00～15:00是否预约函数分界线*/


/*学生判断15:00～16:00是否预约函数分界线*/
string rrrr8(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (ss== 0)
	{
		return "未预约";
	}
	else if (ss== 1)
	{
		return "已预约";
	}
	}

}
/*学生判断15:00～16:00是否预约函数分界线*/


/*学生判断16:00～17:00是否预约函数分界线*/
string rrrr9(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (yyyy(n) == 1)
	{
		return "已故障";
	}
	else
	{
	if (tt == 0)
	{
		return "未预约";
	}
	else if (tt == 1)
	{
		return "已预约";
	}
	}

}
/*学生判断16:00～17:00是否预约函数分界线*/


/*学生查看电脑预约情况函数的分界线*/
void pppp(int n)
{
	string h=dddd();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m┌─────────────┐\033[0m\033[32m  ┌─────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m│ 返回→按回车│\033[0m\033[32m  │  "<<h<<"同学→"<<n<<"号电脑的预约情况如下\t│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m└─────────────┘\033[0m\033[32m  └─────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 8:00～9:00"<<rrrr1(n)<<"  ││ 9:00～10:00" << rrrr2(n) << " ││ 10:00～11:00" << rrrr3(n) << "│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 11:00～12:00" << rrrr4(n) << "││ 12:00～13:00" << rrrr5(n) << "││ 13:00～14:00" << rrrr6(n) << "│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 14:00～15:00" << rrrr7(n) << "││ 15:00～16:00" << rrrr8(n) << "││ 16:00～17:00" << rrrr9(n) << "│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		nnnn();
	}
}
/*学生查看电脑预约情况函数的分界线*/


/*查询实验室预约情况界面函数分割线*/
void nnnn()
{
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m┌\t\t\t\t\t     ┐\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m│ 实验室电脑使用情况→请选择电脑（例：按10）│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m└\t\t\t\t\t     ┘\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌────────────────────────────────────────────────────────────┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 1 ││ 2 ││ 3 ││ 4 ││ 5 ││ 6 ││ 7 ││ 8 ││ 9 ││ 10││ 11││ 12││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 13││ 14││ 15││ 16││ 17││ 18││ 19││ 20││ 21││ 22││ 23││ 24││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 25││ 26││ 27││ 28││ 29││ 30││ 31││ 32││ 33││ 34││ 35││ 36││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└────────────────────────────────────────────────────────────┘\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		mmmm();
	}
	else
	{
		cout << a;
		int b;
		char f;
		f = _getch();
		if (f == '\r')
		{
			b = (a - '0');
			system("cls");/*清空控制台命令*/
			pppp(b);
		}
		else
		{
			cout << f;
			char j;
			j = _getch();
			if (j == '\r')
			{
		b = (a - '0')*10 + (f-'0');
		system("cls");/*清空控制台命令*/
		pppp(b);
			}
			else
			{

			}

		}

	}
}
/*查询实验室预约情况界面函数分割线*/


/*预约文件写入函数*/
void bbbbbb(string h, int i, int o, int n, string Stime)
{
	ofstream a1;
	a1.open("D:\\实验室预约系统\\电脑状态信息\\预约.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a1 << h << " " << i << " " << o << " " << n << " " << Stime << endl;
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a1.close();
}
/*预约文件写入函数*/



/*学生确认预约界面函数分界线*/
void zzzz(int n,string Stime)
{
	string h = dddd();
	aaaaaa();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m┌────────────────────────────────────┐\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m│\t" << h << "同学→恭喜你，预约成功！\t│\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m└────────────────────────────────────┘\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   ┌\t\t\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t预约信息：" << n << "号电脑→" << Stime << "\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t  返回学生操作界面→按回车\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   └\t\t\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		int i, o;
		i = dddd1();
		o = dddd2();
		bbbbbb(h,i,o,n,Stime);
		mmmm();
	}
}
/*学生确认预约界面函数分界线*/


/*学生选择预约时间函数分界线*/
void ssss(int n)
{
	string h = dddd();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m┌─────────────┐\033[0m\033[32m  ┌  \t\t\t\t\t      ┐\t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m│ 返回→按回车│\033[0m\033[32m    " << h << "同学→请选择"<<n<<"号电脑你要预约的时间段\t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m└─────────────┘\033[0m\033[32m  └  \t\t\t\t\t      ┘\t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 8:00～9:00 →按1  ││ 9:00～10:00 →按2 ││ 10:00～11:00 →按3│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 11:00～12:00 →按4││ 12:00～13:00 →按5││ 13:00～14:00 →按6│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 14:00～15:00 →按7││ 15:00～16:00 →按8││ 16:00～17:00 →按9│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		qqqq();
	}
	else if (a == '1')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getEight(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "8:00～9:00");
	}
	else if (a == '2')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getNine(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "9:00～10:00");
	}
	else if (a == '3')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getTen(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "10:00～11:00");
	}
	else if (a == '4')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].geteEleven(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "11:00～12:00");
	}
	else if (a == '5')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getTwelve(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "12:00～13:00");
	}
	else if (a == '6')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getThirteen(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "13:00～14:00");
	}
	else if (a == '7')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getFourteen(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "14:00～15:00");
	}
	else if (a == '8')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getFifteen(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "15:00～16:00");
	}
	else if (a == '9')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getSixteen(1);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz(n, "16:00～17:00");
	}
}
/*学生选择预约时间函数分界线*/


/*清空预约文档函数*/
void dddddd()
{
	string file_name = "D:\\实验室预约系统\\电脑状态信息\\预约.txt";
	ofstream file_writer(file_name, ios_base::out);
}
/*清空预约文档函数*/



/*清空预约备用文档函数*/
void eeeeee()
{
	string file_name = "D:\\实验室预约系统\\电脑状态信息\\预约备用.txt";
	ofstream file_writer(file_name, ios_base::out);
}
/*清空预约备用文档函数*/



/*取消预约文件写入函数*/
void cccccc( string h1,int n2,string Stime2)
{
	string n3 = to_string(n2);
	ifstream a1;
	a1.open("D:\\实验室预约系统\\电脑状态信息\\预约.txt", ios::app);
	string h, i, o, n, Stime;
		string h2, i1, o1, n1, Stime1;
	while (a1 >> h >> i >> o >> n >> Stime)
	{

		h2 = h;
		i1 = i;
		o1 = o;
		n1 = n;
		Stime1 = Stime;
		if (h2 == h1&&n3==n1&&Stime2==Stime1)
		{

		}
		else 
		{
			ofstream g1;
			g1.open("D:\\实验室预约系统\\电脑状态信息\\预约备用.txt", ios::app);
			char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
			setlocale(LC_CTYPE, "chs");//设定
			g1 << h2 << " " << i1 << " " << o1 << " " << n1 << " " << Stime1 << endl;
			setlocale(LC_CTYPE, old_locale);
			free(old_locale);//还原区域设定
			g1.close();
		}
	}


	dddddd();
	a1.close();
	ifstream g2;
	g2.open("D:\\实验室预约系统\\电脑状态信息\\预约备用.txt", ios::app);
	string h4, i4, o4, n4, Stime4;
	while (g2 >> h4 >> i4 >> o4 >> n4 >> Stime4)
	{
	string h5, i5, o5, n5, Stime5;
	h5 = h4; i5 = i4; o5 = o4; n5 = n4; Stime5 = Stime4;
	ofstream g3;
	g3.open("D:\\实验室预约系统\\电脑状态信息\\预约.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	g3 << h5 << " " << i5 << " " << o5 << " " << n5 << " " << Stime5 << endl;
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	g3.close();
	}
	eeeeee();	
	g2.close();
}
/*取消预约文件写入函数*/



void zzzz1(int n, string Stime)
{
	string h = dddd();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[33m┌───────────────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[33m│\t" << h << "同学→恭喜你，取消预约成功！\t│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[33m└───────────────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t┌\t\t\t\t\t\t┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t  （已取消）原预约信息：" << n << "号电脑→" << Stime << "\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t  返回学生操作界面→按回车\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t└\t\t\t\t\t\t┘\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		cccccc(h,n,Stime);
		mmmm();
	}
}


/*学生取消预约时间函数分界线*/
void uuuu(int n)
{
	string h = dddd();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m┌─────────────┐\033[0m\033[32m  ┌  \t\t\t\t\t      ┐\t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m│ 返回→按回车│\033[0m\033[32m    " << h << "→请选择" << n << "号电脑你要取消预约的时间段\t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m└─────────────┘\033[0m\033[32m  └  \t\t\t\t\t      ┘\t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 8:00～9:00 →按1  ││ 9:00～10:00 →按2 ││ 10:00～11:00 →按3│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 11:00～12:00 →按4││ 12:00～13:00 →按5││ 13:00～14:00 →按6│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌───────────────────┐┌───────────────────┐┌───────────────────┐\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│ 14:00～15:00 →按7││ 15:00～16:00 →按8││ 16:00～17:00 →按9│\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└───────────────────┘└───────────────────┘└───────────────────┘\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		tttt();
	}
	else if (a == '1')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getEight(0);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz1(n, "8:00～9:00");
	}
	else if (a == '2')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
		ifstream a1;
		a1.open(g, ios::app);
		a1 >> aa;
		a1 >> bb;
		a1 >> cc;
		a1 >> dd;
		a1 >> ee;
		a1 >> ff;
		a1 >> gg;
		a1 >> hh;
		a1 >> ii;
		a1 >> jj;
		a1 >> good1;
		kk = aa;
		ll = bb;
		mm = cc;
		nn = dd;
		oo = ee;
		pp = ff;
		qq = gg;
		rr = hh;
		ss = ii;
		tt = jj;
		good2 = good1;
		computer[n].getNo(kk);
		computer[n].getEight(ll);
		computer[n].getNine(mm);
		computer[n].getTen(nn);
		computer[n].geteEleven(oo);
		computer[n].getTwelve(pp);
		computer[n].getThirteen(qq);
		computer[n].getFourteen(rr);
		computer[n].getFifteen(ss);
		computer[n].getSixteen(tt);
		computer[n].getGood(good2);
		a1.close();
		computer[n].getNine(0);
		string file_name = g;
		ofstream file_writer(file_name, ios_base::out);
		ofstream a2;
		a2.open(g, ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		a2.close();
		system("cls");/*清空控制台命令*/
		zzzz1(n, "9:00～10:00");
	}
	else if (a == '3')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].getTen(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
	system("cls");/*清空控制台命令*/
	zzzz1(n, "10:00～11:00");
	}
	else if (a == '4')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].geteEleven(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
	system("cls");/*清空控制台命令*/
	zzzz1(n, "11:00～12:00");
	}
	else if (a == '5')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].getTwelve(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
	system("cls");/*清空控制台命令*/
	zzzz1(n, "12:00～13:00");
	}
	else if (a == '6')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].getThirteen(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
	system("cls");/*清空控制台命令*/
	zzzz1(n, "13:00～14:00");
	}
	else if (a == '7')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].getFourteen(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
	system("cls");/*清空控制台命令*/
	zzzz1(n, "14:00～15:00");
	}
	else if (a == '8')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].getFifteen(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
	system("cls");/*清空控制台命令*/
	zzzz1(n, "15:00～16:00");
	}
	else if (a == '9')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].getSixteen(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
	system("cls");/*清空控制台命令*/
	zzzz1(n, "16:00～17:00");
	}
}
/*学生取消预约时间函数分界线*/


/*学生取消预约电脑选择函数分界线*/
void tttt()
{
	string h = dddd();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐  \033[0m┌\t\t\t\t\t┐\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m  │ " << h << "→请选择你要取消预约的电脑!\t│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘  \033[0m└\t\t\t\t\t┘\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌────────────────────────────────────────────────────────────┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 1 ││ 2 ││ 3 ││ 4 ││ 5 ││ 6 ││ 7 ││ 8 ││ 9 ││ 10││ 11││ 12││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 13││ 14││ 15││ 16││ 17││ 18││ 19││ 20││ 21││ 22││ 23││ 24││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 25││ 26││ 27││ 28││ 29││ 30││ 31││ 32││ 33││ 34││ 35││ 36││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└────────────────────────────────────────────────────────────┘\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		mmmm();
	}
	else
	{
		cout << a;
		int b;
		char f;
		f = _getch();
		if (f == '\r')
		{
			b = (a - '0');
			system("cls");/*清空控制台命令*/
			uuuu(b);
		}
		else
		{
			cout << f;
			char j;
			j = _getch();
			if (j == '\r')
			{
				b = (a - '0') * 10 + (f - '0');
				system("cls");/*清空控制台命令*/
				uuuu(b);
			}
			else
			{

			}
		}
	}
}
/*学生取消预约电脑选择函数分界线*/



void zzzz(int n)
{
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m┌────────────────────────────────────┐\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m│\t" << n << "号电脑已故障！请重新选择！\t│\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m└────────────────────────────────────┘\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    ┌\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t返回→按回车\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    └\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		qqqq();
	}
}


/*学生预约选择电脑的函数分界线*/
void qqqq()
{
	string h = dddd();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐  \033[0m┌\t\t\t\t\t┐\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m  │ " << h << "同学→请选择你要预约的电脑!\t│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘  \033[0m└\t\t\t\t\t┘\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌────────────────────────────────────────────────────────────┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 1 ││ 2 ││ 3 ││ 4 ││ 5 ││ 6 ││ 7 ││ 8 ││ 9 ││ 10││ 11││ 12││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 13││ 14││ 15││ 16││ 17││ 18││ 19││ 20││ 21││ 22││ 23││ 24││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 25││ 26││ 27││ 28││ 29││ 30││ 31││ 32││ 33││ 34││ 35││ 36││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└────────────────────────────────────────────────────────────┘\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		mmmm();
	}
	else
	{
		cout << a;
		int b;
		char f;
		f = _getch();
		if (f == '\r')
		{
			b = (a - '0');
			if (yyyy(b) == 1)
			{
				zzzz(b);
			}
			else
			{
			system("cls");/*清空控制台命令*/
			ssss(b);
			}

		}
		else
		{
			cout << f;
			char j;
			j = _getch();
			if (j == '\r')
			{
				b = (a - '0') * 10 + (f - '0');
				system("cls");/*清空控制台命令*/
				ssss(b);
			}
			else
			{

			}
		}
	}
}
/*学生预约选择电脑的函数分界线*/


 /*判断error.txt文件是否存在函数分割线*/
void hhhhh()
{
	const char* diy = "D:\\实验室预约系统\\电脑状态信息\\error.txt";
	int a;
	if (_access(diy, 0) == -1)
	{
		ofstream number;
		int kk = 0;
		number.open("D:\\实验室预约系统\\电脑状态信息\\error.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		for (a =1 ; a <= 36; a++)
		{
		number << kk << " " ;//正常写入
		}
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		number.close();
	}
	else
	{

	}
}
/*判断error.txt文件是否存在函数分割线*/



/*清空error.txt文档函数*/
void ggggg()
{
	string file_name = "D:\\实验室预约系统\\电脑状态信息\\error.txt";
	ofstream file_writer(file_name, ios_base::out);
}
/*清空error.txt文档函数*/


/*管理员确认故障将good至0函数*/
void eeeee(int n)
{
	hhhhh();
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream d1;
	d1.open(g, ios::app);
	d1 >> aa;
	d1 >> bb;
	d1 >> cc;
	d1 >> dd;
	d1 >> ee;
	d1 >> ff;
	d1 >> gg;
	d1 >> hh;
	d1 >> ii;
	d1 >> jj;
	d1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(0);
	computer[n].getNine(0);
	computer[n].getTen(0);
	computer[n].geteEleven(0);
	computer[n].getTwelve(0);
	computer[n].getThirteen(0);
	computer[n].getFourteen(0);
	computer[n].getFifteen(0);
	computer[n].getSixteen(0);
	computer[n].getGood(good2);
	d1.close();
	computer[n].getGood(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream e2;
	e2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	e2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	e2.close();
	ifstream f1;
	f1.open("D:\\实验室预约系统\\电脑状态信息\\error.txt", ios::app);
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36;
	int aa1, aa2, aa3, aa4, aa5, aa6, aa7, aa8, aa9, aa10, aa11, aa12, aa13, aa14, aa15, aa16, aa17, aa18, aa19, aa20, aa21, aa22, aa23, aa24, aa25, aa26, aa27, aa28, aa29, aa30, aa31, aa32, aa33, aa34, aa35, aa36;
	int hhh[36];
	f1 >> a1;
	f1 >> a2;
	f1 >> a3;
	f1 >> a4;
	f1 >> a5;
	f1 >> a6;
	f1 >> a7;
	f1 >> a8;
	f1 >> a9;
	f1 >> a10;
	f1 >> a11;
	f1 >> a12;
	f1 >> a13;
	f1 >> a14;
	f1 >> a15;
	f1 >> a16;
	f1 >> a17;
	f1 >> a18;
	f1 >> a19;
	f1 >> a20;
	f1 >> a21;
	f1 >> a22;
	f1 >> a23;
	f1 >> a24;
	f1 >> a25;
	f1 >> a26;
	f1 >> a27;
	f1 >> a28;
	f1 >> a29;
	f1 >> a30;
	f1 >> a31;
	f1 >> a32;
	f1 >> a33;
	f1 >> a34;
	f1 >> a35;
	f1 >> a36;
	hhh[0] = a1;
	hhh[1] = a2;
	hhh[2] = a3;
	hhh[3] = a4;
	hhh[4] = a5;
	hhh[5] = a6;
	hhh[6] = a7;
	hhh[7] = a8;
	hhh[8] = a9;
	hhh[9] = a10;
	hhh[10] = a11;
	hhh[11] = a12;
	hhh[12] = a13;
	hhh[12] = a13;
	hhh[13] = a14;
	hhh[14] = a15;
	hhh[15] = a16;
	hhh[16] = a17;
	hhh[17] = a18;
	hhh[18] = a19;
	hhh[19] = a20;
	hhh[20] = a21;
	hhh[21] = a22;
	hhh[22] = a23;
	hhh[23] = a24;
	hhh[24] = a25;
	hhh[25] = a26;
	hhh[26] = a27;
	hhh[27] = a28;
	hhh[28] = a29;
	hhh[29] = a30;
	hhh[30] = a31;
	hhh[31] = a32;
	hhh[32] = a33;
	hhh[33] = a34;
	hhh[34] = a35;
	hhh[35] = a36;
	hhh[n - 1] = 1;
	f1.close();
	ggggg();
	ofstream ww1;
	ww1.open("D:\\实验室预约系统\\电脑状态信息\\error.txt", ios::app);
	for (int u = 0; u < 36; u++)
	{
		ww1 << hhh[u]<<' ';
	}
}
/*管理员确认故障将good至0函数*/





/*管理员确认故障将good至0函数*/
void fffff(int n)
{
	hhhhh();
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream d1;
	d1.open(g, ios::app);
	d1 >> aa;
	d1 >> bb;
	d1 >> cc;
	d1 >> dd;
	d1 >> ee;
	d1 >> ff;
	d1 >> gg;
	d1 >> hh;
	d1 >> ii;
	d1 >> jj;
	d1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	d1.close();
	computer[n].getGood(0);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream e2;
	e2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	e2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	e2.close();
	ifstream f1;
	f1.open("D:\\实验室预约系统\\电脑状态信息\\error.txt", ios::app);
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36;
	int aa1, aa2, aa3, aa4, aa5, aa6, aa7, aa8, aa9, aa10, aa11, aa12, aa13, aa14, aa15, aa16, aa17, aa18, aa19, aa20, aa21, aa22, aa23, aa24, aa25, aa26, aa27, aa28, aa29, aa30, aa31, aa32, aa33, aa34, aa35, aa36;
	int hhh[36];
	f1 >> a1;	
	f1 >> a2;	
	f1 >> a3;	
	f1 >> a4;	
	f1 >> a5;	
	f1 >> a6;	
	f1 >> a7;	
	f1 >> a8;	
	f1 >> a9;	
	f1 >> a10;	
	f1 >> a11;	
	f1 >> a12;	
	f1 >> a13;	
	f1 >> a14;	
	f1 >> a15;	
	f1 >> a16;	
	f1 >> a17;	
	f1 >> a18;	
	f1 >> a19;	
	f1 >> a20;	
	f1 >> a21;	
	f1 >> a22;	
	f1 >> a23;	
	f1 >> a24;	
	f1 >> a25;	
	f1 >> a26;	
	f1 >> a27;	
	f1 >> a28;	
	f1 >> a29;	
	f1 >> a30;	
	f1 >> a31;	
	f1 >> a32;	
	f1 >> a33;	
	f1 >> a34;	
	f1 >> a35;	
	f1 >> a36;	
	hhh[0] = a1;
	hhh[1] = a2;
	hhh[2] = a3;
	hhh[3] = a4;
	hhh[4] = a5;
	hhh[5] = a6;
	hhh[6] = a7;
	hhh[7] = a8;
	hhh[8] = a9;
	hhh[9] = a10;
	hhh[10] = a11;
	hhh[11] = a12;
	hhh[12] = a13;
	hhh[12] = a13;
	hhh[13] = a14;
	hhh[14] = a15;
	hhh[15] = a16;
	hhh[16] = a17;
	hhh[17] = a18;
	hhh[18] = a19;
	hhh[19] = a20;
	hhh[20] = a21;
	hhh[21] = a22;
	hhh[22] = a23;
	hhh[23] = a24;
	hhh[24] = a25;
	hhh[25] = a26;
	hhh[26] = a27;
	hhh[27] = a28;
	hhh[28] = a29;
	hhh[29] = a30;
	hhh[30] = a31;
	hhh[31] = a32;
	hhh[32] = a33;
	hhh[33] = a34;
	hhh[34] = a35;
	hhh[35] = a36;
	hhh[n - 1] = 0;
	f1.close();
	ggggg();
	ofstream ww1;
	ww1.open("D:\\实验室预约系统\\电脑状态信息\\error.txt", ios::app);
	for (int u = 0; u < 36; u++)
	{
		ww1 << hhh[u] << ' ';
	}
}
/*管理员确认故障将good至0函数*/


/*管理员选择电脑是否故障界面函数分界线*/
void ccccc(int n)
{
	string h = ffff();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m┌─────────────┐\033[0m\033[33m ┌\t\t\t\t\t ┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m│ 返回→按回车│\033[33m    " << h << "管理员→请确认" << n << "号电脑是否故障  \t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m└─────────────┘\033[0m\033[33m └\t\t\t\t\t ┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t  ┌\t\t\t\t ┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t" << n << "号电脑确认故障→按1\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t" << n << "号电脑并未故障→按0\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t  └\t\t\t\t ┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{

	}
	else if (a == '1')
	{
		eeeee(n);
		system("cls");/*清空控制台命令*/
		aaaaa();
	}
	else if (a == '0')
	{
		fffff(n);
		system("cls");/*清空控制台命令*/
		aaaaa();
	}
}
/*管理员选择电脑是否故障界面函数分界线*/


/*判断是否为学生报告的故障电脑*/
char bbbbb(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	a1.close();
	if (good2 == 1)
	{
		return '!';
	}
	else if (good2 == 0)
	{
		return ' ';
	}
}
/*判断是否为学生报告的故障电脑*/


/*管理员选择电脑故障报告界面函数分界线*/
void aaaaa()
{
	char a1 = bbbbb(1);
	char a2 = bbbbb(2);
	char a3 = bbbbb(3);
	char a4 = bbbbb(4);
	char a5 = bbbbb(5);
	char a6 = bbbbb(6);
	char a7 = bbbbb(7);
	char a8 = bbbbb(8);
	char a9 = bbbbb(9);
	char a10 = bbbbb(10);
	char a11 = bbbbb(11);
	char a12 = bbbbb(12);
	char a13 = bbbbb(13);
	char a14 = bbbbb(14);
	char a15 = bbbbb(15);
	char a16 = bbbbb(16);
	char a17 = bbbbb(17);
	char a18 = bbbbb(18);
	char a19 = bbbbb(19);
	char a20 = bbbbb(20);
	char a21 = bbbbb(21);
	char a22 = bbbbb(22);
	char a23 = bbbbb(23);
	char a24 = bbbbb(24);
	char a25 = bbbbb(25);
	char a26 = bbbbb(26);
	char a27 = bbbbb(27);
	char a28 = bbbbb(28);
	char a29 = bbbbb(29);
	char a30 = bbbbb(30);
	char a31 = bbbbb(31);
	char a32 = bbbbb(32);
	char a33 = bbbbb(33);
	char a34 = bbbbb(34);
	char a35 = bbbbb(35);
	char a36 = bbbbb(36);
	{
	system("cls");/*清空控制台命令*/
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m┌\t\t\t\t\t      ┐\033[31m\t┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m│ 实验室电脑状态：后带有!→学生报告此电脑故障│\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m└\t\t\t\t\t      ┘\033[31m\t┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m┌────────────────────────────────────────────────────────────┐\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m││ 1"<<a1<<"││ 2" << a2 << "││ 3" << a3 << "││ 4" << a4 << "││ 5" << a5 << "││ 6" << a6 << "││ 7" << a7 << "││ 8" << a8 << "││ 9" << a9 << "││10" << a10 << "││11" << a11 << "││12" << a12 << "││\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m││13" << a13 << "││14" << a14 << "││15" << a15 << "││16" << a16 << "││17" << a17 << "││18" << a18 << "││19" << a19 << "││20" << a20 << "││21" << a21 << "││22" << a22 << "││23" << a23 << "││24" << a24 << "││\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m││25" << a25 << "││26" << a26 << "││27" << a27 << "││28" << a28 << "││29" << a29 << "││30" << a30 << "││31" << a31 << "││32" << a32 << "││33" << a33 << "││34" << a34 << "││35" << a35 << "││36" << a36 << "││\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m└────────────────────────────────────────────────────────────┘\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
    }
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		jjjj();
	}
	else
	{
		cout << a;
		int b;
		char f;
		f = _getch();
		if (f == '\r')
		{
			b = (a - '0');
			system("cls");/*清空控制台命令*/
			ccccc(b);
		}
		else
		{
			cout << f;
			char j;
			j = _getch();
			if (j == '\r')
			{
				b = (a - '0') * 10 + (f - '0');
				system("cls");/*清空控制台命令*/
				ccccc(b);
			}
			else
			{

			}
		}
	}
}
/*管理员选择电脑故障报告界面函数分界线*/


/*管理员判断电脑是否为*的函数分界线*/
char jjjjj(int n)
{
	if (yyyy(n) == 1)
	{
		return '*';
	}
	else if (yyyy(n) == 0)
	{
		return ' ';
	}
}
/*管理员判断电脑是否为*的函数分界线*/


/*管理员确认消除故障标记的函数分界线*/
void kkkkk(int n)
{
	string h = ffff();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m┌─────────────┐\033[0m\033[33m ┌\t\t\t\t\t     ┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m│ 返回→按回车│\033[33m    " << h << "管理员→请确认" << n << "号电脑故障是否修复  \t\033[0m\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\033[34m└─────────────┘\033[0m\033[33m └\t\t\t\t\t     ┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t  ┌ \t\t\t\t ┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t" << n << "号电脑故障已修复→按1\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t" << n << "号电脑故障未修复→按0\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t  └ \t\t\t\t ┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		iiiii();
	}
	else if (a == '1')
	{
		system("cls");/*清空控制台命令*/
		fffff(n);
		iiiii();
	}
	else if (a == '0')
	{
		system("cls");/*清空控制台命令*/
		ddddd();
	}
}
/*管理员确认消除故障标记的函数分界线*/


/*管理员取消故障电脑标记选择界面分割线*/
void iiiii()
{
	char a1 = jjjjj(1);
	char a2 = jjjjj(2);
	char a3 = jjjjj(3);
	char a4 = jjjjj(4);
	char a5 = jjjjj(5);
	char a6 = jjjjj(6);
	char a7 = jjjjj(7);
	char a8 = jjjjj(8);
	char a9 = jjjjj(9);
	char a10 = jjjjj(10);
	char a11 = jjjjj(11);
	char a12 = jjjjj(12);
	char a13 = jjjjj(13);
	char a14 = jjjjj(14);
	char a15 = jjjjj(15);
	char a16 = jjjjj(16);
	char a17 = jjjjj(17);
	char a18 = jjjjj(18);
	char a19 = jjjjj(19);
	char a20 = jjjjj(20);
	char a21 = jjjjj(21);
	char a22 = jjjjj(22);
	char a23 = jjjjj(23);
	char a24 = jjjjj(24);
	char a25 = jjjjj(25);
	char a26 = jjjjj(26);
	char a27 = jjjjj(27);
	char a28 = jjjjj(28);
	char a29 = jjjjj(29);
	char a30 = jjjjj(30);
	char a31 = jjjjj(31);
	char a32 = jjjjj(32);
	char a33 = jjjjj(33);
	char a34 = jjjjj(34);
	char a35 = jjjjj(35);
	char a36 = jjjjj(36);
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m┌\t\t\t\t\t      ┐\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m│ 实验室电脑状态：后带有*→此电脑标记为故障！│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m└\t\t\t\t\t      ┘\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌────────────────────────────────────────────────────────────┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 1" << a1 << "││ 2" << a2 << "││ 3" << a3 << "││ 4" << a4 << "││ 5" << a5 << "││ 6" << a6 << "││ 7" << a7 << "││ 8" << a8 << "││ 9" << a9 << "││10" << a10 << "││11" << a11 << "││12" << a12 << "││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││13" << a13 << "││14" << a14 << "││15" << a15 << "││16" << a16 << "││17" << a17 << "││18" << a18 << "││19" << a19 << "││20" << a20 << "││21" << a21 << "││22" << a22 << "││23" << a23 << "││24" << a24 << "││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││25" << a25 << "││26" << a26 << "││27" << a27 << "││28" << a28 << "││29" << a29 << "││30" << a30 << "││31" << a31 << "││32" << a32 << "││33" << a33 << "││34" << a34 << "││35" << a35 << "││36" << a36 << "││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└────────────────────────────────────────────────────────────┘\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		jjjj();
	}
	else
	{
		cout << a;
		int b;
		char f;
		f = _getch();
		if (f == '\r')
		{
			b = (a - '0');
			system("cls");/*清空控制台命令*/
			kkkkk(b);
		}
		else
		{
			cout << f;
			char j;
			j = _getch();
			if (j == '\r')
			{
				b = (a - '0') * 10 + (f - '0');
				system("cls");/*清空控制台命令*/
				kkkkk(b);
			}
			else
			{

			}
		}
	}
}
/*管理员取消故障电脑标记选择界面分割线*/


/*管理员选择标记或者取消标记故障电脑的函数分界线*/
void ddddd()
{
	hhhhh();
	string h = ffff();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\033[33m  ┌────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\033[33m  │ " << h << "管理员→请进行电脑状态维护！\t│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\033[33m  └────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t┌\t\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t标记故障电脑→按1\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t取消故障电脑标记→按0\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t└\t\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		jjjj();
	}
	else if (a == '1')
	{
		system("cls");/*清空控制台命令*/
		aaaaa();
	}
	else if (a == '0')
	{
		system("cls");/*清空控制台命令*/
		iiiii();
	}
}
/*管理员选择标记或者取消标记故障电脑的函数分界线*/


/*学生报告故障函数*/
void xxxx(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj,good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt,good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\实验室预约系统\\电脑状态信息\\" + h + ".txt";
	ifstream a1;
	a1.open(g, ios::app);
	a1 >> aa;
	a1 >> bb;
	a1 >> cc;
	a1 >> dd;
	a1 >> ee;
	a1 >> ff;
	a1 >> gg;
	a1 >> hh;
	a1 >> ii;
	a1 >> jj;
	a1 >> good1;
	kk = aa;
	ll = bb;
	mm = cc;
	nn = dd;
	oo = ee;
	pp = ff;
	qq = gg;
	rr = hh;
	ss = ii;
	tt = jj;
	good2 = good1;
	computer[n].getNo(kk);
	computer[n].getEight(ll);
	computer[n].getNine(mm);
	computer[n].getTen(nn);
	computer[n].geteEleven(oo);
	computer[n].getTwelve(pp);
	computer[n].getThirteen(qq);
	computer[n].getFourteen(rr);
	computer[n].getFifteen(ss);
	computer[n].getSixteen(tt);
	computer[n].getGood(good2);
	a1.close();
	computer[n].getGood(1);
	string file_name = g;
	ofstream file_writer(file_name, ios_base::out);
	ofstream a2;
	a2.open(g, ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//设定
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//正常写入
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//还原区域设定
	a2.close();
}
/*学生报告故障函数*/


/*实验室学生报告电脑故障确认的函数分界线*/
void wwww(int n)
{
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[33m┌───────────────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[33m│\t请确认是否要报告" << n << "号电脑为故障电脑！\t│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[33m└───────────────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    ┌\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t确认报告→按1\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t取消报告→按0\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    └\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '1')
	{
		xxxx(n);
		mmmm();
	}
	else if (a == '0')
	{
		system("cls");/*清空控制台命令*/
		mmmm();
	}
}
/*实验室学生报告电脑故障确认的函数分界线*/


/*学生选择故障电脑报告的函数分界线*/
void vvvv()
{
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m┌\t\t\t\t\t     ┐\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m│ 实验室电脑故障报告→请选择电脑（例：按10）│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m└\t\t\t\t\t     ┘\033[31m\t┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m┌────────────────────────────────────────────────────────────┐\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 1 ││ 2 ││ 3 ││ 4 ││ 5 ││ 6 ││ 7 ││ 8 ││ 9 ││ 10││ 11││ 12││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 13││ 14││ 15││ 16││ 17││ 18││ 19││ 20││ 21││ 22││ 23││ 24││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m││ 25││ 26││ 27││ 28││ 29││ 30││ 31││ 32││ 33││ 34││ 35││ 36││\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m│└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘│\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m└────────────────────────────────────────────────────────────┘\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*清空控制台命令*/
		mmmm();
	}
	else
	{
		cout << a;
		int b;
		char f;
		f = _getch();
		if (f == '\r')
		{
			b = (a - '0');
			system("cls");/*清空控制台命令*/
			wwww(b);
		}
		else
		{
			cout << f;
			char j;
			j = _getch();
			if (j == '\r')
			{
				b = (a - '0') * 10 + (f - '0');
				system("cls");/*清空控制台命令*/
				wwww(b);
			}
			else
			{

			}
		}
	}
}
/*学生选择故障电脑报告的函数分界线*/



/*学生账号操作界面分割线*/
void mmmm()
{
	string h = dddd();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t \033[32m┌───────────────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t \033[32m│\t欢迎" <<h<< "同学登录智能实验室预约系统！\t │\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t \033[32m└───────────────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t     ┌\t\t\t\t  ┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 查询实验室预约情况→按1\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 预约时间→按2\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 取消预约→按3\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 报告电脑故障→按4\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 注销登录→按0\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t     └\t\t\t\t  ┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '0')
	{
		kkkk();
	}
	else if (m == '1')
	{
		system("cls");/*清空控制台命令*/
		nnnn();
	}
	else if (m == '2')
	{
		system("cls");/*清空控制台命令*/
		qqqq();
	}
	else if (m == '3')
	{
		system("cls");/*清空控制台命令*/
		tttt();
	}
	else if (m == '4')
	{
		system("cls");/*清空控制台命令*/
		vvvv();
	}
}
/*学生账号操作界面分割线*/


/*选择是否注销当前登录的管理员账号的函数分割线*/
void iiii()
{
	char a;
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m┌──────────────────────────────────────┐\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m│  请确认是否注销当前登录的管理员账号！│\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t   \033[33m└──────────────────────────────────────┘\033[0m\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    ┌\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t确认注销→按1\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t取消注销→按0\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t    └\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	a = _getch();
	if (a == '1')
	{
		hhhh();
		aa();
	}
}
/*选择是否注销当前登录的管理员账号的函数分割线*/


/*计算当前实验人数函数*/
int gggggg()
{
	int nn=0 ;
	string hour = getTime(),mmm;
	ifstream a1;
	a1.open("D:\\实验室预约系统\\电脑状态信息\\预约.txt", ios::app);
	string h, i, o, n, Stime;
	string h1, i1, o1, n1, Stime1;
	while (a1 >> h >> i >> o >> n >> Stime)
	{
		h1 = h;
		i1 = i;
		o1 = o;
		n1 = n;
		Stime1 = Stime;
		if (Stime == "8:00～9:00")
		{
			mmm = "8";
		}
		else if (Stime == "9:00～10:00")
		{
			mmm = "9";
		}
		else if (Stime == "10:00～11:00")
		{
			mmm = "10";
		}
		else if (Stime == "11:00～12:00")
		{
			mmm = "11";
		}
		else if (Stime == "12:00～13:00")
		{
			mmm = "12";
		}
		else if (Stime == "13:00～14:00")
		{
			mmm = "13";
		}
		else if (Stime == "14:00～15:00")
		{
			mmm = "14";
		}
		else if (Stime == "15:00～16:00")
		{
			mmm = "15";
		}
		else if (Stime == "16:00～17:00")
		{
			mmm = "16";
		}
		if (hour == mmm)
		{
			nn++;
		}
	}
	return nn;
}
/*计算当前实验人数函数*/



/*管理员查询实验室使用情况界面*/
void ffffff()
{
	string h = ffff();
	int n = gggggg();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\033[33m  ┌────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\033[33m  │ " << h<< "管理员→当前实验室使用情况！\t│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\033[33m  └────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t┌\t\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t当前实验人数→" << n << "人\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t└\t\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '\r')
	{
		jjjj();
	}
}
/*管理员查询实验室使用情况界面*/



void hhhhhhh()
{
	string h = ffff();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\033[33m  ┌────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\033[33m  │ " << h << "管理员→当前暂未实现可用功能\t│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\033[33m  └────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '0')
	{
		jjjj();
	}
}


/*管理员账号操作界面分割线*/
void jjjj()
{
	string h = ffff();
	{
		system("cls");/*清空控制台命令*/
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[32m┌───────────────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[32m│  欢迎"<<h<<"管理员登录智能实验室预约系统！\t│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[32m└───────────────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t     ┌\t\t\t\t     ┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 查询实验室使用情况→按1\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 维护电脑状态→按2\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 查询学生信息→按3\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 统计一天实验室使用情况→按4\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t\t 注销登录→按0\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m   \t     └\t\t\t\t     ┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '0')
	{
		iiii();
	}
	else if (m == '2')
	{
		system("cls");/*清空控制台命令*/
		ddddd();
	}
	else if (m == '1')
	{
		system("cls");/*清空控制台命令*/
		ffffff();
	}
	else if (m == '3')
	{
		system("cls");/*清空控制台命令*/
		hhhhhhh();
	}
	else if (m == '4')
	{
		system("cls");/*清空控制台命令*/
		hhhhhhh();
	}
}
/*管理员账号操作界面分割线*/


static int m4 = 0;
static int m5 = 0;
static int m6 = 0;
/*管理员账号登录成功恭喜界面分割线*/
int ppp()
{
	if ((m4 == m5 && m5 == m6) && (m4 != 0 && m5 != 0 && m6 != 0))
	{
		system("cls");/*清空控制台命令*/
		//学生账号注册成功恭喜界面
		{
			SetFont(17);
			cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\033[34m┌───────────────────────────────┐\033[0m\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\033[34m│   恭喜你！管理员账号登录成功！│\033[0m\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\033[34m└───────────────────────────────┘\033[0m\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t┌\t\t\t\t  ┐\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t  注：按回车进入管理员账号操作界面 \t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t└\t\t\t\t  ┘\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}

		char ou;
		ou = _getch();
		if (ou == '\r')
		{
			system("cls");/*清空控制台命令*/
			jjjj();
		}
	}
	return 1;
}
/*管理员账号注册成功恭喜界面分割线*/


static int m1 = 0;
static int m2 = 0;
static int m3 = 0;
/*学生账号登录成功恭喜界面分割线*/
int qqq()
{
	if ((m1 == m2 && m2 == m3) && (m1 != 0 && m2 != 0 && m3 != 0))
	{
		system("cls");/*清空控制台命令*/
		//学生账号注册成功恭喜界面
		{
			SetFont(17);
			cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\033[34m┌───────────────────────────────┐\033[0m\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\033[34m│   恭喜你！学生账号登录成功！  │\033[0m\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\033[34m└───────────────────────────────┘\033[0m\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t┌\t\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t  注：按回车进入学生账号操作界面 \t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m        \t└\t\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}

		char ou;
		ou = _getch();
		if (ou == '\r')
		{
			system("cls");/*清空控制台命令*/
			mmmm();
		}
	}
	return 1;
}
/*学生账号注册成功恭喜界面分割线*/


/*学生登录姓名输入界面子函数分割线*/
int ddd(string h)
{
	ifstream Student;
	string i;
	int q;
	int r;
	Student.open("D:\\实验室预约系统\\Student.txt", ios::out);
	int g ;
	while (g=(Student >> i && Student >> q && Student >> r))
	{
	string o = i;
	if (o == h)
	{
		return 1;
	}

	else if (o != h &&!g)
	{
		return 0;
	}
	else if (o != h&&g)
	{}	
	}
	return 0;
}
/*学生登录姓名输入界面子函数分割线*/


/*学生登录姓名输入界面分割线*/
void hh()
{
	cccc();
	while (1)
	{
		//学生登录姓名输入界面
		{
	system("cls");/*清空控制台命令*/
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：姓名限5个字符内 │\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t 请输入学生姓名\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	ifstream Student;
	char a[11];
	char  b[11];
	string h;
	int n=0;
	for (n ; n <= 11&&a[n]!='\n';)
	{
		cin >> noskipws;
		cin >> a[n];

		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			dd();
		}
		if (a[0] == '\n')
		{
		    system("cls");/*清空控制台命令*/
			dd();
		}
		else 
		{
			if (a[n] == '\n')
			{
				break;
			}
		n++;
		}
	}
	if (a[0] == '\n')
	{
		system("cls");/*清空控制台命令*/
		dd();
	}
	else
	{
	a[n] = '\0';
	memset(b, 0, 11);
	strncpy(b, a, n);
	h = b;

	int m = 1;
	int y = ddd(h);
	Student.open("D:\\实验室预约系统\\Student.txt", ios::out);
	while (1)
	{
		if (y == 1)
		{	
			Student.close();
			m1++;
			system("cls");/*清空控制台命令*/
			aaaa(h);
			qqq();
			dd();
			break;
		}
		else if (y == 0)
		{
			char wa;
			Student.close();
			cout << "你输入的姓名不存在，请重新输入!"; 
			wa = _getch();
			if (wa == '\r')
			{
				system("cls");/*清空控制台命令*/
				hh();
			}
		}
	}
	}
    }
}
/*学生登录姓名输入界面分割线*/


/*学生登录密码输入界面子函数分割线*/
int ccc(int sum)
{
	ifstream Student;
	string i;
	int q;
	int r;
	Student.open("D:\\实验室预约系统\\Student.txt", ios::out);
	int g;
	while (g = (Student >> i && Student >> q && Student >> r))
	{
		int o = q;
		if (o == sum)
		{
			return 1;
		}

		else if (o != sum && !g)
		{
			return 0;
		}
		else if (o != sum && g)
		{
		}
	}
	return 0;
}
/*学生登录密码输入界面子函数分割线*/



/*学生登录密码输入界面分割线*/
char ii()
{	
	while (1)
	{
		//学生登录密码输入界面
		{
			SetFont(17);
			cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：密码限10个数字内│\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t 请输入学生密码\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}
		ifstream Student;
		char a[11];
		char  b[11];
		string h;
		int n = 0;
		for (n; n <= 11 && a[n] != '\n';)
		{
			cin >> noskipws;
			cin >> a[n];

			if (a[0] == '\n')
			{
				system("cls");/*清空控制台命令*/
				dd();
			}
			if (a[0] == '\n')
			{
				system("cls");/*清空控制台命令*/
				dd();
			}
			else
			{
				if (a[n] == '\n')
				{
					break;
				}
				n++;
			}
		}
		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			dd();
		}
		else
		{
			a[n] = '\0';
			memset(b, 0, 11);
			strncpy(b, a, n);
			h = b;

			int sum = 0;
			int j = n;
			for (int v = 0; a[v] != '\0'; v++)
			{
				int s = a[v] - 48;
				for (int c = 1; c < j; c++)
				{
					s = s * 10;
				}
				sum = sum + s;
				j--;
			}
			int y = ccc(sum);
			Student.open("D:\\实验室预约系统\\Student.txt", ios::out);
			while (1)
			{
				if (y == 1)
				{
					Student.close();
					m2++;
					system("cls");/*清空控制台命令*/
					bbbb(sum);
					qqq();
					dd();
					break;
				}
				else if (y == 0)
				{
					char wa;
					Student.close();
					cout << "你输入的密码不存在，请重新输入!"; 
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						ii();
					}
				}
			}
		}
	}
}
/*学生登录密码输入界面分割线*/


/*学生登录学号输入界面子函数分割线*/
int sss(int sum)
{
	ifstream Student;
	string i;
	int q;
	int r;
	Student.open("D:\\实验室预约系统\\Student.txt", ios::out);
	int g;
	while (g = (Student >> i && Student >> q && Student >> r))
	{
		int o = r;
		if (o == sum)
		{
			return 1;
		}

		else if (o != sum && !g)
		{
			return 0;
		}
		else if (o != sum && g)
		{
		}
	}
	return 0;
}
/*学生登录学号输入界面子函数分割线*/



/*学生登录学号输入界面分割线*/
char jj()
{		
	while (1)
	{
		//学生登录学号输入界面
		{
			SetFont(17);
			cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：学号限10个数字内│\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t 请输入学生学号\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}
		ifstream Student;
		char a[11];
		char  b[11];
		string h;
		int n = 0;
		for (n; n <= 11 && a[n] != '\n';)
		{
			cin >> noskipws;
			cin >> a[n];

			if (a[0] == '\n')
			{
				system("cls");/*清空控制台命令*/
				dd();
			}
			if (a[0] == '\n')
			{
				system("cls");/*清空控制台命令*/
				dd();
			}
			else
			{
				if (a[n] == '\n')
				{
					break;
				}
				n++;
			}
		}
		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			dd();
		}
		else
		{
			a[n] = '\0';
			memset(b, 0, 11);
			strncpy(b, a, n);
			h = b;

			int sum = 0;
			int j = n;
			for (int v = 0; a[v] != '\0'; v++)
			{
				int s = a[v] - 48;
				for (int c = 1; c < j; c++)
				{
					s = s * 10;
				}
				sum = sum + s;
				j--;
			}
			int y = sss(sum);
			while (1)
			{
				if (y == 1)
				{
					Student.close();
					m3++;
					system("cls");/*清空控制台命令*/
					bbbb(sum);
					qqq();
					dd();
					break;
				}
				else if (y == 0)
				{
					char wa;
					cout << "你输入的学号不存在，请重新输入!"; 
					Student.close();
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						jj();
					}
				}
			}
		}
	}
}
/*学生登录学号输入界面分割线*/


/*管理员登录姓名输入界面子函数分割线*/
int eee(string h)
{
	ifstream Administrator;
	string i;
	int q;
	int r;
	Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::out);
	int g;
	while (g = (Administrator >> i && Administrator >> q && Administrator >> r))
	{
		string o = i;
		if (o == h)
		{
			return 1;
		}

		else if (o != h && !g)
		{
			return 0;
		}
		else if (o != h && g)
		{
		}
	}
	return 0;
}
/*管理员登录姓名输入界面子函数分割线*/


/*管理员登录姓名输入界面分割线*/
char kk()
{

	char a;
	while (1)
	{
	//管理员登录姓名输入界面
		{
			system("cls");/*清空控制台命令*/
			SetFont(17);
			cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：姓名限5个字符内 │\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t 请输入管理员姓名\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}

	ifstream Administrator;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11 && a[n] != '\n';)
	{
		cin >> noskipws;
		cin >> a[n];

		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			ee();
		}
		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			ee();
		}
		else
		{
			if (a[n] == '\n')
			{
				break;
			}
			n++;
		}
	}
	if (a[0] == '\n')
	{
		system("cls");/*清空控制台命令*/
		ee();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 11);
		strncpy(b, a, n);
		h = b;

		int m = 1;
		int y = eee(h);
		Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::out);
		while (1)
		{
			if (y == 1)
			{
				Administrator.close();
				m4++;
				system("cls");/*清空控制台命令*/
				eeee(h);
				ppp();
				ee();
				break;
			}
			else if (y == 0)
			{
				char wa;
				Administrator.close();
				cout << "你输入的姓名不存在，请重新输入!";
				wa = _getch();
				if (wa == '\r')
				{
					system("cls");/*清空控制台命令*/
					kk();
				}
			}
		}
	}

	}
}
/*管理员登录姓名输入界面分割线*/


/*管理员登录密码输入界面子函数分割线*/
int fff(int sum)
{
	ifstream Administrator;
	string i;
	int q;
	int r;
	Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::out);
	int g;
	while (g = (Administrator >> i && Administrator >> q && Administrator >> r))
	{
		int o = q;
		if (o == sum)
		{
			return 1;
		}

		else if (o != sum && !g)
		{
			return 0;
		}
		else if (o != sum && g)
		{
		}
	}
	return 0;
}
/*管理员登录密码输入界面子函数分割线*/


/*管理员登录密码输入界面分割线*/
char ll()
{


	char a;	
	while (1)
	{
	//管理员登录密码输入界面
		{
			SetFont(17);
			cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：密码限10个数字内│\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t 请输入管理员密码\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}

	ifstream Administrator;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11 && a[n] != '\n';)
	{
		cin >> noskipws;
		cin >> a[n];

		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			ee();
		}
		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			ee();
		}
		else
		{
			if (a[n] == '\n')
			{
				break;
			}
			n++;
		}
	}
	if (a[0] == '\n')
	{
		system("cls");/*清空控制台命令*/
		ee();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 11);
		strncpy(b, a, n);
		h = b;

		int sum = 0;
		int j = n;
		for (int v = 0; a[v] != '\0'; v++)
		{
			int s = a[v] - 48;
			for (int c = 1; c < j; c++)
			{
				s = s * 10;
			}
			sum = sum + s;
			j--;
		}
		int y = fff(sum);
		Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::out);
		while (1)
		{
			if (y == 1)
			{
				Administrator.close();
				m5++;
				system("cls");/*清空控制台命令*/
				gggg(sum);
				ppp();
				ee();
				break;
			}
			else if (y == 0)
			{
				char wa;
				Administrator.close();
				cout << "你输入的密码不存在，请重新输入!";
				wa = _getch();
				if (wa == '\r')
				{
					system("cls");/*清空控制台命令*/
					ll();
				}
			}
		}
	}

	}
}
/*管理员登录密码输入界面分割线*/


/*管理员登录工号输入界面子函数分割线*/
int ggg(int sum)
{
	ifstream Administrator;
	string i;
	int q;
	int r;
	Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::out);
	int g;
	while (g = (Administrator >> i && Administrator >> q && Administrator >> r))
	{
		int o = r;
		if (o == sum)
		{
			return 1;
		}

		else if (o != sum && !g)
		{
			return 0;
		}
		else if (o != sum && g)
		{
		}
	}
	return 0;
}
/*管理员登录工号输入界面子函数分割线*/


/*管理员登录工号输入界面分割线*/
char nn()
{


	char a;	
	while (1)
	{
	//管理员登录工号输入界面
		{
			SetFont(17);
			cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：学号限10个数字内│\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t 请输入管理员工号\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
			cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}

	ifstream Administrator;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11 && a[n] != '\n';)
	{
		cin >> noskipws;
		cin >> a[n];

		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			ee();
		}
		if (a[0] == '\n')
		{
			system("cls");/*清空控制台命令*/
			ee();
		}
		else
		{
			if (a[n] == '\n')
			{
				break;
			}
			n++;
		}
	}
	if (a[0] == '\n')
	{
		system("cls");/*清空控制台命令*/
		ee();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 11);
		strncpy(b, a, n);
		h = b;

		int sum = 0;
		int j = n;
		for (int v = 0; a[v] != '\0'; v++)
		{
			int s = a[v] - 48;
			for (int c = 1; c < j; c++)
			{
				s = s * 10;
			}
			sum = sum + s;
			j--;
		}
		int y = ggg(sum);
		while (1)
		{
			if (y == 1)
			{
				Administrator.close();
				m6++;
				system("cls");/*清空控制台命令*/
				gggg(sum);
				ppp();
				ee();
				break;
			}
			else if (y == 0)
			{
				char wa;
				cout << "你输入的工号不存在，请重新输入!";
				Administrator.close();
				wa = _getch();
				if (wa == '\r')
				{
					system("cls");/*清空控制台命令*/
					nn();
				}
			}
		}
	}

	}
}
/*管理员登录工号输入界面分割线*/


/*学生账号注册成功恭喜界面分割线*/
static  int n4 = 0, n5 = 0, n6 = 0;
int mmm()
{
	if ((n4 == n5 && n5 == n6) && (n4 != 0 && n5 != 0 && n6 != 0))
	{
		Snumberint();
		system("cls");/*清空控制台命令*/
		//学生账号注册成功恭喜界面
		{
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[34m┌─────────────────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[34m│ 恭喜你！学生账号注册成功！请返回登录界面登录！  │\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[34m└─────────────────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t┌\t\t\t\t ┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t    注：按回车返回登录界面\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t    注：按空格返回学生注册界面\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t└\t\t\t\t ┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}

		char ou;
		ou = _getch();
		if (ou == ' ')
		{
			system("cls");/*清空控制台命令*/
			ff();
		}
		else if (ou == '\r')
		{
			system("cls");/*清空控制台命令*/
			aa();
		}
	}
	return 1;
}
/*学生账号注册成功恭喜界面分割线*/


/*学生注册姓名输入界面分割线*/
char mm(student s1)
{
	//学生注册姓名输入界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：姓名限5个字符内 │\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t 请输入学生姓名\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}



	ofstream Student;
	char a[11];
	char  b[11];
	string h;
	int n = 0, Sn;
	for (n; n <= 11;)
	{
		cin >> noskipws;
		cin >> a[n];
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
		}
	}
	if (a[0] == '\n')
	{
		ff();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 1);
		strncpy(b, a, 6);
		h = a;
		s1.getname(h);
		Student.open("D:\\实验室预约系统\\Student.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		Student << s1.showname() << " ";//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		Student.close();
		n4++;
		mmm();
		ff();
	}
}
/*学生注册姓名输入界面分割线*/


/*学生注册密码输入界面分割线*/
char oo(student s1)
{
	//学生注册密码输入界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：密码限10个数字内 │\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t 请输入学生密码\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	ofstream Student;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11;)
	{
		cin >> noskipws;
		cin >> a[n];
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
		}
	}
	if (a[0] == '\n')
	{
		ff();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 1);
		strncpy(b, a, 6);
		h = a;
		s1.getpassword(h);
		Student.open("D:\\实验室预约系统\\Student.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		Student << s1.showpassword() << " ";//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		Student.close();
		n5++;
		mmm();
		ff();
	}
}
/*学生注册密码输入界面分割线*/


/*学生注册学号输入界面分割线*/
char pp(student s1)
{
	//学生注册学号输入界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：学号限10个数字内 │\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t 请输入学生学号\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	ofstream Student;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11;)
	{
		cin >> noskipws;
		cin >> a[n];
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
		}
	}
	if (a[0] == '\n')
	{
		ff();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 1);
		strncpy(b, a, 6);
		h = a;
		s1.getID(h);
		Student.open("D:\\实验室预约系统\\Student.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		Student << s1.showID() <<endl;//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		Student.close();
		n6++;
		mmm();
		ff();
	}
}
/*学生注册学号输入界面分割线*/

/*管理员账号注册成功恭喜界面分割线*/
static  int n1 = 0, n2 = 0, n3 = 0;
int nnn()
{
	if ((n1 == n2 && n2 == n3) && (n1 != 0 && n2 != 0 && n3 != 0))
	{
		Anumberint();
		system("cls");/*清空控制台命令*/
		//管理员账号注册成功恭喜界面
		{
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[34m┌─────────────────────────────────────────────────┐\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[34m│ 恭喜你！管理员账号注册成功！请返回登录界面登录！│\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\033[34m└─────────────────────────────────────────────────┘\033[0m\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t┌\t\t\t\t ┐\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t    注：按回车返回登录界面\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t    注：按空格返回管理员注册界面\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m     \t└\t\t\t\t ┘\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
		}

		char ou;
	ou = _getch();
	if (ou == ' ')
	{
		system("cls");/*清空控制台命令*/
		gg();
	}
	else if (ou == '\r')
	{
		system("cls");/*清空控制台命令*/
		aa();
	}
	}
	return 1;
}
/*管理员账号注册成功恭喜界面分割线*/


/*管理员注册姓名输入界面分割线*/
char qq(student s1)
{
	//管理员注册姓名输入界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：姓名限5个字符内 │\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t 请输入管理员姓名\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	ofstream Administrator;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11;)
	{
		cin >> noskipws;
		cin >> a[n];
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
		}
	}
	if (a[0] == '\n')
	{
		gg();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 1);
		strncpy(b, a, 6);
		h = a;
		s1.getname(h);
		Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		Administrator << s1.showname() << " ";//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		Administrator.close();
		n1++;
		nnn();
		gg();
	}
}
/*管理员注册姓名输入界面分割线*/


/*管理员注册密码输入界面分割线*/
char rr(student s1)
{
	//管理员注册密码输入界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：密码限10个数字内│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t 请输入管理员密码\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	ofstream Administrator;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11;)
	{
		cin >> noskipws;
		cin >> a[n];
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
		}
	}
	if (a[0] == '\n')
	{
		gg();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 1);
		strncpy(b, a, 6);
		h = a;
		s1.getpassword(h);
		Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		Administrator << s1.showpassword() << " ";//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		Administrator.close();
		n2++;
		nnn();
		gg();
	}
}
/*管理员注册密码输入界面分割线*/


/*管理员注册工号输入界面分割线*/
char ss(student s1)
{
	//管理员注册工号输入界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t┌\t\t\t┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按回车│\033[0m\t│ 注意：工号限10个数字内│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t└\t\t\t┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t┌\t\t\t\t┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t 请输入管理员工号\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t└\t\t\t\t┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	ofstream Administrator;
	char a[11];
	char  b[11];
	string h;
	int n = 0;
	for (n; n <= 11;)
	{
		cin >> noskipws;
		cin >> a[n];
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*清空控制台命令*/
		}
	}
	if (a[0] == '\n')
	{
		gg();
	}
	else
	{
		a[n] = '\0';
		memset(b, 0, 1);
		strncpy(b, a, 6);
		h = a;
		s1.getID(h);
		Administrator.open("D:\\实验室预约系统\\Administrator.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//设定
		Administrator << s1.showID() << " " << endl;//正常写入
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//还原区域设定
		Administrator.close();
		n3++;
		nnn();
		gg();
	}
}
/*管理员注册工号输入界面分割线*/



/*学生登录界面分割线*/
char dd()
{
	static int d = 0, e = 0, f = 0;
	char a;

	//学生登录界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按空格│\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入姓名→按1\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入密码→按2\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入学号→按3\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	student s1;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2' || a == '3')
		{
			if (a == ' ')
			{
				system("cls");/*清空控制台命令*/
				bb();
			}
			else if (a == '1')
			{
				if ((m1 == (m2 + 1) && m1 == (m3 + 1)) || (m1 == m2 && m1 == (m3 + 1)) || (m1 == (m2 + 1) && m1 == m3))
				{
					cout << "你已经输过姓名了，请继续输入密码与学号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						dd();
					}
				}
				else 
				{
					system("cls");/*清空控制台命令*/
					hh();
				}				
			}
			else if (a == '2')
			{
				if ((m2 == (m1 + 1) && m2 == (m3 + 1)) || (m2 == m1 && m2 == (m3 + 1)) || (m2 == (m1 + 1) && m2 == m3) )
				{
					cout << "你已经输过姓名了，请继续输入密码与学号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						dd();
					}
				}
				else
				{
					system("cls");/*清空控制台命令*/
					ii();
				}
			}
			else if (a == '3')
			{
				if ((m3 == (m1 + 1) && m3 == (m2 + 1)) || (m3 == m1 && m3 == (m2 + 1)) || (m3 == (m1 + 1) && m3 == m2) )
				{					
					cout << "你已经输过学号了，请继续输入姓名与密码！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						dd();
					}

				}
				else
				{
					system("cls");/*清空控制台命令*/
					jj();
				}
			}
		}
	}
}
/*学生登录界面分割线*/


/*管理员登录界面分割线*/
char ee()
{
	//管理员登录界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按空格│\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入姓名→按1\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入密码→按2\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入工号→按3\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	char a;	
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2' || a == '3')
		{
			if (a == ' ')
			{
				system("cls");/*清空控制台命令*/
				bb();
			}
			else if (a == '1')
			{
				if ((m4 == (m5 + 1) && m4 == (m6 + 1)) || (m4 == m5 && m4 == (m6 + 1)) || (m4 == (m5 + 1) && m4 == m6))
				{
					cout << "你已经输过姓名了，请继续输入密码与工号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						ee();
					}
				}
				else
				{
					system("cls");/*清空控制台命令*/
					kk();
				}
			}
			else if (a == '2')
			{
				if ((m5 == (m4 + 1) && m5 == (m6 + 1)) || (m5 == m4 && m5 == (m6 + 1)) || (m5 == (m4 + 1) && m5 == m6))
				{
					cout << "你已经输过姓名了，请继续输入密码与工号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						ee();
					}
				}
				else
				{
					system("cls");/*清空控制台命令*/
					ll();
				}
			}
			else if (a == '3')
			{
				if ((m6 == (m4 + 1) && m6 == (m5 + 1)) || (m6 == m4 && m6 == (m5 + 1)) || (m6 == (m4 + 1) && m6 == m5))
				{
					cout << "你已经输过工号了，请继续输入姓名与密码！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						ee();
					}

				}
				else
				{
					system("cls");/*清空控制台命令*/
					nn();
				}
			}
		}
	}
}
/*管理员登录界面分割线*/


/*学生注册界面分割线*/
char ff()
{


	static int d = 0,e=0,f=0;
	char a;
	//学生注册界面
	{
		SetFont(17);
		cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m│ 返回→按空格│\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t│\t  输入姓名→按1\t\t│\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t│\t  输入密码→按2\t\t│\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t│\t  输入学号→按3\t\t│\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
		cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	student s1;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2' || a == '3')
		{
			if (a == '1')
			{
				if ((d == (e + 1) && d == (f + 1)) || (d == e && d == (f + 1)) || (d == (e + 1) && d == f))
				{
					cout << "你已经输过姓名了，请继续输入密码与学号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						ff();
					}
				}
				system("cls");/*清空控制台命令*/
				d++;
				mm(s1);
            }
			else if (a == '2')
			{
				if ((e==(d+1)&& e == (f + 1))|| (e == d && e == (f + 1))|| (e == (d + 1) && e == f))
				{
					cout << "你已经输过密码了，请继续输入姓名与学号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						ff();
					}
				}
				system("cls");/*清空控制台命令*/
				e++;
				oo(s1);
			}
			else if (a == '3')
			{
				if ((f == (d + 1) && f == e ) || (f == d && f == (e + 1)) || (f == (d + 1) && f == e)||((f==e&&f==d)&&(f!=0)))
				{
					cout << "你已经输过学号了，请继续输入姓名与密码！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						ff();
					}
				}
				system("cls");/*清空控制台命令*/
				f++;
				pp(s1);
			}
			else if (a == ' ')
			{
				system("cls");/*清空控制台命令*/
				bb();
			}
		}
	}
}
/*学生注册界面分割线*/


/*管理员注册界面分割线*/
char gg()
{
	static int db = 0, eb = 0, fb = 0;
	char a;
	//管理员注册界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按空格│\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入姓名→按1\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入密码→按2\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t  输入工号→按3\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	student s1;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2' || a == '3')
		{
			if (a == '1')
			{
				if ((db == (eb + 1) && db == (fb + 1)) || (db == eb && db == (fb + 1)) || (db == (eb + 1) && db == fb))
				{
					cout << "你已经输过姓名了，请继续输入密码与工号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						gg();
					}
				}
				system("cls");/*清空控制台命令*/
				db++;
				qq(s1);
			}
			else if (a == '2')
			{
				if ((eb == (db + 1) && eb == (fb + 1)) || (eb == db && eb == (fb + 1)) || (eb == (db + 1) && eb == fb))
				{
					cout << "你已经输过密码了，请继续输入姓名与工号！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						gg();
					}
				}
				system("cls");/*清空控制台命令*/
				eb++;
				rr(s1);
			}
			else if (a == '3')
			{
				if ((fb == (db + 1) && fb == eb) || (fb == db && fb == (eb + 1)) || (fb == (db + 1) && fb == eb) || ((fb == eb && fb == db) && (fb != 0)))
				{
					cout << "你已经输过工号了，请继续输入姓名与密码！（按回车重新选择）";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*清空控制台命令*/
						gg();
					}
				}
				system("cls");/*清空控制台命令*/
				fb++;
				ss(s1);
			}
			else if (a == ' ')
			{
				system("cls");/*清空控制台命令*/
				bb();
			}
		}
	}
}
/*管理员登录界面分割线*/


/*登录区分人员界面分割线*/
char bb()
{
	//登录区分人员界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按空格│\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t    学生→按1\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t    管理员→按2\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}

	char a;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2')
		{
			if (a == '1')
			{
				system("cls");/*清空控制台命令*/
				dd();
			}
			else if (a == '2')
			{
				system("cls");/*清空控制台命令*/
				ee();
			}
			else if (a == ' ')
			{
				system("cls");/*清空控制台命令*/
				aa();
			}
		}
	}


	
}
/*登录区分人员界面分割线*/


/*注册区分人员界面分割线*/
char cc()
{
	//注册区分人员界面
	{
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m┌─────────────┐\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m│ 返回→按空格│\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m \033[34m└─────────────┘\033[0m\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t    学生→按1\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t┌───────────────────────────────┐\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t│\t    管理员→按2\t\t│\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t└───────────────────────────────┘\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t\t\t\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	
	char a;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2')
		{
			if (a == '1')
			{
				system("cls");/*清空控制台命令*/
				ff();
			}
			else if (a == '2')
			{
				system("cls");/*清空控制台命令*/
				gg();
			}
			else if (a == ' ')
			{
				system("cls");/*清空控制台命令*/
				aa();
			}
		}
	}



}
/*注册区分人员界面分割线*/


/*预约系统总界面分割线*/
void aa()
{
	//预约系统总界面
	{
	system("cls");/*清空控制台命令*/
	SetFont(17);
	cout << "\033[31m┌───────────────────────────────────────────────────────────────┐\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\033[33m┌─────────────────────────────────┐\033[0m\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\033[33m│\033[0m\t\t\t\t  \033[33m│\033[0m\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\033[33m│\033[0m\t\033[33m智能实验室预约系统\033[0m\t  \033[33m│\033[0m\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\033[33m│\033[0m\t\t\t\t  \033[33m│\033[0m\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\033[33m└─────────────────────────────────┘\033[0m\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t┌───────────────┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t│   登录→按1\t│\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t└───────────────┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t┌───────────────┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t│   注册→按2\t│\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t└───────────────┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t┌───────────────┐\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t│   退出→按0\t│\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m┃\033[0m\t\t\t└───────────────┘\t\t\t\033[31m┃\033[0m" << endl;
	cout << "\033[31m└───────────────────────────────────────────────────────────────┘\033[0m" << endl;
	}
	char a;
	while (1)
	{
	a = _getch();
	if (a == '1')
	{
		system("cls");/*清空控制台命令*/
		bb();
	}
	else if (a == '2')
	{
		system("cls");/*清空控制台命令*/
		cc();
	}
	else if (a == '0')
	{
		system("cls");/*清空控制台命令*/
		exit(0);
	}
	}
}
/*预约系统总界面分割线*/



/*主函数分割线*/
int main()
{
	FileCreate(); /*创建汇总txt文件夹的函数*/
	oooo();
	SAnumber(); /*判断学生与管理员数量统计txt文件是否存在的函数*/
	aa();/*预约系统总界面函数*/
	return 0;
}
/*主函数分割线*/