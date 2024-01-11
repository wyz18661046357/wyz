#pragma once
#include "afxdialogex.h"


// ZhuCe 对话框

class ZhuCe : public CDialogEx
{
	DECLARE_DYNAMIC(ZhuCe)

public:
	ZhuCe(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ZhuCe();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ZhuCe };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON	m_hIcon;
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
	int CalcCount(int n, char(*str)[10]);
public:
	afx_msg void OnBnClickedOk();

};
