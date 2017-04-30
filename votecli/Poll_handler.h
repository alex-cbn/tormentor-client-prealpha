#pragma once
class CPoll;
class CPoll_handler
{
public:
	CPoll_handler();
	~CPoll_handler();
	static void list_all();//lists all polls
	static void pull_all();//extracts all polls from local cache
	static void push(CPoll* poll);//visitor pattern
};