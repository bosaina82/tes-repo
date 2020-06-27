#pragma once
class Distance
{
private:
	int m, cm;
public:
	void set_m(int a);
	int get_m();

	void set_cm(int b);
	int get_cm();

	void add(int a);
	void add(int a, int b);

	Distance operator+(Distance d2);
	Distance operator ++()

		void print();
}; 