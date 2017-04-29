#pragma once
#include "Ballot.h"
class CBallot_single :
	public CBallot
{
public:
	CBallot_single();
	virtual ~CBallot_single();
	char* get_info();
};

