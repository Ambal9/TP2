#include "AEROFLOT.h"

void AEROFLOT::set_nomer(int nomer)
{
    this->nomer = nomer;
}

void AEROFLOT::set_tip(string tip)
{
    this->tip = tip;
}

void AEROFLOT::set_kyda(string kyda)
{
    this->kyda = kyda;
}

string AEROFLOT::get_tip()
{
    return string(this->tip);
}

string AEROFLOT::get_kyda()
{
    return string(this->kyda);
}

int AEROFLOT::get_nomer()
{
    return this->nomer;
}
