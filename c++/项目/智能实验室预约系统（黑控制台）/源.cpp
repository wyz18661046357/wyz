#include<iostream>
#include <locale>/*ʹ�����ı��ļ������Ĳ��������ͷ�ļ�*/
#include <Windows.h>/*�ı����������̨������ɫ��ͷ�ļ�*/
#include<fstream>/*�ļ�������ͷ�ļ�*/
#include<conio.h>/*����_getch()������ͷ�ļ�*/
#include<stdlib.h>
#include <sstream>/*����д�뵱ǰϵͳʱ���ͷ�ļ�*/
#include <direct.h>/*�����ļ����ļ��в�����ͷ�ļ�*/
#include <io.h>/*�����ļ����ļ��в�����ͷ�ļ�*/
#include<string>/*һЩ����string���ͱ����Ĳ�������ͷ�ļ�*/
#pragma warning(disable:4996)/*��ֹ��������strncpy������������*/
using namespace std;

/*���������ָ���*/
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
/*���������ָ���*/

/*���������С�ֽ���*/
void SetFont(int size = 30) {
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = size;  //���������С
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL; //�����ϸ FW_BOLD
	wcscpy_s(cfi.FaceName, L"����");  //�������壬�����ǿ���̨���е�
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
/*���������С�ֽ���*/


/*����Ա���ݽṹ�ֽ���*/
class admin
{
protected:
	char name[10];   /*����Ա����*/
	char password[10];   /*����Ա����*/
	char ID[5];   /*����Ա����*/
};
/*����Ա���ݽṹ�ֽ���*/


/*ѧ�����ݽṹ�ֽ���*/
class student
{
private:
	string name;   /*ѧ������*/
	string password;   /*ѧ������*/
	string ID;   /*ѧ��ѧ��*/
	int time;   /*ѧ��ʹ�õ����ۼ�ʱ��*/
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
/*ѧ�����ݽṹ�ֽ���*/


/*ʵ���ҵ������ݽṹ�ֽ���*/
class lab
{
protected:
	int No;   /*ʵ���ҵ��Ա��*/
	string name;   /*��ǰʹ�õ��Ե�ѧ��������*/
	string number;   /*��ǰʹ�õ��Ե�ѧ����ѧ��*/
	int eight;   /*����ʱ���״̬���˵�*/
	int nine;   /*����ʱ���״̬���ŵ�*/
	int ten;   /*����ʱ���״̬��ʮ��*/
	int eleven;   /*����ʱ���״̬��ʮһ��*/
	int twelve;   /*����ʱ���״̬��ʮ����*/
	int thirteen;   /*����ʱ���״̬��ʮ����*/
	int fourteen;   /*����ʱ���״̬��ʮ�ĵ�*/
	int fifteen;   /*����ʱ���״̬��ʮ���*/
	int sixteen;   /*����ʱ���״̬��ʮ����*/
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
/*ʵ���ҵ������ݽṹ�ֽ���*/


/*����"computer"�ַ��������ֽ���*/
string Computer()
{
	string g = "computer";
	return g;
}
/*����"computer"�ַ��������ֽ���*/


/*���㵱ǰϵͳ���ڣ����ڣ�ʱ��ĺ����ָ���*/
string WORDToString(WORD w)
{
	char tmpbuff[16];
	sprintf(tmpbuff, "%d", w);
	string res = tmpbuff;
	return res;
}
string getTime()
{
	string week[7] = { "������","����һ","���ڶ�","������","������","������","������" };
	SYSTEMTIME now;
	string currentTime;
	GetLocalTime(&now);
	currentTime = WORDToString(now.wHour);
	return currentTime;
}
/*���㵱ǰϵͳ���ڣ����ڣ�ʱ��ĺ����ָ���*/
//ֱ�ӵ���getTime();���ܷ��ص�ǰ���ڣ����ڣ�ʱ����Ϣ

/*��ǰ���ڣ����ڣ�ʱ��д��ĺ����ָ���*/
void llll(string h)
{
	ofstream Time;
	Time.open("D:\\ʵ����ԤԼϵͳ\\Time.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//�趨
	Time << h << " ";//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	Time.close();
}
/*��ǰ���ڣ����ڣ�ʱ��д�뺯���ָ���*/



/*��ǰ��¼ѧ������д�뺯���ָ���*/
 void aaaa(string h)
{
	 ofstream StudentLogIn;
	 StudentLogIn.open("D:\\ʵ����ԤԼϵͳ\\StudentLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//�趨
	 StudentLogIn <<h << " ";//����д��
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//��ԭ�����趨
	 StudentLogIn.close();
}
 /*��ǰ��¼ѧ������д�뺯���ָ���*/


 /*��ǰ��¼ѧ���������������ָ���*/
 string dddd()
 {
	 string h,m;
	 ifstream StudentLogIn;
	 StudentLogIn.open("D:\\ʵ����ԤԼϵͳ\\StudentLogIn.txt", ios::app);
	 StudentLogIn >> h;
	 m = h;
	 StudentLogIn.close();
	 return m;
 }
 /*��ǰ��¼ѧ���������������ָ���*/

  /*��ǰ��¼ѧ��������������ָ���*/
int dddd1()
 {
	 string h, m;
	 int h1, m1;
	 ifstream StudentLogIn;
	 StudentLogIn.open("D:\\ʵ����ԤԼϵͳ\\StudentLogIn.txt", ios::app);
	 StudentLogIn >> h;
	 StudentLogIn >> h1;
	 m = h;
	 m1 = h1;
	 StudentLogIn.close();
	 return m1;
 }
 /*��ǰ��¼ѧ��������������ָ���*/


   /*��ǰ��¼ѧ��������������ָ���*/
 int dddd2()
 {
	 string h, m;
	 int h1, m1;
	 int h2, m2;
	 ifstream StudentLogIn;
	 StudentLogIn.open("D:\\ʵ����ԤԼϵͳ\\StudentLogIn.txt", ios::app);
	 StudentLogIn >> h;
	 StudentLogIn >> h1;
	 StudentLogIn >> h2;
	 m = h;
	 m1 = h1;
	 m2 = h2;
	 StudentLogIn.close();
	 return m2;
 }
 /*��ǰ��¼ѧ��������������ָ���*/



 /*��ǰ��¼ѧ��������ѧ��д�뺯���ָ���*/
 void bbbb(int h)
 {
	 ofstream StudentLogIn;
	 StudentLogIn.open("D:\\ʵ����ԤԼϵͳ\\StudentLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//�趨
	 StudentLogIn << h << " ";//����д��
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//��ԭ�����趨
	 StudentLogIn.close();
 }
 /*��ǰ��¼ѧ��������ѧ��д�뺯���ָ���*/


 /*ע����ǰ��¼��ѧ���˺ŵĺ����ָ���*/
 void cccc()
 {
	 string file_name = "D:\\ʵ����ԤԼϵͳ\\StudentLogIn.txt";
	 ofstream file_writer(file_name, ios_base::out);
 }
 /*ע����ǰ��¼��ѧ���˺ŵĺ����ָ���*/


 /*��ǰ��¼����Ա����д�뺯���ָ���*/
 void eeee(string h)
 {
	 ofstream AdministratorLogIn;
	 AdministratorLogIn.open("D:\\ʵ����ԤԼϵͳ\\AdministratorLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//�趨
	 AdministratorLogIn << h << " ";//����д��
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//��ԭ�����趨
	 AdministratorLogIn.close();
 }
 /*��ǰ��¼����Ա����д�뺯���ָ���*/


 /*��ǰ��¼����Ա�������������ָ���*/
 string ffff()
 {
	 string h, m;
	 ifstream AdministratorLogIn;
	 AdministratorLogIn.open("D:\\ʵ����ԤԼϵͳ\\AdministratorLogIn.txt", ios::app);
	 AdministratorLogIn >> h;
	 m = h;
	 AdministratorLogIn.close();
	 return m;
 }
 /*��ǰ��¼����Ա�������������ָ���*/


 /*��ǰ��¼����Ա�����빤��д�뺯���ָ���*/
 void gggg(int h)
 {
	 ofstream AdministratorLogIn;
	 AdministratorLogIn.open("D:\\ʵ����ԤԼϵͳ\\AdministratorLogIn.txt", ios::app);
	 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	 setlocale(LC_CTYPE, "chs");//�趨
	 AdministratorLogIn << h << " ";//����д��
	 setlocale(LC_CTYPE, old_locale);
	 free(old_locale);//��ԭ�����趨
	 AdministratorLogIn.close();
 }
 /*��ǰ��¼����Ա�����빤��д�뺯���ָ���*/


 /*ע����ǰ��¼�Ĺ���Ա�˺ŵĺ����ָ���*/
 void hhhh()
 {
	 string file_name = "D:\\ʵ����ԤԼϵͳ\\AdministratorLogIn.txt";
	 ofstream file_writer(file_name, ios_base::out);
 }
 /*ע����ǰ��¼�Ĺ���Ա�˺ŵĺ����ָ���*/


 /*��������txt�ļ��еĺ����ָ���*/
 void FileCreate()
 {
	 /*�������txt�ļ����ļ���*/
	 string di = "D:\\ʵ����ԤԼϵͳ";
	 mkdir(di.c_str());
	  string de = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ";
	 mkdir(de.c_str());
/*	�������txt�ļ����ļ���*/
 }
 /*��������txt�ļ��еĺ����ָ���*/


  /*ɾ������txt�ļ��еĺ����ָ���*/
 void FileDelete()
 {
	 /*ɾ�����txt�ļ����ļ���*/
	 string di = "D:\\ʵ����ԤԼϵͳ";
	 rmdir(di.c_str());
	 /*ɾ�����txt�ļ����ļ���*/
 }
 /*ɾ������txt�ļ��еĺ����ָ���*/


 /*�ж�ѧ�������Ա����ͳ��txt�ļ��Ƿ���ں����ָ���*/
 void SAnumber()
 {
	 const char* dir = "D:\\ʵ����ԤԼϵͳ\\number.txt";
	 int a;
	 if (_access(dir, 0) == -1)
	 {
		 ofstream number;
		 int kk = 0;
		 int kkk = 0;
		 number.open("D:\\ʵ����ԤԼϵͳ\\number.txt", ios::app);
		 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		 setlocale(LC_CTYPE, "chs");//�趨
		 number << kk << " " << kkk;//����д��
		 setlocale(LC_CTYPE, old_locale);
		 free(old_locale);//��ԭ�����趨
		 number.close();
	 }
	 else
	 {

	 }
 }
 /*�ж�ѧ�������Ա����ͳ��txt�ļ��Ƿ���ں����ָ���*/


/*ѧ������ͳ�ƶ�ȡ�����ָ���*/
int Snumberout()
{
	ifstream number;
	int h;
	number.open("D:\\ʵ����ԤԼϵͳ\\number.txt", ios::app);
	number >> h;
	number.close();
	return h;
}
/*ѧ������ͳ�ƶ�ȡ�����ָ���*/


/*����Ա����ͳ�ƶ�ȡ�����ָ���*/
int Anumberout()
{
	ifstream number;
	int h;
	int y;
	number.open("D:\\ʵ����ԤԼϵͳ\\number.txt", ios::app);
	number >> h;
	number >> y;
	number.close();
	return y;
}
/*����Ա����ͳ�ƺ����ָ���*/


 /*ѧ������ͳ��д�뺯���ָ���*/
 int Snumberint()
 {

		 int a = Snumberout();
		 int b = Anumberout();
	 ofstream number;
		 a++;
		 string file_name = "D:\\ʵ����ԤԼϵͳ\\number.txt";
		 ofstream file_writer(file_name, ios_base::out);
		 number.open("D:\\ʵ����ԤԼϵͳ\\number.txt", ios::app);
		 char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		 setlocale(LC_CTYPE, "chs");//�趨
		 number << a<< " " << b<<endl;//����д��
		 setlocale(LC_CTYPE, old_locale);
		 free(old_locale);//��ԭ�����趨
		 number.close();
	 return 0;
 }
 /*ѧ������ͳ��д�뺯���ָ���*/


/*����Ա����ͳ��д�뺯���ָ���*/
int Anumberint()
{
	ofstream number;
	int a = Snumberout();
	int b = Anumberout();
	b++;
	string file_name = "D:\\ʵ����ԤԼϵͳ\\number.txt";
	ofstream file_writer(file_name, ios_base::out);
	number.open("D:\\ʵ����ԤԼϵͳ\\number.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//�趨
	number << a << " " << b;//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	number.close();
	return 0;
}
/*����Ա����ͳ��д�뺯���ָ���*/


/*ѡ���Ƿ�ע����ǰ��¼��ѧ���˺ŵĺ����ָ���*/
void kkkk()
{
	char a;
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��������������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��  ��ȷ���Ƿ�ע����ǰ��¼��ѧ���˺ţ�  ��\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��������������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\tȷ��ע������1\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\tȡ��ע������0\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	a = _getch();
	if (a == '1')
	{
		cccc();
		aa();
	}
	else if (a == '0')
	{
		system("cls");/*��տ���̨����*/
		mmmm();
	}
}
/*ѡ���Ƿ�ע����ǰ��¼��ѧ���˺ŵĺ����ָ���*/

	lab computer[40];
/*����36̨����������ĺ����ָ���*/
void oooo()
{
	int n ,m;
	const char* die = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\computer1.txt";
	int a;
	if (_access(die, 0) == -1)
	{
		for (n = 0, m = 1; n < 36; n++, m++)
		{
			string u = to_string(m);
			string h = Computer() + u;
			string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
			ofstream b1;
			b1.open(g, ios::app);
			char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
			setlocale(LC_CTYPE, "chs");//�趨
			computer[n].getNo(m);
			b1 <<computer[n].showNo()<<" "<<computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
			setlocale(LC_CTYPE, old_locale);
			free(old_locale);//��ԭ�����趨
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
			string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
/*����40̨����������ĺ����ָ���*/


 /*�ж�ԤԼ�ļ��Ƿ���ں����ָ���*/
void aaaaaa()
{
	const char* dii = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ.txt";
	int a;
	if (_access(dii, 0) == -1)
	{
		ofstream number;
		number.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		number.close();
	}
	else
	{

	}
}
/*�ж�ԤԼ�ļ��Ƿ���ں����ָ���*/


/*ѧ���ж��Ƿ�Ϊ���ϵ���*/
int yyyy(int n)
{
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36;
	int aa1, aa2, aa3, aa4, aa5, aa6, aa7, aa8, aa9, aa10, aa11, aa12, aa13, aa14, aa15, aa16, aa17, aa18, aa19, aa20, aa21, aa22, aa23, aa24, aa25, aa26, aa27, aa28, aa29, aa30, aa31, aa32, aa33, aa34, aa35, aa36;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt";
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
/*ѧ���ж��Ƿ�Ϊ���ϵ���*/


/*ѧ���ж�8:00��9:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr1(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (ll == 0)
	{
		return "δԤԼ";
	}
	else if (ll == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�8:00��9:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���ж�9:00��10:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr2(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (mm == 0)
	{
		return "δԤԼ";
	}
	else if (mm == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�9:00��10:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���ж�10:00��11:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr3(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (nn == 0)
	{
		return "δԤԼ";
	}
	else if (nn == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�10:00��11:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���ж�11:00��12:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr4(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (oo == 0)
	{
		return "δԤԼ";
	}
	else if (oo == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�11:00��12:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���ж�12:00��13:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr5(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (pp == 0)
	{
		return "δԤԼ";
	}
	else if (pp == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�12:00��13:00�Ƿ�ԤԼ�����ֽ���*/



/*ѧ���ж�13:00��14:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr6(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (qq== 0)
	{
		return "δԤԼ";
	}
	else if (qq == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�13:00��14:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���ж�14:00��15:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr7(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (rr== 0)
	{
		return "δԤԼ";
	}
	else if (rr == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�14:00��15:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���ж�15:00��16:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr8(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (ss== 0)
	{
		return "δԤԼ";
	}
	else if (ss== 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�15:00��16:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���ж�16:00��17:00�Ƿ�ԤԼ�����ֽ���*/
string rrrr9(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		return "�ѹ���";
	}
	else
	{
	if (tt == 0)
	{
		return "δԤԼ";
	}
	else if (tt == 1)
	{
		return "��ԤԼ";
	}
	}

}
/*ѧ���ж�16:00��17:00�Ƿ�ԤԼ�����ֽ���*/


/*ѧ���鿴����ԤԼ��������ķֽ���*/
void pppp(int n)
{
	string h=dddd();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[32m  ������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m�� ���ء����س���\033[0m\033[32m  ��  "<<h<<"ͬѧ��"<<n<<"�ŵ��Ե�ԤԼ�������\t��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[32m  ������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 8:00��9:00"<<rrrr1(n)<<"  ���� 9:00��10:00" << rrrr2(n) << " ���� 10:00��11:00" << rrrr3(n) << "��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 11:00��12:00" << rrrr4(n) << "���� 12:00��13:00" << rrrr5(n) << "���� 13:00��14:00" << rrrr6(n) << "��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 14:00��15:00" << rrrr7(n) << "���� 15:00��16:00" << rrrr8(n) << "���� 16:00��17:00" << rrrr9(n) << "��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		nnnn();
	}
}
/*ѧ���鿴����ԤԼ��������ķֽ���*/


/*��ѯʵ����ԤԼ������溯���ָ���*/
void nnnn()
{
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t     ��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m�� ʵ���ҵ���ʹ���������ѡ����ԣ�������10����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t     ��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 1 ���� 2 ���� 3 ���� 4 ���� 5 ���� 6 ���� 7 ���� 8 ���� 9 ���� 10���� 11���� 12����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 13���� 14���� 15���� 16���� 17���� 18���� 19���� 20���� 21���� 22���� 23���� 24����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 25���� 26���� 27���� 28���� 29���� 30���� 31���� 32���� 33���� 34���� 35���� 36����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
		system("cls");/*��տ���̨����*/
		pppp(b);
			}
			else
			{

			}

		}

	}
}
/*��ѯʵ����ԤԼ������溯���ָ���*/


/*ԤԼ�ļ�д�뺯��*/
void bbbbbb(string h, int i, int o, int n, string Stime)
{
	ofstream a1;
	a1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//�趨
	a1 << h << " " << i << " " << o << " " << n << " " << Stime << endl;
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a1.close();
}
/*ԤԼ�ļ�д�뺯��*/



/*ѧ��ȷ��ԤԼ���溯���ֽ���*/
void zzzz(int n,string Stime)
{
	string h = dddd();
	aaaaaa();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m����������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��\t" << h << "ͬѧ����ϲ�㣬ԤԼ�ɹ���\t��\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m����������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   ��\t\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\tԤԼ��Ϣ��" << n << "�ŵ��ԡ�" << Stime << "\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t  ����ѧ��������������س�\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   ��\t\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		int i, o;
		i = dddd1();
		o = dddd2();
		bbbbbb(h,i,o,n,Stime);
		mmmm();
	}
}
/*ѧ��ȷ��ԤԼ���溯���ֽ���*/


/*ѧ��ѡ��ԤԼʱ�亯���ֽ���*/
void ssss(int n)
{
	string h = dddd();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[32m  ��  \t\t\t\t\t      ��\t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m�� ���ء����س���\033[0m\033[32m    " << h << "ͬѧ����ѡ��"<<n<<"�ŵ�����ҪԤԼ��ʱ���\t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[32m  ��  \t\t\t\t\t      ��\t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 8:00��9:00 ����1  ���� 9:00��10:00 ����2 ���� 10:00��11:00 ����3��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 11:00��12:00 ����4���� 12:00��13:00 ����5���� 13:00��14:00 ����6��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 14:00��15:00 ����7���� 15:00��16:00 ����8���� 16:00��17:00 ����9��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		qqqq();
	}
	else if (a == '1')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "8:00��9:00");
	}
	else if (a == '2')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "9:00��10:00");
	}
	else if (a == '3')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "10:00��11:00");
	}
	else if (a == '4')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "11:00��12:00");
	}
	else if (a == '5')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "12:00��13:00");
	}
	else if (a == '6')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "13:00��14:00");
	}
	else if (a == '7')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "14:00��15:00");
	}
	else if (a == '8')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "15:00��16:00");
	}
	else if (a == '9')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz(n, "16:00��17:00");
	}
}
/*ѧ��ѡ��ԤԼʱ�亯���ֽ���*/


