#pragma once
#include "afxdialogex.h"


// Cha_Kan_Ke_Cheng_Ren_Shu 对话框

class Cha_Kan_Ke_Cheng_Ren_Shu : public CDialogEx
{
	DECLARE_DYNAMIC(Cha_Kan_Ke_Cheng_Ren_Shu)

public:
	Cha_Kan_Ke_Cheng_Ren_Shu(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Cha_Kan_Ke_Cheng_Ren_Shu();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Cha_Kan_Ke_Cheng_Ren_Shu };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl Ke_Cheng_Ren_Shu_Biao_Ge;
	virtual BOOL OnInitDialog();
private:
	CFont cfont;
	int CalcCount1(int n, char(*str)[10], CString name);
};
