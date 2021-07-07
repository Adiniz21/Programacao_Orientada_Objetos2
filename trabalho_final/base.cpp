
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

#include "base.h"

base::base(string n, string s, string c,double v, double p, double a)
:comissao(n,s,c,v,p)
{
   setsalario(a);
}

void base::setsalario(double a)
{
    salario = a;
    tt = total + salario;
}
void base::imprime()
{
    cout << "CPF: " << cpf <<"\nSalario Base: " << salario << "\nGanho total: " << tt << "\n";
}