/*���ԤԼ�ĵ�����*/
void dddddd()
{
	string file_name = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ.txt";
	ofstream file_writer(file_name, ios_base::out);
}
/*���ԤԼ�ĵ�����*/



/*���ԤԼ�����ĵ�����*/
void eeeeee()
{
	string file_name = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ����.txt";
	ofstream file_writer(file_name, ios_base::out);
}
/*���ԤԼ�����ĵ�����*/



/*ȡ��ԤԼ�ļ�д�뺯��*/
void cccccc( string h1,int n2,string Stime2)
{
	string n3 = to_string(n2);
	ifstream a1;
	a1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ.txt", ios::app);
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
			g1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ����.txt", ios::app);
			char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
			setlocale(LC_CTYPE, "chs");//�趨
			g1 << h2 << " " << i1 << " " << o1 << " " << n1 << " " << Stime1 << endl;
			setlocale(LC_CTYPE, old_locale);
			free(old_locale);//��ԭ�����趨
			g1.close();
		}
	}


	dddddd();
	a1.close();
	ifstream g2;
	g2.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ����.txt", ios::app);
	string h4, i4, o4, n4, Stime4;
	while (g2 >> h4 >> i4 >> o4 >> n4 >> Stime4)
	{
	string h5, i5, o5, n5, Stime5;
	h5 = h4; i5 = i4; o5 = o4; n5 = n4; Stime5 = Stime4;
	ofstream g3;
	g3.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ.txt", ios::app);
	char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
	setlocale(LC_CTYPE, "chs");//�趨
	g3 << h5 << " " << i5 << " " << o5 << " " << n5 << " " << Stime5 << endl;
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	g3.close();
	}
	eeeeee();	
	g2.close();
}
/*ȡ��ԤԼ�ļ�д�뺯��*/



