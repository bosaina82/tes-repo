#pragma once

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



};

