#pragma once
#include "Notification.h"
#include "Notification_win.h"
class CNotification_Handler
{
	static CNotification* ListenForNotification();
public:
	CNotification_Handler();
	~CNotification_Handler();

};

