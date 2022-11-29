#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
#include "AEROFLOT.h"

using namespace std;
void main()
{
	void menu(HANDLE con, int flag);
	int i = 0;
	char flag = '0';
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_CTYPE, "rus");
	AEROFLOT reis;
	while (i != 4)
	{

		menu(hConsole, i);
		do
		{
			flag = _getch();
			if (flag == 's')
			{
				if (i < 3)
					i++;
				menu(hConsole, i);
			}
			else if (flag == 'w')
			{
				if (i > 0)
					i--;
				menu(hConsole, i);
			}
		} while (flag != ' ');
		if (flag == ' ')
		{
			switch (i) {
			case 0:





				break;







			}

			system("cls");
		}

	}

}
void menu(HANDLE con, int flag)
{
	WORD w = FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN |
		FOREGROUND_RED;
	WORD b = FOREGROUND_BLUE;
	system("cls");
	cout << "Управление: Вверх/Вниз - w/s" << endl << " Выбор пункта -пробел" << endl << endl;
	cout << " Гавное меню" << endl << endl << endl;
	if (flag == 0) SetConsoleTextAttribute(con, b);
	else SetConsoleTextAttribute(con, w);
	cout << "1.Добавление Рейса" << endl;
	if (flag == 1) SetConsoleTextAttribute(con, b);
	else SetConsoleTextAttribute(con, w);
	cout << "2.Удаление Рейса" << endl;
	if (flag == 2) SetConsoleTextAttribute(con, b);
	else SetConsoleTextAttribute(con, w);
	cout << "3.Вывод всех рейсов" << endl;
	if (flag == 3) SetConsoleTextAttribute(con, b);

	else SetConsoleTextAttribute(con, w);
	cout << "4.Поиск рейсов по названию пункта назначения" << endl;
	


	SetConsoleTextAttribute(con, w);
}