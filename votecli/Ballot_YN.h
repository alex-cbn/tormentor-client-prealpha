#pragma once
#include "Ballot_single.h"
class CBallot_YN :
	public CBallot_single
{
public:
	CBallot_YN();
	virtual ~CBallot_YN();
	char* get_info();
};

