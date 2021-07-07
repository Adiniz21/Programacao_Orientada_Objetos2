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

#include "data.h"

data::data(int d, int m, int a )
{
    setdata(d,m,a);
}
void data::setdata(int d , int m, int a)
{
    dia=d;
    mes=m;
    ano=a;
}
