#pragma once
#include "NotificationBase.h"

#include "../json/json.h"

class CNotificationLogitechMediaServer : public CNotificationBase {
public:
	CNotificationLogitechMediaServer();
	~CNotificationLogitechMediaServer();
	virtual bool IsConfigured();
protected:
	virtual bool SendMessageImplementation(const std::string &Subject, const std::string &Text, const std::string &ExtraData, const int Priority, const std::string &Sound, const bool bFromNotification);
private:
	Json::Value Query(std::string sIP, int iPort, std::string sPostdata);

	std::string _ServerIP;
	int _ServerPort;

	std::string _PlayerIP;
	int _Duration;
};
