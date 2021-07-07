#ifndef EMPRESA_H
#define EMPRESA_H

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

class empresa
{
public:
    empresa(string n, string s, data &nas, data &con );
    void setempresa(string n, string s);
    void imprimeempresa();
private:
    string nome;
    string sobrenome;
    data nascimento;
    data contrato;
};

#endif
