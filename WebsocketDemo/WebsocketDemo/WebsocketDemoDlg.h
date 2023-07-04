
// WebsocketDemoDlg.h : ͷ�ļ�
//

#pragma once

#include "../Websocket/WebSocketServer.h"

// CWebsocketDemoDlg �Ի���
class CWebsocketDemoDlg : public CDialogEx
{
// ����
public:
	CWebsocketDemoDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_WEBSOCKETDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonStartserver();

public:
	// ���ӽ���ص�
	bool connectResult(bool bConnect);

private:
	WebSocketServer* m_pWebSocketServer = nullptr;
};
