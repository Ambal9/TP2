#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
#include "AEROFLOT.h"
#include "Keep.h"

using namespace std;
void main()
{
	void menu(HANDLE con, int flag);
	int i = 0;
	char flag = '0';
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_CTYPE, "rus");
	AEROFLOT reis;
	Keep k;
	string vvod;
	int chislo;
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


				cout << "����� �����:" << endl;
				cin>>chislo;
				reis.set_nomer(chislo);
				cout << "��� ��������:" << endl;
				getline(cin, vvod);
				getline(cin, vvod);
				reis.set_tip(vvod);
				cout << "���� �����:" << endl;
				getline(cin, vvod);
				reis.set_kyda(vvod);
				k.addreis(reis);
				cout << "���� ��������" << endl;
				system("pause");

				break;
				

			case 1:

				break;

			case 2:
				k.info();
				system("pause");

				break;
			case 3:
				cout << "������� ����� �����������: " << endl;
				getline(cin, vvod);
				if (k.pynkt(vvod) == FALSE)
					cout << "��� ������ � ���� �����"<<endl;
				system("pause");
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
	cout << "����������: �����/���� - w/s" << endl << " ����� ������ -������" << endl << endl;
	cout << " ������ ����" << endl << endl << endl;
	if (flag == 0) SetConsoleTextAttribute(con, b);
	else SetConsoleTextAttribute(con, w);
	cout << "1.���������� �����" << endl;
	if (flag == 1) SetConsoleTextAttribute(con, b);
	else SetConsoleTextAttribute(con, w);
	cout << "2.�������� �����" << endl;
	if (flag == 2) SetConsoleTextAttribute(con, b);
	else SetConsoleTextAttribute(con, w);
	cout << "3.����� ���� ������" << endl;
	if (flag == 3) SetConsoleTextAttribute(con, b);

	else SetConsoleTextAttribute(con, w);
	cout << "4.����� ������ �� �������� ������ ����������" << endl;
	


	SetConsoleTextAttribute(con, w);
}






