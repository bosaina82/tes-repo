#include "Subject.h"
#include<string>
#include<iostream>
using namespace std;

void Subject::set_name(string n)
{
    name = n;
}

string Subject::get_name()
{
    return name;
}

void Subject::set_fullMarks(int fm)
{
    fullMarks = fm;
}

int Subject::get_fullMarks()
{
    return fullMarks;
}

void Subject::set_studentMarks(int sm)
{
    studentMarks = sm;
}

int Subject::get_studentMarks()
{
    return studentMarks;
}

Subject Subject::operator+(Subject s2)
{
     subject result;
     result.s = s + d2.get_sm();
     result.f = f +d2.get_fm();
    

}
