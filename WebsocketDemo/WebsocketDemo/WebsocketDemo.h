
// WebsocketDemo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWebsocketDemoApp: 
// �йش����ʵ�֣������ WebsocketDemo.cpp
//

class CWebsocketDemoApp : public CWinApp
{
public:
	CWebsocketDemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWebsocketDemoApp theApp;