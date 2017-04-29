#pragma once
#include <string>
class CDBQuery;
class CDBoperations
{
public:
	CDBQuery* m_QueryInstance;
	static CDBoperations* GetInstancePtr(CDBQuery instanceptr);
	static void DestroyInstance();
	static std::string& select(std::string params);
	static std::string& get_colums();
	static std::string& insert(std::string arguments);
private:
	CDBoperations();
	virtual ~CDBoperations();
};

