#pragma once

class KcpSession;
class UdpPacket;
class KcpEvent
{
public:
	KcpEvent();
	~KcpEvent();

	virtual KcpSession * createConnect();
	virtual void destroyConnect(KcpSession * conn);

	virtual void onUdpTimeout(KcpSession * ){};  //连接超时，建议close该会话
	virtual void onAccept(KcpSession * conn){};
	virtual void onConnect(KcpSession * conn){};
	virtual void onClose(KcpSession * conn){};
	virtual void onMsg(KcpSession * conn, UdpPacket * pack){};
};