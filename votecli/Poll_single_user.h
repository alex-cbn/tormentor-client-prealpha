#pragma once
#include "Poll.h"
class CPoll_single_user :
	public CPoll
{
public:
	CPoll_single_user();
	virtual ~CPoll_single_user();
	CBallot* vote(int option);
};

