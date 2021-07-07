
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

increment::increment(int c, int i)
: coun(c),
incremento(i)
{
}

void increment::imprime_incremento()
{
    int a;
    cout << "Antes de incrementar valor: count = " << coun << ", incremento = " << incremento << "\n";
    for(a=0;a<3;a++)
    {
        coun = coun + incremento;
        cout << "Depois de incrementar valor: count = " << coun << ", incremento = " << incremento << "\n";
    }
}
