
// MFC_P4Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_P4.h"
#include "MFC_P4Dlg.h"
#include "afxdialogex.h"

#include <cstdlib>
#include <cstdio>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define random(x) (rand()%x)

// CMFC_P4Dlg 对话框
CMFC_P4Mine::CMFC_P4Mine(bool IsMine, int Column, int Line, int AroundMineCount, bool IsChecked, int ID)
{
	m_bIsMine = IsMine;
	m_nColumn = Column;
	m_nLine = Line;
	m_nAroundMineCount = AroundMineCount;
	m_bIsChecked = IsChecked;
	m_nID = ID;
	m_bIsInQueue = false;
}

CMFC_P4Mine::CMFC_P4Mine()
{
	;
}



CMFC_P4Dlg::CMFC_P4Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFC_P4Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC_P4Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFC_P4Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC_P4Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFC_P4Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFC_P4Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFC_P4Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFC_P4Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFC_P4Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFC_P4Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFC_P4Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFC_P4Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFC_P4Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFC_P4Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFC_P4Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFC_P4Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFC_P4Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFC_P4Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFC_P4Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFC_P4Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFC_P4Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFC_P4Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CMFC_P4Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CMFC_P4Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CMFC_P4Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CMFC_P4Dlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CMFC_P4Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &CMFC_P4Dlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &CMFC_P4Dlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &CMFC_P4Dlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &CMFC_P4Dlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &CMFC_P4Dlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &CMFC_P4Dlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &CMFC_P4Dlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &CMFC_P4Dlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &CMFC_P4Dlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &CMFC_P4Dlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &CMFC_P4Dlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &CMFC_P4Dlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &CMFC_P4Dlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &CMFC_P4Dlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &CMFC_P4Dlg::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &CMFC_P4Dlg::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &CMFC_P4Dlg::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &CMFC_P4Dlg::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &CMFC_P4Dlg::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &CMFC_P4Dlg::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON45, &CMFC_P4Dlg::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &CMFC_P4Dlg::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &CMFC_P4Dlg::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &CMFC_P4Dlg::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &CMFC_P4Dlg::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &CMFC_P4Dlg::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON51, &CMFC_P4Dlg::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &CMFC_P4Dlg::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &CMFC_P4Dlg::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &CMFC_P4Dlg::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON55, &CMFC_P4Dlg::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &CMFC_P4Dlg::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON57, &CMFC_P4Dlg::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON58, &CMFC_P4Dlg::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_BUTTON59, &CMFC_P4Dlg::OnBnClickedButton59)
	ON_BN_CLICKED(IDC_BUTTON60, &CMFC_P4Dlg::OnBnClickedButton60)
	ON_BN_CLICKED(IDC_BUTTON61, &CMFC_P4Dlg::OnBnClickedButton61)
	ON_BN_CLICKED(IDC_BUTTON62, &CMFC_P4Dlg::OnBnClickedButton62)
	ON_BN_CLICKED(IDC_BUTTON63, &CMFC_P4Dlg::OnBnClickedButton63)
	ON_BN_CLICKED(IDC_BUTTON64, &CMFC_P4Dlg::OnBnClickedButton64)
	ON_BN_CLICKED(IDC_BUTTON65, &CMFC_P4Dlg::OnBnClickedButton65)
	ON_BN_CLICKED(IDC_BUTTON66, &CMFC_P4Dlg::OnBnClickedButton66)
	ON_BN_CLICKED(IDC_BUTTON67, &CMFC_P4Dlg::OnBnClickedButton67)
	ON_BN_CLICKED(IDC_BUTTON68, &CMFC_P4Dlg::OnBnClickedButton68)
	ON_BN_CLICKED(IDC_BUTTON69, &CMFC_P4Dlg::OnBnClickedButton69)
	ON_BN_CLICKED(IDC_BUTTON70, &CMFC_P4Dlg::OnBnClickedButton70)
	ON_BN_CLICKED(IDC_BUTTON71, &CMFC_P4Dlg::OnBnClickedButton71)
	ON_BN_CLICKED(IDC_BUTTON72, &CMFC_P4Dlg::OnBnClickedButton72)
	ON_BN_CLICKED(IDC_BUTTON73, &CMFC_P4Dlg::OnBnClickedButton73)
	ON_BN_CLICKED(IDC_BUTTON74, &CMFC_P4Dlg::OnBnClickedButton74)
	ON_BN_CLICKED(IDC_BUTTON75, &CMFC_P4Dlg::OnBnClickedButton75)
	ON_BN_CLICKED(IDC_BUTTON76, &CMFC_P4Dlg::OnBnClickedButton76)
	ON_BN_CLICKED(IDC_BUTTON77, &CMFC_P4Dlg::OnBnClickedButton77)
	ON_BN_CLICKED(IDC_BUTTON78, &CMFC_P4Dlg::OnBnClickedButton78)
	ON_BN_CLICKED(IDC_BUTTON79, &CMFC_P4Dlg::OnBnClickedButton79)
	ON_BN_CLICKED(IDC_BUTTON80, &CMFC_P4Dlg::OnBnClickedButton80)
	ON_BN_CLICKED(IDC_BUTTON81, &CMFC_P4Dlg::OnBnClickedButton81)
	ON_BN_CLICKED(IDC_BUTTON82, &CMFC_P4Dlg::OnBnClickedButton82)
	ON_BN_CLICKED(IDC_BUTTON83, &CMFC_P4Dlg::OnBnClickedButton83)
	ON_BN_CLICKED(IDC_BUTTON84, &CMFC_P4Dlg::OnBnClickedButton84)
	ON_BN_CLICKED(IDC_BUTTON85, &CMFC_P4Dlg::OnBnClickedButton85)
	ON_BN_CLICKED(IDC_BUTTON86, &CMFC_P4Dlg::OnBnClickedButton86)
	ON_BN_CLICKED(IDC_BUTTON87, &CMFC_P4Dlg::OnBnClickedButton87)
	ON_BN_CLICKED(IDC_BUTTON88, &CMFC_P4Dlg::OnBnClickedButton88)
	ON_BN_CLICKED(IDC_BUTTON89, &CMFC_P4Dlg::OnBnClickedButton89)
	ON_BN_CLICKED(IDC_BUTTON90, &CMFC_P4Dlg::OnBnClickedButton90)
	ON_BN_CLICKED(IDC_BUTTON91, &CMFC_P4Dlg::OnBnClickedButton91)
	ON_BN_CLICKED(IDC_BUTTON92, &CMFC_P4Dlg::OnBnClickedButton92)
	ON_BN_CLICKED(IDC_BUTTON93, &CMFC_P4Dlg::OnBnClickedButton93)
	ON_BN_CLICKED(IDC_BUTTON94, &CMFC_P4Dlg::OnBnClickedButton94)
	ON_BN_CLICKED(IDC_BUTTON95, &CMFC_P4Dlg::OnBnClickedButton95)
	ON_BN_CLICKED(IDC_BUTTON96, &CMFC_P4Dlg::OnBnClickedButton96)
	ON_BN_CLICKED(IDC_BUTTON97, &CMFC_P4Dlg::OnBnClickedButton97)
	ON_BN_CLICKED(IDC_BUTTON98, &CMFC_P4Dlg::OnBnClickedButton98)
	ON_BN_CLICKED(IDC_BUTTON99, &CMFC_P4Dlg::OnBnClickedButton99)
	ON_BN_CLICKED(IDC_BUTTON100, &CMFC_P4Dlg::OnBnClickedButton100)
	ON_BN_CLICKED(IDC_BUTTON101, &CMFC_P4Dlg::OnBnClickedButton101)
	ON_BN_CLICKED(IDC_BUTTON102, &CMFC_P4Dlg::OnBnClickedButton102)
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()


