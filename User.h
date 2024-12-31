#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class User
{
private:
	string FIO;
	string prof;
	int prioritet;
	string data;
public:
	friend class Priority_Queue;
	friend class Queue;

	User(string FIO_S, string prof_S, int prioritet_S, string data_S) :FIO{ FIO_S }, prof{ prof_S }, prioritet{ prioritet_S }, data{ data_S } {};
	void print() { cout << "���: " << FIO << "\n���������: " << prof << "\n����: " << data << "\n----------------------\n"; }
};