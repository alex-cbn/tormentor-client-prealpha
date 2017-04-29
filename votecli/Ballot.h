#pragma once
#include <string>
class CBallot
{
public:
	CBallot();
	virtual ~CBallot();
	virtual char* get_info()=0;
protected:
	std::string m_Message;
};