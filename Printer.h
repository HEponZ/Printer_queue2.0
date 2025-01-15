#pragma once
#include "Queue.h"
#include "Priority_Queue.h"

class Printer
{
private:
	Priority_Queue next_for_print;
	Queue statistic_queue;
public:

	void statistic()noexcept;

	void Add(string FIO_S, string prof_S, int prioritets, string date_S)noexcept;

	void print_next()noexcept;
};