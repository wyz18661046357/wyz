#pragma once
#include "afxdialogex.h"


// Xue_Sheng_Yu_Xuan_Ke_Cheng 对话框

class Xue_Sheng_Yu_Xuan_Ke_Cheng : public CDialogEx
{
	DECLARE_DYNAMIC(Xue_Sheng_Yu_Xuan_Ke_Cheng)

public:
	Xue_Sheng_Yu_Xuan_Ke_Cheng(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Xue_Sheng_Yu_Xuan_Ke_Cheng();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Xue_Sheng_Yu_Xuan_Ke_Cheng };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
private:
	int CalcCount(int n, char(*str)[10]);
	CFont cfont;
	CFont cfont1;
public:
	virtual BOOL OnInitDialog();
	CListCtrl Ke_Cheng_Biao_Ge;
	afx_msg void OnBnClickedCancel2();
};
