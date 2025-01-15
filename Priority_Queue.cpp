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
	if (prioritets.size() == 0)
	{
		throw logic_error("¬се документы напечатаны\n");
	}
	//≈сли в очереди есть элементы, то возвращаем тот,
	//у которого наивысший приоритет и сдвигаем очередь
	//пусть приоритетный элемент - нулевой
	int max_pri = prioritets[0];
	//а приоритетный индекс = 0
	int pos_max_pri = 0;
	//ищем приоритет
	for (int i = 1; i < size; i++)
		//если встречен более приоритетный элемент
		if (max_pri < prioritets[i]) {
			max_pri = prioritets[i];
			pos_max_pri = i;
		}
	//вытаскиваем приоритетный элемент
	User temp1 = users[pos_max_pri];
	int temp2 = prioritets[pos_max_pri];
	//сдвинуть все элементы
	for (int i = pos_max_pri; i < size - 1; i++) {
		users[i] = users[i + 1];
		prioritets[i] = prioritets[i + 1];
	}
	//уменьшаем количество
	size--;

	if (prioritets.size() == 1)
	{
		cout << "\n\nЁто последний документ.\nѕосле его распечатки очерель к принтеру будет свободна\n\n";
	}

	//возврат извлеченного элемента
	return temp1;
}