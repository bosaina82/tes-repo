#include "Distance.h"

void Distance::set_m(int a)
{
    m = a;
}

int Distance::get_m()
{
    return m;
}

void Distance::set_cm(int b)
{
    cm = b;
}

int Distance::get_cm()
{
    return cm;
}

void Distance::add(int a)
{
    m + a;
}

void Distance::add(int a, int b)
{
    m += a;
    cm += b;
}

Distance Distance::operator+(Distance d2)
{
    Distance result;
    result.m = m + d2.get_m();
    result.cm = cm + d2.get_cm();
    if (result.cm >= 100)
    {
        result.m++;
        result.cm -= 100;
    }
    return result;
}

Distance Distance::operator++()
{
    m++;
    Distance result;
    result.m = m;
    result.cm = cm;
    return result;
}


void Distance::print()
{
    cout << m << '.' << cm << endl;
}