void zzzz1(int n, string Stime)
{
	string h = dddd();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[33m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[33m��\t" << h << "ͬѧ����ϲ�㣬ȡ��ԤԼ�ɹ���\t��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[33m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t��\t\t\t\t\t\t��\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t  ����ȡ����ԭԤԼ��Ϣ��" << n << "�ŵ��ԡ�" << Stime << "\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t  ����ѧ��������������س�\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t��\t\t\t\t\t\t��\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		cccccc(h,n,Stime);
		mmmm();
	}
}


/*ѧ��ȡ��ԤԼʱ�亯���ֽ���*/
void uuuu(int n)
{
	string h = dddd();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[32m  ��  \t\t\t\t\t      ��\t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m�� ���ء����س���\033[0m\033[32m    " << h << "����ѡ��" << n << "�ŵ�����Ҫȡ��ԤԼ��ʱ���\t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[32m  ��  \t\t\t\t\t      ��\t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 8:00��9:00 ����1  ���� 9:00��10:00 ����2 ���� 10:00��11:00 ����3��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 11:00��12:00 ����4���� 12:00��13:00 ����5���� 13:00��14:00 ����6��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m�� 14:00��15:00 ����7���� 15:00��16:00 ����8���� 16:00��17:00 ����9��\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m������������������������������������������������������������������������������������������������������������������������������\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		tttt();
	}
	else if (a == '1')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz1(n, "8:00��9:00");
	}
	else if (a == '2')
	{
		int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
		int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
		string u = to_string(n);
		string h = Computer() + u;
		string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
		setlocale(LC_CTYPE, "chs");//�趨
		a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		a2.close();
		system("cls");/*��տ���̨����*/
		zzzz1(n, "9:00��10:00");
	}
	else if (a == '3')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
	system("cls");/*��տ���̨����*/
	zzzz1(n, "10:00��11:00");
	}
	else if (a == '4')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
	system("cls");/*��տ���̨����*/
	zzzz1(n, "11:00��12:00");
	}
	else if (a == '5')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
	system("cls");/*��տ���̨����*/
	zzzz1(n, "12:00��13:00");
	}
	else if (a == '6')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
	system("cls");/*��տ���̨����*/
	zzzz1(n, "13:00��14:00");
	}
	else if (a == '7')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
	system("cls");/*��տ���̨����*/
	zzzz1(n, "14:00��15:00");
	}
	else if (a == '8')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
	system("cls");/*��տ���̨����*/
	zzzz1(n, "15:00��16:00");
	}
	else if (a == '9')
	{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
	system("cls");/*��տ���̨����*/
	zzzz1(n, "16:00��17:00");
	}
}
/*ѧ��ȡ��ԤԼʱ�亯���ֽ���*/


