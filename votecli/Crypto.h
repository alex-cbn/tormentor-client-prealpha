#pragma once
class CCrypto
{
public:
	static char* Decrypt(char* message, char* key);
	static char* Encrypt(char* message, char* key);
	static char* GenerateSalt();
	CCrypto();
	virtual ~CCrypto();
};