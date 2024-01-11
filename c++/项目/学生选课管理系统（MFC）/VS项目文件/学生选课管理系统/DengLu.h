#pragma once
#include "afxdialogex.h"
#include"学生选课管理系统Dlg.h"

// DengLu 对话框

class DengLu : public CDialogEx
{
	DECLARE_DYNAMIC(DengLu)

public:
	DengLu(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~DengLu();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DengLu };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON	m_hIcon;
	DECLARE_MESSAGE_MAP()
private:
	CButton M_WenBen;
	CFont cfont;
	CFont cfont1;
	CFont cfont2;
	CFont cfont3;
	CFont cfont4;
	CFont cfont5;
	int CalcCount(int n, char(*str)[10]);
public:

	virtual BOOL OnInitDialog();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