/*ѧ��ȡ��ԤԼ����ѡ�����ֽ���*/
void tttt()
{
	string h = dddd();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������  \033[0m��\t\t\t\t\t��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m  �� " << h << "����ѡ����Ҫȡ��ԤԼ�ĵ���!\t��\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������  \033[0m��\t\t\t\t\t��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 1 ���� 2 ���� 3 ���� 4 ���� 5 ���� 6 ���� 7 ���� 8 ���� 9 ���� 10���� 11���� 12����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 13���� 14���� 15���� 16���� 17���� 18���� 19���� 20���� 21���� 22���� 23���� 24����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 25���� 26���� 27���� 28���� 29���� 30���� 31���� 32���� 33���� 34���� 35���� 36����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
				system("cls");/*��տ���̨����*/
				uuuu(b);
			}
			else
			{

			}
		}
	}
}
/*ѧ��ȡ��ԤԼ����ѡ�����ֽ���*/



void zzzz(int n)
{
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m����������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��\t" << n << "�ŵ����ѹ��ϣ�������ѡ��\t��\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m����������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t���ء����س�\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		qqqq();
	}
}


/*ѧ��ԤԼѡ����Եĺ����ֽ���*/
void qqqq()
{
	string h = dddd();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������  \033[0m��\t\t\t\t\t��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m  �� " << h << "ͬѧ����ѡ����ҪԤԼ�ĵ���!\t��\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������  \033[0m��\t\t\t\t\t��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 1 ���� 2 ���� 3 ���� 4 ���� 5 ���� 6 ���� 7 ���� 8 ���� 9 ���� 10���� 11���� 12����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 13���� 14���� 15���� 16���� 17���� 18���� 19���� 20���� 21���� 22���� 23���� 24����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 25���� 26���� 27���� 28���� 29���� 30���� 31���� 32���� 33���� 34���� 35���� 36����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
				system("cls");/*��տ���̨����*/
				ssss(b);
			}
			else
			{

			}
		}
	}
}
/*ѧ��ԤԼѡ����Եĺ����ֽ���*/


 /*�ж�error.txt�ļ��Ƿ���ں����ָ���*/
void hhhhh()
{
	const char* diy = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt";
	int a;
	if (_access(diy, 0) == -1)
	{
		ofstream number;
		int kk = 0;
		number.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		for (a =1 ; a <= 36; a++)
		{
		number << kk << " " ;//����д��
		}
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		number.close();
	}
	else
	{

	}
}
/*�ж�error.txt�ļ��Ƿ���ں����ָ���*/



/*���error.txt�ĵ�����*/
void ggggg()
{
	string file_name = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt";
	ofstream file_writer(file_name, ios_base::out);
}
/*���error.txt�ĵ�����*/


/*����Աȷ�Ϲ��Ͻ�good��0����*/
void eeeee(int n)
{
	hhhhh();
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	e2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	e2.close();
	ifstream f1;
	f1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt", ios::app);
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
	ww1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt", ios::app);
	for (int u = 0; u < 36; u++)
	{
		ww1 << hhh[u]<<' ';
	}
}
/*����Աȷ�Ϲ��Ͻ�good��0����*/





/*����Աȷ�Ϲ��Ͻ�good��0����*/
void fffff(int n)
{
	hhhhh();
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	e2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	e2.close();
	ifstream f1;
	f1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt", ios::app);
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
	ww1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\error.txt", ios::app);
	for (int u = 0; u < 36; u++)
	{
		ww1 << hhh[u] << ' ';
	}
}
/*����Աȷ�Ϲ��Ͻ�good��0����*/


