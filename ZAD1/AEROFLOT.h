#include <string>
#include <iostream>
#pragma once
using namespace std;
class AEROFLOT
{
private:
		string nomer;
		string  tip;
		string kyda;


public:
	void set_nomer(string);
	void set_tip(string);
	void set_kyda(string);
	string get_tip();
	string get_kyda();
	string get_nomer();
	
	AEROFLOT(){
		nomer = "0";
		tip = "0";
		kyda = "0";
	}
	AEROFLOT(const AEROFLOT& reis)
	{
		nomer = reis.nomer;
		tip = reis.tip;
		kyda = reis.kyda;
		
	}
	~AEROFLOT()
	{
	

	}
};

