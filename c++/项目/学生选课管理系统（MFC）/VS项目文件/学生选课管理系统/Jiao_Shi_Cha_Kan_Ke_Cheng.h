#pragma once
#include "afxdialogex.h"


// Jiao_Shi_Cha_Kan_Ke_Cheng 对话框

class Jiao_Shi_Cha_Kan_Ke_Cheng : public CDialogEx
{
	DECLARE_DYNAMIC(Jiao_Shi_Cha_Kan_Ke_Cheng)

public:
	Jiao_Shi_Cha_Kan_Ke_Cheng(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Jiao_Shi_Cha_Kan_Ke_Cheng();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Cha_Kan_Ke_Cheng1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
private:
	int CalcCount(int n, char(*str)[10]);
	CFont cfont;
	CFont cfont1;
public:
	CListCtrl Fa_Bu_De_Ke_Cheng;

};
