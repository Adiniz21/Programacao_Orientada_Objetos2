

#ifndef COMISSAO_H
#define COMISSAO_H

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

class comissao
{
public:
    comissao(string, string, string ,double=0, double=0);
    void setcomissao(double, double);
    virtual void imprime();
protected:
    string nome;
    string sobrenome;
    string cpf;
    double venda;
    double porcentagem;
    double total;
};


#endif
