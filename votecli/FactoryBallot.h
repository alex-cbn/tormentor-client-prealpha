#pragma once
#include "Ballot.h"
#include "Ballot_multi.h"
#include "Ballot_multi_user.h"
#include "Ballot_single.h"
#include "Ballot_single_user.h"
#include "Ballot_YN.h"

class CFactoryBallot
{
public:
	CFactoryBallot();
	~CFactoryBallot();
	static CBallot* make_ballot_single(/*pertinent parameters*/);
	static CBallot* make_ballot_multi(/*pertinent parameters*/);
	static CBallot* make_ballot_single_user(/*pertinent parameters*/);
	static CBallot* make_ballot_multi_user(/*pertinent parameters*/);
	static CBallot* make_ballot_YN(/*pertinent parameters*/);
	static CBallot* make_ballot_by_json(char* filename);
};

