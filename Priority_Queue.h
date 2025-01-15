#pragma once
#include "User.h"

class Priority_Queue
{
private:
	vector<User> users;
	int size = 0;
	vector<int> prioritets;
public:
	void set(const User& user) noexcept;
	void Printing_doc()noexcept;
	User Extract() ;
};