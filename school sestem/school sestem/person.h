#pragma once
#include<string>
#include<iostream>
using namespace std;
class person
{
private:
     int ID;
    static int prsonsCount;
    string name, emall, address, moblle;
public:
    int get_ID();
    void set_name(string n);
    string get_name();
    void set_emall(string e);
    string get_emall();
    void set_address(string a);
    string get_address();
    void set_mobll(string m);
    string get_moblle();
};
