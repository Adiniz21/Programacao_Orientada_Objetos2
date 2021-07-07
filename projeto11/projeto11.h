#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

class increment
{
public:
    increment(int c=0, int i=1);
    void setvalor(int c, int i);
    void imprime_incremento();

private:
    int coun;
    const int incremento;
};
