
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ifstream f;
	f.open("A.txt");
	if (!f.is_open())
	{
		cout << "Ошибка открытия файла" << endl;

	}
	char c;
	int i=1;
	cout << "Slova na glasnye: ";
	while (!f.eof())
	{
		f.get(c);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
		{
			
			while (c != ' ' && c != '.' && c != ',' && c != '?'&& c != '!'&& c != ';'&& c != ':' && c != '\n'&& !f.eof())
			{
				cout << c;
				f.get(c);
			}
			i++;
			cout << "; ";
		}
		else
		{
			while(c != ' ' && c != '.' && c != ',' && c != '?' && c != '!' && c != ';' && c != ':' && c != '\n' && !f.eof())
			f.get(c);
		}


	}
	f.close();
}
