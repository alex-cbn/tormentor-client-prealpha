#pragma once
class CNotification
{
public:
	CNotification();
	virtual ~CNotification();
	virtual void Display();
protected:
	char* message;
};

