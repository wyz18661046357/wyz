#pragma once
#include "afxdialogex.h"


// Xue_Sheng_Cha_Kan_Ke_Cheng 对话框

class Xue_Sheng_Cha_Kan_Ke_Cheng : public CDialogEx
{
	DECLARE_DYNAMIC(Xue_Sheng_Cha_Kan_Ke_Cheng)

public:
	Xue_Sheng_Cha_Kan_Ke_Cheng(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Xue_Sheng_Cha_Kan_Ke_Cheng();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Cha_Kan_Ke_Cheng };
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
	CListCtrl Ke_Cheng_Biao_Ge;
};
