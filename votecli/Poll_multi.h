#pragma once
#include "Poll_single.h"
class CPoll_multi :
	public CPoll_single
{
public:
	CPoll_multi();
	virtual ~CPoll_multi();
	CBallot* vote(int option);
};

