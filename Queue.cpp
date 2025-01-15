#include "Queue.h"

void Queue::set(const User& user_buf) noexcept
{
	users.push_back(user_buf);
}

void Queue::print()noexcept
{
	for (size_t i{ 0 }; i < users.size(); i++)
	{
		users[i].print();
	}
}