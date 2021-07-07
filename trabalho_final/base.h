

#ifndef BASE_H
#define BASE_H

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

class base : public comissao
{
public:
    base(string, string, string,double=0, double=0, double=0);
    void setsalario(double);
    void imprime();
private:
    double salario;
    double tt;
};


#endif
