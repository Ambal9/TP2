
#include "AEROFLOT.h"
#include <string>
#include <iostream>
#pragma once
using namespace std;
class Keep
{
private:
	int size_aer = 1;
	int size;
	AEROFLOT* m = new AEROFLOT[size_aer];

public:
	void addreis(AEROFLOT);
	void info();
	void sort();
	bool pynkt(string);


}; 