#include "person.h"
int person::personsCount = 0;
person::person()
{
	personsCount++;
	ID = personCount;
}

int person::get_ID()
{
	return ID;
}

void person::set_name(string n)
{
	name = n;
}

string person::get_name()
{
	return name;
}

void person::set_emall(string e)
{
	emall;
}

string person::get_emall()
{
	return emall;
}

void person::set_address(string a)
{
	address;
}

string person::get_address()
{
	return address;
}

void person::set_mobll(string m)
{
	moblle;
}

string person::get_moblle()
{
	return moblle;
}
