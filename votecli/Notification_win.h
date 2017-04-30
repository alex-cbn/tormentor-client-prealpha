#pragma once
#include "Notification.h"
class CNotification_win :
	public CNotification
{
public:
	CNotification_win();
	void Display();
	virtual ~CNotification_win();
};

