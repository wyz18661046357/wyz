#pragma once
#include "afxdialogex.h"


// DengLu_ZhuCe 对话框

class DengLu_ZhuCe : public CDialogEx
{
	DECLARE_DYNAMIC(DengLu_ZhuCe)

public:
	DengLu_ZhuCe(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~DengLu_ZhuCe();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DengLu_ZhuCe};
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON	m_hIcon;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();


private:
	CButton m_DengLu;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();

private:
	CComboBox m_XuanZe;
	CFont cfont1;
	CFont cfont2;
	CFont cfont3;
	CFont cfont4;
private:
	CButton m_ZhuCe;
public:
	afx_msg void OnBnClickedButton4();
	virtual BOOL OnInitDialog();
};
