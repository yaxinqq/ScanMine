
// MFC_P4Dlg.h : 头文件
//

#pragma once

class CMFC_P4Mine
{
public:
	CMFC_P4Mine();
	CMFC_P4Mine(bool IsMine, int Column, int Line, int AroundMineCount, bool IsChecked, int ID);    // 自定义的构造函数

	// 常规的get和set方法
	bool GetIsMine(){return m_bIsMine;}
	int GetColumn(){return m_nColumn;}
	int GetLine(){return m_nLine;}
	int GetAroundMineCount(){return m_nAroundMineCount;}
	bool GetIsChecked(){return m_bIsChecked;}
	int GetID(){return m_nID;}
	bool GetIsInQueue(){return m_bIsInQueue;}

	void SetIsMine(bool IsMine){m_bIsMine = IsMine;}
	void SetColumn(int Column){m_nColumn = Column;}
	void SetLine(int Line){m_nLine = Line;}
	void SetAroundMineCount(int AroundMineCount){m_nAroundMineCount = AroundMineCount;}
	void SetIsChecked(bool IsChecked){m_bIsChecked = IsChecked;}
	void SetID(int ID){m_nID = ID;}
	void SetIsInQueue(bool IsInQueue){m_bIsInQueue = IsInQueue;}
private:
	bool m_bIsMine;                        // 是否为地雷
	int m_nColumn;                         // 所在列
	int m_nLine;                           // 所在行
	int m_nAroundMineCount;                // 周围的地雷个数
	bool m_bIsChecked;                     // 是否已被选中
	int m_nID;                             // 对应按钮控件的ID
	bool m_bIsInQueue;                     // 是否已在扫描队列中

};


// CMFC_P4Dlg 对话框
class CMFC_P4Dlg : public CDialogEx
{
// 构造
public:
	CMFC_P4Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MFC_P4_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();

	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();

	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();

	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton31();
	afx_msg void OnBnClickedButton32();

	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton42();

	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton47();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton52();

	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton54();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedButton59();
	afx_msg void OnBnClickedButton60();
	afx_msg void OnBnClickedButton61();
	afx_msg void OnBnClickedButton62();

	afx_msg void OnBnClickedButton63();
	afx_msg void OnBnClickedButton64();
	afx_msg void OnBnClickedButton65();
	afx_msg void OnBnClickedButton66();
	afx_msg void OnBnClickedButton67();
	afx_msg void OnBnClickedButton68();
	afx_msg void OnBnClickedButton69();
	afx_msg void OnBnClickedButton70();
	afx_msg void OnBnClickedButton71();
	afx_msg void OnBnClickedButton72();

	afx_msg void OnBnClickedButton73();
	afx_msg void OnBnClickedButton74();
	afx_msg void OnBnClickedButton75();
	afx_msg void OnBnClickedButton76();
	afx_msg void OnBnClickedButton77();
	afx_msg void OnBnClickedButton78();
	afx_msg void OnBnClickedButton79();
	afx_msg void OnBnClickedButton80();
	afx_msg void OnBnClickedButton81();
	afx_msg void OnBnClickedButton82();

	afx_msg void OnBnClickedButton83();
	afx_msg void OnBnClickedButton84();
	afx_msg void OnBnClickedButton85();
	afx_msg void OnBnClickedButton86();
	afx_msg void OnBnClickedButton87();
	afx_msg void OnBnClickedButton88();
	afx_msg void OnBnClickedButton89();
	afx_msg void OnBnClickedButton90();
	afx_msg void OnBnClickedButton91();
	afx_msg void OnBnClickedButton92();

	afx_msg void OnBnClickedButton93();
	afx_msg void OnBnClickedButton94();
	afx_msg void OnBnClickedButton95();
	afx_msg void OnBnClickedButton96();
	afx_msg void OnBnClickedButton97();
	afx_msg void OnBnClickedButton98();
	afx_msg void OnBnClickedButton99();
	afx_msg void OnBnClickedButton100();
	afx_msg void OnBnClickedButton101();
	afx_msg void OnBnClickedButton102();

	void scanMine();
	void scanMineAround(int nLine, int nColumn);

	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);

private:
	int m_nMineCount;
	int m_nCorrectCount;
	CArray<CMFC_P4Mine, CMFC_P4Mine> m_MineArray;
	CArray<CMFC_P4Mine, CMFC_P4Mine> m_MineArrayTmp;
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
