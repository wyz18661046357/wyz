#pragma once
#include "afxdialogex.h"


// Xue_Sheng_Wo_De_Yu_Yue 对话框

class Xue_Sheng_Wo_De_Yu_Yue : public CDialogEx
{
	DECLARE_DYNAMIC(Xue_Sheng_Wo_De_Yu_Yue)

public:
	Xue_Sheng_Wo_De_Yu_Yue(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Xue_Sheng_Wo_De_Yu_Yue();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Xue_Sheng_Wo_De_Yu_Yue };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
private:
	CFont cfont;
	CFont cfont1;
	CFont cfont2;
	int CalcCount(int n, char(*str)[10]);
public:
	virtual BOOL OnInitDialog();
	CListCtrl Yi_Yu_Xuan_Ke_Cheng_Biao_Ge;
};
