// Behavior.h : main header file for the BEHAVIOR application
//

#if !defined(AFX_BEHAVIOR_H__873B9F0F_22BB_4452_B6D9_CAE416347935__INCLUDED_)
#define AFX_BEHAVIOR_H__873B9F0F_22BB_4452_B6D9_CAE416347935__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBehaviorApp:
// See Behavior.cpp for the implementation of this class
//

class CBehaviorApp : public CWinApp
{
public:
	CBehaviorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBehaviorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CBehaviorApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BEHAVIOR_H__873B9F0F_22BB_4452_B6D9_CAE416347935__INCLUDED_)
