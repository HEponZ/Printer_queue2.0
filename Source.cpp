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

	cout << "______����______\n1 - ���� ������\n2 - ����� ����������\n3 - ����� �����������(��� �� ������ ��� �� ������ � ������)\n";

	do
	{
		cout << " - ";
		cin >> choise;

		switch (choise)
		{
		case ADD:
			cout << "������� ���: ";
			cin >> FIO;
			cout << "������� ���������: ";
			cin >> prof;
			cout << "������� ����: ";
			cin >> date;
			cout << "������� ���������: ";
			cin >> prioritet;
			printer.Add(FIO, prof, prioritet, date);
			break;
		case STATISTICS:
			printer.statistic();
			break;
		case PRIORITETS:
			printer.print_pri();
			break;
		case EXIT:
			break;
		}
	} while (choise != 0);


	return 0;
}