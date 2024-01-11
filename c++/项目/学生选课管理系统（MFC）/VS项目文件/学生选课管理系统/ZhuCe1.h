﻿#pragma once
#include "afxdialogex.h"


// ZhuCe1 对话框

class ZhuCe1 : public CDialogEx
{
	DECLARE_DYNAMIC(ZhuCe1)

public:
	ZhuCe1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ZhuCe1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ZhuCe1 };
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
	int CalcCount1(int n, char(*str)[10]);
public:
	afx_msg void OnBnClickedOk();
};
