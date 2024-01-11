#pragma once
#include "afxdialogex.h"


// Jiao_Shi_Cao_Zuo 对话框

class Jiao_Shi_Cao_Zuo : public CDialogEx
{
	DECLARE_DYNAMIC(Jiao_Shi_Cao_Zuo)

public:
	Jiao_Shi_Cao_Zuo(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~Jiao_Shi_Cao_Zuo();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Jiao_Shi_Cao_Zuo };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	HICON m_hIcon;
	DECLARE_MESSAGE_MAP()
private:
	CFont cfont;
	CFont cfont1;
	CFont cfont2;
	CFont cfont3;
	CFont cfont4;
	CFont cfont5;
	CFont cfont6;
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton2();
};
