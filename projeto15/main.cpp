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

#include "projeto15.h"

int main()
{

    empregado *a =new empregado ("Artur","Diniz");
    empregado *b =new empregado ("Ranan","Rochester");
    delete a;
    a=0;
    delete b;
    b=0;

    return 0;
}
