#pragma once
#include "afxdialogex.h"


// Che_Xiao_Ke_Cheng 对话框

class Che_Xiao_Ke_Cheng : public CDialogEx
{
	DECLARE_DYNAMIC(Che_Xiao_Ke_Cheng)

public:
	Che_Xiao_Ke_Cheng(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Che_Xiao_Ke_Cheng();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Che_Xiao_Ke_Cheng };
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
	CFont cfont2;
	CFont cfont3;
public:
	CListCtrl Che_Xiao_Biao_Ge;
	afx_msg void OnBnClickedCancel2();
	CComboBox Ke_Cheng_Ming_Cheng;
	CComboBox Ren_Ke_Jiao_Shi;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnCbnSelchangeCombo3();
};
