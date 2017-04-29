#pragma once
#include "Ballot_single.h"
class CBallot_multi :
	public CBallot_single
{
public:
	CBallot_multi();
	virtual ~CBallot_multi();
	char* get_info();
};

