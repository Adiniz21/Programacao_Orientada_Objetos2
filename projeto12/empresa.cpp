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
#include "empresa.h"

    empresa::empresa(string n, string s, data &nas, data &con)
    :nascimento(nas),
    contrato(con)
    {
        setempresa(n,s);
    }
    void empresa::setempresa(string n, string s)
    {
        if(n.length()<25)
        nome=n;
        else
          nome=n.substr(0, 25);
        if(s.length()<25)
        sobrenome=s;
        else
        sobrenome=s.substr(0, 25);
    }
    void empresa::imprimeempresa()
    {
        cout << "Empregado\nNome: " << nome << "\nSobrenome: " << sobrenome << "\nData de nascimento: ";
        nascimento.imprime();
        cout << "\nData de contrato: ";
        contrato.imprime();
        cout << "\n-------------------------------------- ";
    }

