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
    comissao *ob1ptr = 0;
    base ob2("Artur", "Artur", "222.222.222-22", 10000, 0.6, 1045);
    ob1ptr = &ob2;
    ob1ptr->imprime();
    return 0;
}
