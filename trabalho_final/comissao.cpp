


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



comissao::comissao(string n, string s, string c ,double v, double p)
:nome(n),
sobrenome(s),
cpf(c)
{
    setcomissao(v,p);
}


void comissao::setcomissao(double v, double p)
{
    venda = v;
    porcentagem = p;
    total = v*p;
}

void comissao::imprime()
{
    cout << "-----------------------------------------------------------\nNome: " << nome << " " << sobrenome << "\nCPF: " << cpf << "\nVenda: " << venda << "\nPorcentagem: " << porcentagem << "\nVenda sem base: " << total << "\n----------------------------------------";
}
