#pragma once
#include "afxdialogex.h"


// Fa_Bu_Ke_Cheng 对话框

class Fa_Bu_Ke_Cheng : public CDialogEx
{
	DECLARE_DYNAMIC(Fa_Bu_Ke_Cheng)

public:
	Fa_Bu_Ke_Cheng(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Fa_Bu_Ke_Cheng();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Fa_Bu_Ke_Cheng };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
private:
	CFont cfont;
	CFont cfont1;
	CFont cfont2;
	CFont cfont3;
	CFont cfont4;
	CFont cfont5;
	CFont cfont6;
	CFont cfont7;
	CFont cfont8;
	int CalcCount(int n, char(*str)[10]);
public:
	afx_msg void OnBnClickedOk();
};
