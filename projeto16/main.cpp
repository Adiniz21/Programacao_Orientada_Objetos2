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

#include "comissao.h"
#include "base.h"

int main()
{
    comissao p("Artur","Diniz","135.735.686.29",100,0.5);
    p.imprime();
    base a("Artur","Diniz","135.735.686.29",100,0.5,1000);
    a.imprime();
    a.imprime2();
    return 0;
}
