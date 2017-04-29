#pragma once
#include "Ballot_single_user.h"
class CBallot_multi_user :
	public CBallot_single_user
{
public:
	CBallot_multi_user();
	~CBallot_multi_user();
	char* get_info();
};

