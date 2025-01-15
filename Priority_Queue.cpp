#include "Priority_Queue.h"

void Priority_Queue::set(const User& user) noexcept
{
	users.push_back(user);
	prioritets.push_back(user.prioritet);
	size++;
}

void Priority_Queue::Printing_doc()noexcept
{
	Extract().print();
}

User Priority_Queue::Extract()
{
	if (prioritets.empty())
	{
		throw out_of_range("��� ��������� ����������\n");
	}
	//���� � ������� ���� ��������, �� ���������� ���,
	//� �������� ��������� ��������� � �������� �������
	//����� ������������ ������� - �������
	int max_pri = prioritets[0];
	//� ������������ ������ = 0
	int pos_max_pri = 0;
	//���� ���������
	for (int i = 1; i < size; i++)
		//���� �������� ����� ������������ �������
		if (max_pri < prioritets[i]) {
			max_pri = prioritets[i];
			pos_max_pri = i;
		}
	//����������� ������������ �������
	User temp1 = users[pos_max_pri];
	int temp2 = prioritets[pos_max_pri];
	//�������� ��� ��������
	for (int i = pos_max_pri; i < size - 1; i++) {
		users[i] = users[i + 1];
		prioritets[i] = prioritets[i + 1];
	}
	//��������� ����������
	size--;
	//������� ������������ ��������
	return temp1;
}