/*����Աѡ������Ƿ���Ͻ��溯���ֽ���*/
void ccccc(int n)
{
	string h = ffff();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[33m ��\t\t\t\t\t ��\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m�� ���ء����س���\033[33m    " << h << "����Ա����ȷ��" << n << "�ŵ����Ƿ����  \t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[33m ��\t\t\t\t\t ��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t  ��\t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t" << n << "�ŵ���ȷ�Ϲ��ϡ���1\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t" << n << "�ŵ��Բ�δ���ϡ���0\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t  ��\t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{

	}
	else if (a == '1')
	{
		eeeee(n);
		system("cls");/*��տ���̨����*/
		aaaaa();
	}
	else if (a == '0')
	{
		fffff(n);
		system("cls");/*��տ���̨����*/
		aaaaa();
	}
}
/*����Աѡ������Ƿ���Ͻ��溯���ֽ���*/


/*�ж��Ƿ�Ϊѧ������Ĺ��ϵ���*/
char bbbbb(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj, good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
/*�ж��Ƿ�Ϊѧ������Ĺ��ϵ���*/


/*����Աѡ����Թ��ϱ�����溯���ֽ���*/
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
	system("cls");/*��տ���̨����*/
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t      ��\033[31m\t��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m�� ʵ���ҵ���״̬�������!��ѧ������˵��Թ��ϩ�\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t      ��\033[31m\t��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m���� 1"<<a1<<"���� 2" << a2 << "���� 3" << a3 << "���� 4" << a4 << "���� 5" << a5 << "���� 6" << a6 << "���� 7" << a7 << "���� 8" << a8 << "���� 9" << a9 << "����10" << a10 << "����11" << a11 << "����12" << a12 << "����\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����13" << a13 << "����14" << a14 << "����15" << a15 << "����16" << a16 << "����17" << a17 << "����18" << a18 << "����19" << a19 << "����20" << a20 << "����21" << a21 << "����22" << a22 << "����23" << a23 << "����24" << a24 << "����\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����25" << a25 << "����26" << a26 << "����27" << a27 << "����28" << a28 << "����29" << a29 << "����30" << a30 << "����31" << a31 << "����32" << a32 << "����33" << a33 << "����34" << a34 << "����35" << a35 << "����36" << a36 << "����\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
    }
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
				system("cls");/*��տ���̨����*/
				ccccc(b);
			}
			else
			{

			}
		}
	}
}
/*����Աѡ����Թ��ϱ�����溯���ֽ���*/


/*����Ա�жϵ����Ƿ�Ϊ*�ĺ����ֽ���*/
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
/*����Ա�жϵ����Ƿ�Ϊ*�ĺ����ֽ���*/


/*����Աȷ���������ϱ�ǵĺ����ֽ���*/
void kkkkk(int n)
{
	string h = ffff();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[33m ��\t\t\t\t\t     ��\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m�� ���ء����س���\033[33m    " << h << "����Ա����ȷ��" << n << "�ŵ��Թ����Ƿ��޸�  \t\033[0m\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\033[34m������������������������������\033[0m\033[33m ��\t\t\t\t\t     ��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t  �� \t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t" << n << "�ŵ��Թ������޸�����1\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t" << n << "�ŵ��Թ���δ�޸�����0\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t  �� \t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		iiiii();
	}
	else if (a == '1')
	{
		system("cls");/*��տ���̨����*/
		fffff(n);
		iiiii();
	}
	else if (a == '0')
	{
		system("cls");/*��տ���̨����*/
		ddddd();
	}
}
/*����Աȷ���������ϱ�ǵĺ����ֽ���*/


/*����Աȡ�����ϵ��Ա��ѡ�����ָ���*/
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
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t      ��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m�� ʵ���ҵ���״̬�������*���˵��Ա��Ϊ���ϣ���\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t      ��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 1" << a1 << "���� 2" << a2 << "���� 3" << a3 << "���� 4" << a4 << "���� 5" << a5 << "���� 6" << a6 << "���� 7" << a7 << "���� 8" << a8 << "���� 9" << a9 << "����10" << a10 << "����11" << a11 << "����12" << a12 << "����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����13" << a13 << "����14" << a14 << "����15" << a15 << "����16" << a16 << "����17" << a17 << "����18" << a18 << "����19" << a19 << "����20" << a20 << "����21" << a21 << "����22" << a22 << "����23" << a23 << "����24" << a24 << "����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����25" << a25 << "����26" << a26 << "����27" << a27 << "����28" << a28 << "����29" << a29 << "����30" << a30 << "����31" << a31 << "����32" << a32 << "����33" << a33 << "����34" << a34 << "����35" << a35 << "����36" << a36 << "����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
				system("cls");/*��տ���̨����*/
				kkkkk(b);
			}
			else
			{

			}
		}
	}
}
/*����Աȡ�����ϵ��Ա��ѡ�����ָ���*/


/*����Աѡ���ǻ���ȡ����ǹ��ϵ��Եĺ����ֽ���*/
void ddddd()
{
	hhhhh();
	string h = ffff();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\033[33m  ����������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\033[33m  �� " << h << "����Ա������е���״̬ά����\t��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\033[33m  ����������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t��\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t��ǹ��ϵ��ԡ���1\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\tȡ�����ϵ��Ա�ǡ���0\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t��\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
		jjjj();
	}
	else if (a == '1')
	{
		system("cls");/*��տ���̨����*/
		aaaaa();
	}
	else if (a == '0')
	{
		system("cls");/*��տ���̨����*/
		iiiii();
	}
}
/*����Աѡ���ǻ���ȡ����ǹ��ϵ��Եĺ����ֽ���*/


/*ѧ��������Ϻ���*/
void xxxx(int n)
{
	int aa, bb, cc, dd, ee, ff, gg, hh, ii, jj,good1;
	int kk, ll, mm, nn, oo, pp, qq, rr, ss, tt,good2;
	string u = to_string(n);
	string h = Computer() + u;
	string g = "D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\" + h + ".txt";
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
	setlocale(LC_CTYPE, "chs");//�趨
	a2 << n << " " << computer[n].showEight() << " " << computer[n].showNine() << " " << computer[n].showTen() << " " << computer[n].showeEleven() << " " << computer[n].showTwelve() << " " << computer[n].showThirteen() << " " << computer[n].showFourteen() << " " << computer[n].showFifteen() << " " << computer[n].showSixteen() << " " << computer[n].showGood();//����д��
	setlocale(LC_CTYPE, old_locale);
	free(old_locale);//��ԭ�����趨
	a2.close();
}
/*ѧ��������Ϻ���*/


/*ʵ����ѧ��������Թ���ȷ�ϵĺ����ֽ���*/
void wwww(int n)
{
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[33m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[33m��\t��ȷ���Ƿ�Ҫ����" << n << "�ŵ���Ϊ���ϵ��ԣ�\t��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[33m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\tȷ�ϱ������1\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\tȡ���������0\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
		system("cls");/*��տ���̨����*/
		mmmm();
	}
}
/*ʵ����ѧ��������Թ���ȷ�ϵĺ����ֽ���*/


/*ѧ��ѡ����ϵ��Ա���ĺ����ֽ���*/
void vvvv()
{
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t     ��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m�� ʵ���ҵ��Թ��ϱ������ѡ����ԣ�������10����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m��\t\t\t\t\t     ��\033[31m\t��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 1 ���� 2 ���� 3 ���� 4 ���� 5 ���� 6 ���� 7 ���� 8 ���� 9 ���� 10���� 11���� 12����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 13���� 14���� 15���� 16���� 17���� 18���� 19���� 20���� 21���� 22���� 23���� 24����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m���� 25���� 26���� 27���� 28���� 29���� 30���� 31���� 32���� 33���� 34���� 35���� 36����\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m����������������������������������������������������������������������������������������������������������������������������\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	a = _getch();
	if (a == '\r')
	{
		system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
				system("cls");/*��տ���̨����*/
				wwww(b);
			}
			else
			{

			}
		}
	}
}
/*ѧ��ѡ����ϵ��Ա���ĺ����ֽ���*/



/*ѧ���˺Ų�������ָ���*/
void mmmm()
{
	string h = dddd();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t \033[32m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t \033[32m��\t��ӭ" <<h<< "ͬѧ��¼����ʵ����ԤԼϵͳ��\t ��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t \033[32m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t     ��\t\t\t\t  ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ��ѯʵ����ԤԼ�������1\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ԤԼʱ�����2\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ȡ��ԤԼ����3\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ������Թ��ϡ���4\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ע����¼����0\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t     ��\t\t\t\t  ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '0')
	{
		kkkk();
	}
	else if (m == '1')
	{
		system("cls");/*��տ���̨����*/
		nnnn();
	}
	else if (m == '2')
	{
		system("cls");/*��տ���̨����*/
		qqqq();
	}
	else if (m == '3')
	{
		system("cls");/*��տ���̨����*/
		tttt();
	}
	else if (m == '4')
	{
		system("cls");/*��տ���̨����*/
		vvvv();
	}
}
/*ѧ���˺Ų�������ָ���*/


/*ѡ���Ƿ�ע����ǰ��¼�Ĺ���Ա�˺ŵĺ����ָ���*/
void iiii()
{
	char a;
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��������������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��  ��ȷ���Ƿ�ע����ǰ��¼�Ĺ���Ա�˺ţ���\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t   \033[33m��������������������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\tȷ��ע������1\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\tȡ��ע������0\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t    ��\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	a = _getch();
	if (a == '1')
	{
		hhhh();
		aa();
	}
}
/*ѡ���Ƿ�ע����ǰ��¼�Ĺ���Ա�˺ŵĺ����ָ���*/


/*���㵱ǰʵ����������*/
int gggggg()
{
	int nn=0 ;
	string hour = getTime(),mmm;
	ifstream a1;
	a1.open("D:\\ʵ����ԤԼϵͳ\\����״̬��Ϣ\\ԤԼ.txt", ios::app);
	string h, i, o, n, Stime;
	string h1, i1, o1, n1, Stime1;
	while (a1 >> h >> i >> o >> n >> Stime)
	{
		h1 = h;
		i1 = i;
		o1 = o;
		n1 = n;
		Stime1 = Stime;
		if (Stime == "8:00��9:00")
		{
			mmm = "8";
		}
		else if (Stime == "9:00��10:00")
		{
			mmm = "9";
		}
		else if (Stime == "10:00��11:00")
		{
			mmm = "10";
		}
		else if (Stime == "11:00��12:00")
		{
			mmm = "11";
		}
		else if (Stime == "12:00��13:00")
		{
			mmm = "12";
		}
		else if (Stime == "13:00��14:00")
		{
			mmm = "13";
		}
		else if (Stime == "14:00��15:00")
		{
			mmm = "14";
		}
		else if (Stime == "15:00��16:00")
		{
			mmm = "15";
		}
		else if (Stime == "16:00��17:00")
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
/*���㵱ǰʵ����������*/



/*����Ա��ѯʵ����ʹ���������*/
void ffffff()
{
	string h = ffff();
	int n = gggggg();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\033[33m  ����������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\033[33m  �� " << h<< "����Ա����ǰʵ����ʹ�������\t��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\033[33m  ����������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t��\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t��ǰʵ��������" << n << "��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t��\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '\r')
	{
		jjjj();
	}
}
/*����Ա��ѯʵ����ʹ���������*/



void hhhhhhh()
{
	string h = ffff();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\033[33m  ����������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\033[33m  �� " << h << "����Ա����ǰ��δʵ�ֿ��ù���\t��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\033[33m  ����������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '0')
	{
		jjjj();
	}
}


/*����Ա�˺Ų�������ָ���*/
void jjjj()
{
	string h = ffff();
	{
		system("cls");/*��տ���̨����*/
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[32m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[32m��  ��ӭ"<<h<<"����Ա��¼����ʵ����ԤԼϵͳ��\t��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[32m��������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t     ��\t\t\t\t     ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ��ѯʵ����ʹ���������1\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ά������״̬����2\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ��ѯѧ����Ϣ����3\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ͳ��һ��ʵ����ʹ���������4\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t\t ע����¼����0\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m   \t     ��\t\t\t\t     ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char m;
	m = _getch();
	if (m == '0')
	{
		iiii();
	}
	else if (m == '2')
	{
		system("cls");/*��տ���̨����*/
		ddddd();
	}
	else if (m == '1')
	{
		system("cls");/*��տ���̨����*/
		ffffff();
	}
	else if (m == '3')
	{
		system("cls");/*��տ���̨����*/
		hhhhhhh();
	}
	else if (m == '4')
	{
		system("cls");/*��տ���̨����*/
		hhhhhhh();
	}
}
/*����Ա�˺Ų�������ָ���*/


static int m4 = 0;
static int m5 = 0;
static int m6 = 0;
/*����Ա�˺ŵ�¼�ɹ���ϲ����ָ���*/
int ppp()
{
	if ((m4 == m5 && m5 == m6) && (m4 != 0 && m5 != 0 && m6 != 0))
	{
		system("cls");/*��տ���̨����*/
		//ѧ���˺�ע��ɹ���ϲ����
		{
			SetFont(17);
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\033[34m������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\033[34m��   ��ϲ�㣡����Ա�˺ŵ�¼�ɹ�����\033[0m\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\033[34m������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t��\t\t\t\t  ��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t  ע�����س��������Ա�˺Ų������� \t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t��\t\t\t\t  ��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		}

		char ou;
		ou = _getch();
		if (ou == '\r')
		{
			system("cls");/*��տ���̨����*/
			jjjj();
		}
	}
	return 1;
}
/*����Ա�˺�ע��ɹ���ϲ����ָ���*/


static int m1 = 0;
static int m2 = 0;
static int m3 = 0;
/*ѧ���˺ŵ�¼�ɹ���ϲ����ָ���*/
int qqq()
{
	if ((m1 == m2 && m2 == m3) && (m1 != 0 && m2 != 0 && m3 != 0))
	{
		system("cls");/*��տ���̨����*/
		//ѧ���˺�ע��ɹ���ϲ����
		{
			SetFont(17);
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\033[34m������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\033[34m��   ��ϲ�㣡ѧ���˺ŵ�¼�ɹ���  ��\033[0m\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\033[34m������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t��\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t  ע�����س�����ѧ���˺Ų������� \t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m        \t��\t\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		}

		char ou;
		ou = _getch();
		if (ou == '\r')
		{
			system("cls");/*��տ���̨����*/
			mmmm();
		}
	}
	return 1;
}
/*ѧ���˺�ע��ɹ���ϲ����ָ���*/


/*ѧ����¼������������Ӻ����ָ���*/
int ddd(string h)
{
	ifstream Student;
	string i;
	int q;
	int r;
	Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::out);
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
/*ѧ����¼������������Ӻ����ָ���*/


/*ѧ����¼�����������ָ���*/
void hh()
{
	cccc();
	while (1)
	{
		//ѧ����¼�����������
		{
	system("cls");/*��տ���̨����*/
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������5���ַ��� ��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t ������ѧ������\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			dd();
		}
		if (a[0] == '\n')
		{
		    system("cls");/*��տ���̨����*/
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
		system("cls");/*��տ���̨����*/
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
	Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::out);
	while (1)
	{
		if (y == 1)
		{	
			Student.close();
			m1++;
			system("cls");/*��տ���̨����*/
			aaaa(h);
			qqq();
			dd();
			break;
		}
		else if (y == 0)
		{
			char wa;
			Student.close();
			cout << "����������������ڣ�����������!"; 
			wa = _getch();
			if (wa == '\r')
			{
				system("cls");/*��տ���̨����*/
				hh();
			}
		}
	}
	}
    }
}
/*ѧ����¼�����������ָ���*/


/*ѧ����¼������������Ӻ����ָ���*/
int ccc(int sum)
{
	ifstream Student;
	string i;
	int q;
	int r;
	Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::out);
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
/*ѧ����¼������������Ӻ����ָ���*/



/*ѧ����¼�����������ָ���*/
char ii()
{	
	while (1)
	{
		//ѧ����¼�����������
		{
			SetFont(17);
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������10�������ک�\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t ������ѧ������\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
				system("cls");/*��տ���̨����*/
				dd();
			}
			if (a[0] == '\n')
			{
				system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
			Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::out);
			while (1)
			{
				if (y == 1)
				{
					Student.close();
					m2++;
					system("cls");/*��տ���̨����*/
					bbbb(sum);
					qqq();
					dd();
					break;
				}
				else if (y == 0)
				{
					char wa;
					Student.close();
					cout << "����������벻���ڣ�����������!"; 
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						ii();
					}
				}
			}
		}
	}
}
/*ѧ����¼�����������ָ���*/


/*ѧ����¼ѧ����������Ӻ����ָ���*/
int sss(int sum)
{
	ifstream Student;
	string i;
	int q;
	int r;
	Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::out);
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
/*ѧ����¼ѧ����������Ӻ����ָ���*/



/*ѧ����¼ѧ���������ָ���*/
char jj()
{		
	while (1)
	{
		//ѧ����¼ѧ���������
		{
			SetFont(17);
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺ѧ����10�������ک�\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t ������ѧ��ѧ��\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
				system("cls");/*��տ���̨����*/
				dd();
			}
			if (a[0] == '\n')
			{
				system("cls");/*��տ���̨����*/
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
			system("cls");/*��տ���̨����*/
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
					system("cls");/*��տ���̨����*/
					bbbb(sum);
					qqq();
					dd();
					break;
				}
				else if (y == 0)
				{
					char wa;
					cout << "�������ѧ�Ų����ڣ�����������!"; 
					Student.close();
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						jj();
					}
				}
			}
		}
	}
}
/*ѧ����¼ѧ���������ָ���*/


/*����Ա��¼������������Ӻ����ָ���*/
int eee(string h)
{
	ifstream Administrator;
	string i;
	int q;
	int r;
	Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::out);
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
/*����Ա��¼������������Ӻ����ָ���*/


/*����Ա��¼�����������ָ���*/
char kk()
{

	char a;
	while (1)
	{
	//����Ա��¼�����������
		{
			system("cls");/*��տ���̨����*/
			SetFont(17);
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������5���ַ��� ��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t ���������Ա����\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			ee();
		}
		if (a[0] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		system("cls");/*��տ���̨����*/
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
		Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::out);
		while (1)
		{
			if (y == 1)
			{
				Administrator.close();
				m4++;
				system("cls");/*��տ���̨����*/
				eeee(h);
				ppp();
				ee();
				break;
			}
			else if (y == 0)
			{
				char wa;
				Administrator.close();
				cout << "����������������ڣ�����������!";
				wa = _getch();
				if (wa == '\r')
				{
					system("cls");/*��տ���̨����*/
					kk();
				}
			}
		}
	}

	}
}
/*����Ա��¼�����������ָ���*/


/*����Ա��¼������������Ӻ����ָ���*/
int fff(int sum)
{
	ifstream Administrator;
	string i;
	int q;
	int r;
	Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::out);
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
/*����Ա��¼������������Ӻ����ָ���*/


/*����Ա��¼�����������ָ���*/
char ll()
{


	char a;	
	while (1)
	{
	//����Ա��¼�����������
		{
			SetFont(17);
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������10�������ک�\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t ���������Ա����\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			ee();
		}
		if (a[0] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		system("cls");/*��տ���̨����*/
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
		Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::out);
		while (1)
		{
			if (y == 1)
			{
				Administrator.close();
				m5++;
				system("cls");/*��տ���̨����*/
				gggg(sum);
				ppp();
				ee();
				break;
			}
			else if (y == 0)
			{
				char wa;
				Administrator.close();
				cout << "����������벻���ڣ�����������!";
				wa = _getch();
				if (wa == '\r')
				{
					system("cls");/*��տ���̨����*/
					ll();
				}
			}
		}
	}

	}
}
/*����Ա��¼�����������ָ���*/


/*����Ա��¼������������Ӻ����ָ���*/
int ggg(int sum)
{
	ifstream Administrator;
	string i;
	int q;
	int r;
	Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::out);
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
/*����Ա��¼������������Ӻ����ָ���*/


/*����Ա��¼�����������ָ���*/
char nn()
{


	char a;	
	while (1)
	{
	//����Ա��¼�����������
		{
			SetFont(17);
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺ѧ����10�������ک�\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t ���������Ա����\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
			cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			ee();
		}
		if (a[0] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		system("cls");/*��տ���̨����*/
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
				system("cls");/*��տ���̨����*/
				gggg(sum);
				ppp();
				ee();
				break;
			}
			else if (y == 0)
			{
				char wa;
				cout << "������Ĺ��Ų����ڣ�����������!";
				Administrator.close();
				wa = _getch();
				if (wa == '\r')
				{
					system("cls");/*��տ���̨����*/
					nn();
				}
			}
		}
	}

	}
}
/*����Ա��¼�����������ָ���*/


/*ѧ���˺�ע��ɹ���ϲ����ָ���*/
static  int n4 = 0, n5 = 0, n6 = 0;
int mmm()
{
	if ((n4 == n5 && n5 == n6) && (n4 != 0 && n5 != 0 && n6 != 0))
	{
		Snumberint();
		system("cls");/*��տ���̨����*/
		//ѧ���˺�ע��ɹ���ϲ����
		{
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[34m������������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[34m�� ��ϲ�㣡ѧ���˺�ע��ɹ����뷵�ص�¼�����¼��  ��\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[34m������������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t��\t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t    ע�����س����ص�¼����\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t    ע�����ո񷵻�ѧ��ע�����\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t��\t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		}

		char ou;
		ou = _getch();
		if (ou == ' ')
		{
			system("cls");/*��տ���̨����*/
			ff();
		}
		else if (ou == '\r')
		{
			system("cls");/*��տ���̨����*/
			aa();
		}
	}
	return 1;
}
/*ѧ���˺�ע��ɹ���ϲ����ָ���*/


/*ѧ��ע�������������ָ���*/
char mm(student s1)
{
	//ѧ��ע�������������
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������5���ַ��� ��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t ������ѧ������\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		Student << s1.showname() << " ";//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		Student.close();
		n4++;
		mmm();
		ff();
	}
}
/*ѧ��ע�������������ָ���*/


/*ѧ��ע�������������ָ���*/
char oo(student s1)
{
	//ѧ��ע�������������
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������10�������� ��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t ������ѧ������\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		Student << s1.showpassword() << " ";//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		Student.close();
		n5++;
		mmm();
		ff();
	}
}
/*ѧ��ע�������������ָ���*/


/*ѧ��ע��ѧ���������ָ���*/
char pp(student s1)
{
	//ѧ��ע��ѧ���������
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺ѧ����10�������� ��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t ������ѧ��ѧ��\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		Student.open("D:\\ʵ����ԤԼϵͳ\\Student.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		Student << s1.showID() <<endl;//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		Student.close();
		n6++;
		mmm();
		ff();
	}
}
/*ѧ��ע��ѧ���������ָ���*/

/*����Ա�˺�ע��ɹ���ϲ����ָ���*/
static  int n1 = 0, n2 = 0, n3 = 0;
int nnn()
{
	if ((n1 == n2 && n2 == n3) && (n1 != 0 && n2 != 0 && n3 != 0))
	{
		Anumberint();
		system("cls");/*��տ���̨����*/
		//����Ա�˺�ע��ɹ���ϲ����
		{
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[34m������������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[34m�� ��ϲ�㣡����Ա�˺�ע��ɹ����뷵�ص�¼�����¼����\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\033[34m������������������������������������������������������������������������������������������������������\033[0m\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t��\t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t    ע�����س����ص�¼����\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t    ע�����ո񷵻ع���Աע�����\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m     \t��\t\t\t\t ��\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		}

		char ou;
	ou = _getch();
	if (ou == ' ')
	{
		system("cls");/*��տ���̨����*/
		gg();
	}
	else if (ou == '\r')
	{
		system("cls");/*��տ���̨����*/
		aa();
	}
	}
	return 1;
}
/*����Ա�˺�ע��ɹ���ϲ����ָ���*/


/*����Աע�������������ָ���*/
char qq(student s1)
{
	//����Աע�������������
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������5���ַ��� ��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t ���������Ա����\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		Administrator << s1.showname() << " ";//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		Administrator.close();
		n1++;
		nnn();
		gg();
	}
}
/*����Աע�������������ָ���*/


/*����Աע�������������ָ���*/
char rr(student s1)
{
	//����Աע�������������
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������10�������ک�\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t ���������Ա����\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		Administrator << s1.showpassword() << " ";//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		Administrator.close();
		n2++;
		nnn();
		gg();
	}
}
/*����Աע�������������ָ���*/


/*����Աע�Ṥ���������ָ���*/
char ss(student s1)
{
	//����Աע�Ṥ���������
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����س���\033[0m\t�� ע�⣺������10�������ک�\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t��\t\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t ���������Ա����\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t��\t\t\t\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
			system("cls");/*��տ���̨����*/
			break;
		}
		else if (a[n] != '\n')
		{
			n++;
		}
		if (a[n] == '\n')
		{
			system("cls");/*��տ���̨����*/
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
		Administrator.open("D:\\ʵ����ԤԼϵͳ\\Administrator.txt", ios::app);
		char* old_locale = _strdup(setlocale(LC_CTYPE, NULL));
		setlocale(LC_CTYPE, "chs");//�趨
		Administrator << s1.showID() << " " << endl;//����д��
		setlocale(LC_CTYPE, old_locale);
		free(old_locale);//��ԭ�����趨
		Administrator.close();
		n3++;
		nnn();
		gg();
	}
}
/*����Աע�Ṥ���������ָ���*/



/*ѧ����¼����ָ���*/
char dd()
{
	static int d = 0, e = 0, f = 0;
	char a;

	//ѧ����¼����
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����ո�\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  ������������1\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  �����������2\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  ����ѧ�š���3\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}

	student s1;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2' || a == '3')
		{
			if (a == ' ')
			{
				system("cls");/*��տ���̨����*/
				bb();
			}
			else if (a == '1')
			{
				if ((m1 == (m2 + 1) && m1 == (m3 + 1)) || (m1 == m2 && m1 == (m3 + 1)) || (m1 == (m2 + 1) && m1 == m3))
				{
					cout << "���Ѿ���������ˣ����������������ѧ�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						dd();
					}
				}
				else 
				{
					system("cls");/*��տ���̨����*/
					hh();
				}				
			}
			else if (a == '2')
			{
				if ((m2 == (m1 + 1) && m2 == (m3 + 1)) || (m2 == m1 && m2 == (m3 + 1)) || (m2 == (m1 + 1) && m2 == m3) )
				{
					cout << "���Ѿ���������ˣ����������������ѧ�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						dd();
					}
				}
				else
				{
					system("cls");/*��տ���̨����*/
					ii();
				}
			}
			else if (a == '3')
			{
				if ((m3 == (m1 + 1) && m3 == (m2 + 1)) || (m3 == m1 && m3 == (m2 + 1)) || (m3 == (m1 + 1) && m3 == m2) )
				{					
					cout << "���Ѿ����ѧ���ˣ�������������������룡�����س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						dd();
					}

				}
				else
				{
					system("cls");/*��տ���̨����*/
					jj();
				}
			}
		}
	}
}
/*ѧ����¼����ָ���*/


/*����Ա��¼����ָ���*/
char ee()
{
	//����Ա��¼����
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����ո�\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  ������������1\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  �����������2\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  ���빤�š���3\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}

	char a;	
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2' || a == '3')
		{
			if (a == ' ')
			{
				system("cls");/*��տ���̨����*/
				bb();
			}
			else if (a == '1')
			{
				if ((m4 == (m5 + 1) && m4 == (m6 + 1)) || (m4 == m5 && m4 == (m6 + 1)) || (m4 == (m5 + 1) && m4 == m6))
				{
					cout << "���Ѿ���������ˣ���������������빤�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						ee();
					}
				}
				else
				{
					system("cls");/*��տ���̨����*/
					kk();
				}
			}
			else if (a == '2')
			{
				if ((m5 == (m4 + 1) && m5 == (m6 + 1)) || (m5 == m4 && m5 == (m6 + 1)) || (m5 == (m4 + 1) && m5 == m6))
				{
					cout << "���Ѿ���������ˣ���������������빤�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						ee();
					}
				}
				else
				{
					system("cls");/*��տ���̨����*/
					ll();
				}
			}
			else if (a == '3')
			{
				if ((m6 == (m4 + 1) && m6 == (m5 + 1)) || (m6 == m4 && m6 == (m5 + 1)) || (m6 == (m4 + 1) && m6 == m5))
				{
					cout << "���Ѿ���������ˣ�������������������룡�����س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						ee();
					}

				}
				else
				{
					system("cls");/*��տ���̨����*/
					nn();
				}
			}
		}
	}
}
/*����Ա��¼����ָ���*/


/*ѧ��ע�����ָ���*/
char ff()
{


	static int d = 0,e=0,f=0;
	char a;
	//ѧ��ע�����
	{
		SetFont(17);
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m�� ���ء����ո�\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t��\t  ������������1\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t��\t  �����������2\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t��\t  ����ѧ�š���3\t\t��\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
		cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
					cout << "���Ѿ���������ˣ����������������ѧ�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						ff();
					}
				}
				system("cls");/*��տ���̨����*/
				d++;
				mm(s1);
            }
			else if (a == '2')
			{
				if ((e==(d+1)&& e == (f + 1))|| (e == d && e == (f + 1))|| (e == (d + 1) && e == f))
				{
					cout << "���Ѿ���������ˣ����������������ѧ�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						ff();
					}
				}
				system("cls");/*��տ���̨����*/
				e++;
				oo(s1);
			}
			else if (a == '3')
			{
				if ((f == (d + 1) && f == e ) || (f == d && f == (e + 1)) || (f == (d + 1) && f == e)||((f==e&&f==d)&&(f!=0)))
				{
					cout << "���Ѿ����ѧ���ˣ�������������������룡�����س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						ff();
					}
				}
				system("cls");/*��տ���̨����*/
				f++;
				pp(s1);
			}
			else if (a == ' ')
			{
				system("cls");/*��տ���̨����*/
				bb();
			}
		}
	}
}
/*ѧ��ע�����ָ���*/


/*����Աע�����ָ���*/
char gg()
{
	static int db = 0, eb = 0, fb = 0;
	char a;
	//����Աע�����
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����ո�\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  ������������1\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  �����������2\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t  ���빤�š���3\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
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
					cout << "���Ѿ���������ˣ���������������빤�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						gg();
					}
				}
				system("cls");/*��տ���̨����*/
				db++;
				qq(s1);
			}
			else if (a == '2')
			{
				if ((eb == (db + 1) && eb == (fb + 1)) || (eb == db && eb == (fb + 1)) || (eb == (db + 1) && eb == fb))
				{
					cout << "���Ѿ���������ˣ���������������빤�ţ������س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						gg();
					}
				}
				system("cls");/*��տ���̨����*/
				eb++;
				rr(s1);
			}
			else if (a == '3')
			{
				if ((fb == (db + 1) && fb == eb) || (fb == db && fb == (eb + 1)) || (fb == (db + 1) && fb == eb) || ((fb == eb && fb == db) && (fb != 0)))
				{
					cout << "���Ѿ���������ˣ�������������������룡�����س�����ѡ��";
					char wa;
					wa = _getch();
					if (wa == '\r')
					{
						system("cls");/*��տ���̨����*/
						gg();
					}
				}
				system("cls");/*��տ���̨����*/
				fb++;
				ss(s1);
			}
			else if (a == ' ')
			{
				system("cls");/*��տ���̨����*/
				bb();
			}
		}
	}
}
/*����Ա��¼����ָ���*/