// CMFC_P4Dlg 消息处理程序

BOOL CMFC_P4Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	m_nMineCount = 10;
	m_nCorrectCount = 0;

	for(int i = 0; i < 10; ++i)
	{
		for(int j = 0; j < 10; ++j)
		{
			int ID = 1002 + 10 * i + j;
			CMFC_P4Mine Mine(false, j, i, 0, false, ID);
			m_MineArray.Add(Mine);
		}
	}

	for(int i = 0; i < m_nMineCount; ++i)
	{
		while(1)
		{
			int ran = random(100);
			if(ran < 0 || ran >= 100)
			{
				continue;
			}
			else
			{
				if(m_MineArray[ran].GetIsMine() == false)
				{
					m_MineArray[ran].SetIsMine(true);
					break;
				}
			}
		}
	}

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFC_P4Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFC_P4Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CMFC_P4Dlg::scanMine()
{	
	int nID;
	nID = GetFocus()->GetDlgCtrlID();

	CString sTmp;
	GetDlgItemText(nID, sTmp);
	if(sTmp.Compare(L"!") == 0 || sTmp.Compare(L"?") == 0)
	{
		return;
	}
	
	nID = nID - 1002;
	if(m_MineArray[nID].GetIsMine() == true)
	{
		CString sText = L"X";
		SetDlgItemText(nID + 1002, sText);

		for(int i = 0; i < 10; ++i)
		{
			for(int j = 0; j < 10; ++j)
			{
				if(m_MineArray[i*10+j].GetIsMine() == true)
				{
					CString sText = L"X";
					SetDlgItemText(m_MineArray[i*10+j].GetID(), sText);
					//GetDlgItem(m_MineArray[i*10+j].GetID())->EnableWindow(FALSE);
				}
				GetDlgItem(m_MineArray[i*10+j].GetID())->EnableWindow(FALSE);
			}
		}
		AfxMessageBox(L"你输了");
		return;
	}
	else
	{
		int nLine = nID / 10;
		int nColumn = nID % 10;
		m_MineArrayTmp.RemoveAll();

		/*for(int i = 0; i < 10; ++i)
		{
			for(int j = 0; j < 10; ++j)
			{
				m_MineArray[i*10+j].SetIsInQueue(false);
			}
		}*/
		m_MineArray[nLine*10+nColumn].SetIsInQueue(true);

		scanMineAround(nLine, nColumn);

		while(m_MineArrayTmp.IsEmpty() == FALSE)
		{
			//CMFC_P4Mine tmpMine = m_MineArrayTmp.GetAt(m_MineArrayTmp.GetSize() - 1);
			CMFC_P4Mine tmpMine = m_MineArrayTmp[0];
			//m_MineArrayTmp.RemoveAt(m_MineArrayTmp.GetSize() - 1);
			m_MineArrayTmp.RemoveAt(0);
			scanMineAround(tmpMine.GetLine(), tmpMine.GetColumn());
		}
		return;
	}
}

