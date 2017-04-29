#pragma once
#include "Poll.h"
class CPoll_single :
	public CPoll
{
public:
	CPoll_single();
	virtual ~CPoll_single();
	CBallot* vote(int option);
};

