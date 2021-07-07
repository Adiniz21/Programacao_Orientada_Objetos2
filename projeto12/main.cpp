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

#include "empresa.h"

int main()
{
    int d,m,a;
    cout << "coloque a data de nascimento: ";
    cin >> d >> m >> a;
    data nascimento(d,m,a);
    cout << "coloque a data de contrato: ";
    cin >> d >> m >> a;
    data contrato(d,m,a);
    string n, s;
    cout << "Coloque o nome do funcionario: ";
    cin.ignore();
    getline(cin,n);
    cout << "Coloque o sobrenome do funcionario: ";
    cin.ignore();
    getline(cin,s);
    empresa empregado(n, s, nascimento, contrato);
    empregado.imprimeempresa();

    return 0;
}