/*��¼������Ա����ָ���*/
char bb()
{
	//��¼������Ա����
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����ո�\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t    ѧ������1\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t    ����Ա����2\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}

	char a;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2')
		{
			if (a == '1')
			{
				system("cls");/*��տ���̨����*/
				dd();
			}
			else if (a == '2')
			{
				system("cls");/*��տ���̨����*/
				ee();
			}
			else if (a == ' ')
			{
				system("cls");/*��տ���̨����*/
				aa();
			}
		}
	}


	
}
/*��¼������Ա����ָ���*/


/*ע��������Ա����ָ���*/
char cc()
{
	//ע��������Ա����
	{
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m�� ���ء����ո�\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m \033[34m������������������������������\033[0m\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t    ѧ������1\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t��\t    ����Ա����2\t\t��\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t������������������������������������������������������������������\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t\t\t\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	
	char a;
	while (1)
	{
		a = _getch();
		if (a == ' ' || a == '1' || a == '2')
		{
			if (a == '1')
			{
				system("cls");/*��տ���̨����*/
				ff();
			}
			else if (a == '2')
			{
				system("cls");/*��տ���̨����*/
				gg();
			}
			else if (a == ' ')
			{
				system("cls");/*��տ���̨����*/
				aa();
			}
		}
	}



}
/*ע��������Ա����ָ���*/


/*ԤԼϵͳ�ܽ���ָ���*/
void aa()
{
	//ԤԼϵͳ�ܽ���
	{
	system("cls");/*��տ���̨����*/
	SetFont(17);
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\033[33m����������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\033[33m��\033[0m\t\t\t\t  \033[33m��\033[0m\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\033[33m��\033[0m\t\033[33m����ʵ����ԤԼϵͳ\033[0m\t  \033[33m��\033[0m\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\033[33m��\033[0m\t\t\t\t  \033[33m��\033[0m\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\033[33m����������������������������������������������������������������������\033[0m\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t����������������������������������\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t��   ��¼����1\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t����������������������������������\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t����������������������������������\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t��   ע�����2\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t����������������������������������\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t����������������������������������\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t��   �˳�����0\t��\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m��\033[0m\t\t\t����������������������������������\t\t\t\033[31m��\033[0m" << endl;
	cout << "\033[31m����������������������������������������������������������������������������������������������������������������������������������\033[0m" << endl;
	}
	char a;
	while (1)
	{
	a = _getch();
	if (a == '1')
	{
		system("cls");/*��տ���̨����*/
		bb();
	}
	else if (a == '2')
	{
		system("cls");/*��տ���̨����*/
		cc();
	}
	else if (a == '0')
	{
		system("cls");/*��տ���̨����*/
		exit(0);
	}
	}
}
/*ԤԼϵͳ�ܽ���ָ���*/



/*�������ָ���*/
int main()
{
	FileCreate(); /*��������txt�ļ��еĺ���*/
	oooo();
	SAnumber(); /*�ж�ѧ�������Ա����ͳ��txt�ļ��Ƿ���ڵĺ���*/
	aa();/*ԤԼϵͳ�ܽ��溯��*/
	return 0;
}
/*�������ָ���*/