void CMFC_P4Dlg::scanMineAround(int nLine, int nColumn)
{
	CString sTmp;

	//上一行
	if(nLine > 0 && nColumn > 0)
	{
		if(m_MineArray[(nLine-1)*10+nColumn-1].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}
	}

	if(nLine > 0)
	{
		if(m_MineArray[(nLine-1)*10+nColumn].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}
	}

	if(nLine > 0 && nColumn < 9)
	{
		if(m_MineArray[(nLine-1)*10+nColumn+1].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}
	}

	// 本行
	if(nColumn > 0)
	{
		if(m_MineArray[(nLine)*10+nColumn-1].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}
	}

	if(nColumn < 9)
	{
		if(m_MineArray[(nLine)*10+nColumn+1].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}
	}

	//下一行
	if(nLine < 9 && nColumn > 0)
	{
		if(m_MineArray[(nLine+1)*10+nColumn-1].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}
	}

	if(nLine < 9)
	{

		if(m_MineArray[(nLine+1)*10+nColumn].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}	
	}

	if(nLine < 9 && nColumn < 9)
	{
		if(m_MineArray[(nLine+1)*10+nColumn+1].GetIsMine() == true)
		{
			int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
			m_MineArray[nLine*10+nColumn].SetAroundMineCount(nCount + 1);
		}
	}

	int nCount = m_MineArray[nLine*10+nColumn].GetAroundMineCount();
	if(nCount == 0)
	{
		CString sText = L" ";
		SetDlgItemText(m_MineArray[nLine*10+nColumn].GetID(), sText);

		if(nLine > 0 && nColumn > 0)
		{
			GetDlgItemText(m_MineArray[(nLine-1)*10+nColumn-1].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine-1)*10+nColumn-1].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine-1)*10+nColumn-1]);
					m_MineArray[(nLine-1)*10+nColumn-1].SetIsInQueue(true);
				}
			}
		}
		if(nLine > 0)
		{
			GetDlgItemText(m_MineArray[(nLine-1)*10+nColumn].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine-1)*10+nColumn].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine-1)*10+nColumn]);
					m_MineArray[(nLine-1)*10+nColumn].SetIsInQueue(true);
				}
			}
		}
		if(nLine > 0 && nColumn < 9)
		{
			GetDlgItemText(m_MineArray[(nLine-1)*10+nColumn+1].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine-1)*10+nColumn+1].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine-1)*10+nColumn+1]);
					m_MineArray[(nLine-1)*10+nColumn+1].SetIsInQueue(true);
				}
			}
		}

		if(nColumn > 0)
		{
			GetDlgItemText(m_MineArray[(nLine)*10+nColumn-1].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine)*10+nColumn-1].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine)*10+nColumn-1]);
					m_MineArray[(nLine)*10+nColumn-1].SetIsInQueue(true);
				}
			}
		}
		if(nColumn < 9)
		{
			GetDlgItemText(m_MineArray[(nLine)*10+nColumn+1].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine)*10+nColumn+1].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine)*10+nColumn+1]);
					m_MineArray[(nLine)*10+nColumn+1].SetIsInQueue(true);
				}
			}
		}

		if(nLine < 9 && nColumn > 0)
		{
			GetDlgItemText(m_MineArray[(nLine+1)*10+nColumn-1].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine+1)*10+nColumn-1].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine+1)*10+nColumn-1]);
					m_MineArray[(nLine+1)*10+nColumn-1].SetIsInQueue(true);
				}
			}
		}
		if(nLine < 9)
		{
			GetDlgItemText(m_MineArray[(nLine+1)*10+nColumn].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine+1)*10+nColumn].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine+1)*10+nColumn]);
					m_MineArray[(nLine+1)*10+nColumn].SetIsInQueue(true);
				}
			}
		}
		if(nLine < 9 && nColumn < 9)
		{
			GetDlgItemText(m_MineArray[(nLine+1)*10+nColumn+1].GetID(), sTmp);
			if(sTmp.Compare(L"!") != 0 && sTmp.Compare(L"?") != 0)
			{
				if(m_MineArray[(nLine+1)*10+nColumn+1].GetIsInQueue() == false)
				{
					m_MineArrayTmp.Add(m_MineArray[(nLine+1)*10+nColumn+1]);
					m_MineArray[(nLine+1)*10+nColumn+1].SetIsInQueue(true);
				}
			}
		}
	}
	else
	{
		CString sText = L"";
		sText.Format(_T("%d"), nCount);
		SetDlgItemText(m_MineArray[nLine*10+nColumn].GetID(), sText);
	}
	GetDlgItem(m_MineArray[nLine*10+nColumn].GetID())->EnableWindow(FALSE);
	m_MineArray[nLine*10+nColumn].SetIsChecked(true);
}

