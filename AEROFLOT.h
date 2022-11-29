#include <string>
#include <iostream>
#pragma once
using namespace std;
class AEROFLOT
{
private:
		int nomer;
		string  tip;
		string kyda;
public:
	void set_nomer(int);
	void set_tip(string);
	void set_kyda(string);
	string get_tip();
	string get_kyda();
	int get_nomer();
	void addreis(AEROFLOT);

};

