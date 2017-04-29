#pragma once
#include "Poll_single_user.h"
class CPoll_multi_user :
	public CPoll_single_user
{
public:
	CPoll_multi_user();
	virtual ~CPoll_multi_user();
	CBallot* vote(int option);
};