void CMFC_P4Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_MineArrayTmp.RemoveAll();
	m_MineArray.RemoveAll();

	for(int i = 0; i < 10; ++i)
	{
		for(int j = 0; j < 10; ++j)
		{
			int ID = 1002 + 10 * i + j;
			CMFC_P4Mine Mine(false, j, i, 0, false, ID);
			m_MineArray.Add(Mine);
			GetDlgItem(m_MineArray[i*10+j].GetID())->EnableWindow(TRUE);
			SetDlgItemText(m_MineArray[i*10+j].GetID(), L" ");
		}
	}

	for(int i = 0; i < m_nMineCount; ++i)
	{
		while(1)
		{
			int ran = random(100);
			if(ran < 0 || ran >= 100)
			{
				continue;
			}
			else
			{
				if(m_MineArray[ran].GetIsMine() == false)
				{
					m_MineArray[ran].SetIsMine(true);
					break;
				}
			}
		}
	}
}

void CMFC_P4Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}

void CMFC_P4Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton17()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton18()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton19()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton20()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton21()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton22()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton23()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton24()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton25()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton26()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton27()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton28()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton29()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton30()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton31()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton32()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton33()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton34()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton35()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton36()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton37()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton38()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton39()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton40()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton41()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton42()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton43()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton44()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton45()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton46()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton47()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton48()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton49()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton50()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton51()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton52()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton53()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton54()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton55()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton56()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton57()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton58()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton59()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton60()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton61()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton62()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton63()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton64()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton65()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton66()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton67()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton68()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton69()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton70()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton71()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton72()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton73()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton74()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton75()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton76()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton77()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton78()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton79()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton80()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton81()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton82()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton83()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton84()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton85()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton86()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton87()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton88()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton89()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton90()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton91()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton92()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton93()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton94()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton95()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton96()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton97()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton98()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton99()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton100()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton101()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnBnClickedButton102()
{
	// TODO: 在此添加控件通知处理程序代码
	scanMine();
}

void CMFC_P4Dlg::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	;
}

void CMFC_P4Dlg::OnLButtonUp(UINT /* nFlags */, CPoint point)
{
	
}

void CMFC_P4Dlg::OnLButtonDown(UINT /* nFlags */, CPoint point)
{
	;
}

BOOL CMFC_P4Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	if(pMsg->message==WM_RBUTTONDOWN)       //可以改为任何消息
	{
		CRect r;
		POINT pt;
		::GetCursorPos(&pt);             //得到鼠标动作的位置
		for(int i = 0; i < 10; ++i)
		{
			for(int j = 0; j < 10; ++j)
			{
				::GetWindowRect(GetDlgItem(m_MineArray[i*10+j].GetID())->GetSafeHwnd(),&r);   //得到button所在的rect
				if (PtInRect(&r,pt))        //判断鼠标动作是否在button范围之内     
				{
					CString sTmp;
					GetDlgItemText(m_MineArray[i*10+j].GetID(), sTmp);
					if(!m_MineArray[i*10+j].GetIsChecked())
					{
						if(sTmp.Compare(L"!") == 0)
						{
							SetDlgItemText(m_MineArray[i*10+j].GetID(), L"?");
						}
						else if(sTmp.Compare(L"?") == 0)
						{
							SetDlgItemText(m_MineArray[i*10+j].GetID(), L" ");
						}
						else
						{
							SetDlgItemText(m_MineArray[i*10+j].GetID(), L"!");
						}
					}
				}
			}
		}
	}
	else if(pMsg->message==WM_LBUTTONDOWN)       //可以改为任何消息
	{
		;
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}
