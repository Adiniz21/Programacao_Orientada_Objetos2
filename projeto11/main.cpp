#include <iostream>

using std::cout;
using std::cin;

#include<string>
using std::string;
using std::getline;

#include<iomanip>
using std::setfill;
using std::setw;

#include "projeto11.h"

int main()
{
    increment valor1(100,5);
    increment valor2;
    valor1.imprime_incremento(); cout<< "\n";
    valor2.imprime_incremento(); cout << "\n";
    return 0;
}
