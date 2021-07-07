#ifndef DATA_H
#define DATA_H

#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

using namespace std;

class data
{
public:
    data(int d = 0, int m = 0, int a = 0);
    void setdata(int d , int m, int a);
    void imprime()
    {
        if(dia>0 && dia<32 && mes>0 && mes <13)
        cout << dia << "/" << mes << "/" <<ano;
        else
            cout << "Data inserida errada";
    }

private:
    int dia;
    int mes;
    int ano;
};

#endif
