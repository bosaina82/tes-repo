#pragma once
#include<string>
#include<iostream>
using namespace std;
class Subject
{
private:
	string name;
	int fullMarks;
	int studentMarks;
public:
	void set_name(string n);
	string get_name();

	void set_fullMarks(int fm);
	int get_fullMarks();

	void set_studentMarks(int sm);
	int get_studentMarks();

	Subject operator+(Subject s2);
	subject operator(string n, int fm, int sm);




};

