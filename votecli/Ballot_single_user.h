#pragma once
#include "Ballot.h"
class CBallot_single_user :
	public CBallot
{
public:
	CBallot_single_user();
	virtual ~CBallot_single_user();
	char* get_info();
};

