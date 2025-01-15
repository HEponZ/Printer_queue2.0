#include "Printer.h"

void Printer::statistic() noexcept
{
	cout << "______Статистика______\n";
	statistic_queue.print();
}

void Printer::Add(string FIO_S, string prof_S, int prioritets, string date_S) noexcept
{
	User user_buf(FIO_S, prof_S, prioritets, date_S);
	statistic_queue.set(user_buf);
	next_for_print.set(user_buf);
}

void Printer::print_next() noexcept
{
	next_for_print.Printing_doc();
	cout << "Документ напечатан\n";
}