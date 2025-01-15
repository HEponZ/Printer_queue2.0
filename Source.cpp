#include "Printer.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Printer printer;
	int choise, prioritet;
	string FIO, date, prof;
	enum MENU {
		EXIT = 0,
		ADD,
		STATISTICS,
		PRIORITETS
	};

	cout << "______МЕНЮ______\n1 - Ввод данных\n2 - Вывод статистики\n3 - Пейчать документов по приоритету(чем он больше тем вы раньше в списке)\n";

	do
	{
		try
		{
			cout << " - ";
			cin >> choise;
			switch (choise)
			{
			case ADD:
				cout << "Введите ФИО: ";
				cin >> FIO;
				cout << "Введите должность: ";
				cin >> prof;
				cout << "Введите дату: ";
				cin >> date;
				cout << "Введите приоритет: ";
				cin >> prioritet;
				printer.Add(FIO, prof, prioritet, date);
				break;
			case STATISTICS:
				printer.statistic();
				break;
			case PRIORITETS:
				printer.print_next();
				break;
			case EXIT:
				break;
			}
		}
		catch (const logic_error& err)
		{
			cout << err.what();
		}
	} while (choise != 0);


	return 0;
}