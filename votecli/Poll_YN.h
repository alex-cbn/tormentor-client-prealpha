#pragma once
#include "Poll_single.h"
class CPoll_YN :
	public CPoll_single
{
public:
	CPoll_YN();
	virtual ~CPoll_YN();
	CBallot* vote(int option);
};

