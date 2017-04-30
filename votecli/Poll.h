#pragma once
#include <map>
class CBallot;

class CPoll
{
public:
	CPoll();
	virtual ~CPoll();
	virtual CBallot* vote(int option) = 0;
	virtual void Display() = 0;
protected:
	std::map<int, std::string> m_Options;
};