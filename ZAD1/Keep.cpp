#include "Keep.h"
void Keep::addreis(AEROFLOT reis)
{
	AEROFLOT* p = new AEROFLOT[size_aer];
	p[size_aer - 1] = reis;
	AEROFLOT* pp = new AEROFLOT[size_aer];
	for (size = 0; size <= size_aer - 2; size++)
	{
		pp[size] = m[size];
	}
	pp[size_aer - 1] = p[size_aer - 1];
	delete[] m;
	m = new AEROFLOT[size_aer];
	for (size = 0; size <= size_aer - 1; size++)
	{
		m[size] = pp[size];
	}
	delete[] p;
	delete[] pp;
	size_aer++;
    if(size_aer>=3)
		sort();
}
void Keep::info()
{
	if (size_aer ==1)
	{
		for (size = 0; size <= size_aer - 1; size++)
		{

			cout << "Рейсы   " << size + 1 << ": Номер рейса: " << m[size].get_nomer() << ", Тип самолета: " << m[size].get_tip() << ", Куда летит: " << m[size].get_kyda() << endl;
		}
	}
	else {
		for (size = 0; size <= size_aer - 2; size++)
		{

			cout << "Рейсы" << size + 1 << ": Номер рейса: " << m[size].get_nomer() << ", Тип самолета: " << m[size].get_tip() << ", Куда летит: " << m[size].get_kyda() << endl;
		}
	}
}

void Keep::sort()
{
	int j;
	int i=0;
	AEROFLOT x;
	for (i=0;i< size_aer-2;i++)
	{
		for (j = size_aer - 2; j > i; j--)
		{
			if (m[j-1].get_nomer() > m[j].get_nomer())
			{
				x = m[j - 1];
				m[j - 1] = m[j];
				m[j] = x;

			}

		}
	}
	

}

bool Keep::pynkt(string vvod)
{
	int i;
	int b=0;
	for (i = 0; i <= size_aer - 2; i++)
	{
		if (m[i].get_kyda() == vvod)
		{
			cout << " Номер рейса: " << m[i].get_nomer() << ", Тип самолета: " << m[i].get_tip() << ", Куда летит: " << m[i].get_kyda() << endl;
			b = 1;
		}
	}
	if (b == 1)
		return 1;
	else return 0;
}
