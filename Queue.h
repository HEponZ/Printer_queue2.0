#pragma once
#include "User.h"

class Queue
{
private:
	vector<User> users;
public:
	void set(const User& user_buf) noexcept;
	void print() noexcept;
};