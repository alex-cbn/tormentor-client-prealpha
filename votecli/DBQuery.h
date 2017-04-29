#pragma once
#include <string>
#include <fstream>
#include <sstream>
class CDBQuery
{
public:
	static CDBQuery* GetInstancePtr();
	static void DestroyInstance(CDBQuery* instptr);
private:
	std::istream m_CacheFile;
	std::stringstream m_result;
	std::string& query(std::string query);
	CDBQuery();
	~CDBQuery();
	CDBQuery(const CDBQuery &cpy);
	CDBQuery& operator = (const CDBQuery& equ);
};