
// 学生选课管理系统Dlg.h: 头文件
//

#pragma once


// C学生选课管理系统Dlg 对话框
class C学生选课管理系统Dlg : public CDialogEx
{
// 构造
public:
	C学生选课管理系统Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:

	CStatic m_picture1;
	CStatic m_static;
	CFont cfont;
public:
	afx_msg void OnStnClickedStatic1();	
	CFont m_Font;//在构造函数中要初始化
private:
	CStatic m_picture;

public:
	afx_msg void OnStnClickedStatic2();
};


