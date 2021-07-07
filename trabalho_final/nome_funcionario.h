#ifndef NOME_FUNCIONARIO_H
#define NOME_FUNCIONARIO_H


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

class empregado
{
public:
    empregado(char *,char *);
    ~empregado();


private:
   static int contador;
    char *nome;
    char *sobrenome;
};


#endif

