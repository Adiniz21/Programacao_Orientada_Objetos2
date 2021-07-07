#include <iostream>

using std::cout;
using std::cin;

#include <string>
using std::string;
using std::getline;

#include <cstring>
using std::strlen;
using std::strcpy;

#include <iomanip>
using std::setfill;
using std::setw;

using namespace std;

#include "nome_funcionario.h"

int empregado::contador = 0;

empregado::empregado(char *n,char *s)
{
    nome = new char[strlen(n)];
    strcpy(nome,n);
    sobrenome = new char[strlen(s)];
    strcpy(sobrenome,s);
    contador++;
    cout << "Empregado " << contador << ":" << nome << " " << sobrenome << endl;
}
empregado::~empregado()
{
   delete[]nome;
   delete[]sobrenome;
   contador--;

}



