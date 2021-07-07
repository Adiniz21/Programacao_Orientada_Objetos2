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

#include "horario.h"
#include "nome_funcionario.h"
#include "base.h"
#include "comissao.h"

class documentos
{
private:
    string cpf;
    string rg;
public:
    void set_cpf(string cpf)
    {
        this->cpf = cpf;
    }

    void set_rg(string rg)
    {
        this->rg = rg;
    }

    string get_cpf()
    {
        return this->cpf;
    }

    string get_rg()
    {
        return this->rg;
    }
};


class Proxy_documentos
{

private:
    documentos documentos_funcionario;
public:
    void set_cpf(string cpf)
    {
        this->documentos_funcionario.set_cpf(cpf);
    }

    void set_rg(string rg)
    {
        this->documentos_funcionario.set_rg(rg);
    }

    string get_cpf()
    {
        return this->documentos_funcionario.get_cpf();
    }

    string get_rg()
    {
        return this->documentos_funcionario.get_rg();
    }
};


class Data
{
    friend void seta(Data &, int dia, int mes, int ano);
public:
    Data(int d = 26, int m = 11, int a = 2020) : dia(d), mes(m), ano(a)
    {
    }

    void imprime()
    {
        cout << this->dia << "/" << this->mes << "/" << this->ano << "\n";
    }
private:
    int dia;
    int mes;
    int ano;
};

void seta(Data &a, int dia, int mes, int ano)
{
    a.dia = dia;
    a.mes = mes;
    a.ano = ano;
}

class Data_Admissao
{
public:
    Data_Admissao(int udia=1, int umes=1, int uano=2012)
    {
        setdata(udia,umes,uano);
    }

    void setdata(int udia, int umes, int uano)
    {
        dia=udia;
        mes=umes;
        ano=uano;
    }
    void imprimedata()
    {
        cout << dia << "/" << mes << "/" << ano;
    }
private:
    int dia, mes, ano;
};

class Empresa
{
public:
    Empresa(string e, const Data_Admissao &val)
        :empresa(e)
    {
        setproduto(val);
    }

    void setproduto(const Data_Admissao &val)
    {
        validade=val;
    }
    void imprime()
    {
        cout << empresa << "\nData de Admissao: ";
        validade.imprimedata();
    }

private:
    string empresa;
    Data_Admissao validade;
};

int main()
{
    Empresa p1("Novo Nordisk",Data_Admissao(21,11,2018)),p2("Nestle",Data_Admissao(12,12,1998));
    Proxy_documentos documentos1, documentos2;
    comissao *ob1ptr = 0;
    base ob2("Artur", "Diniz", "135.735.686.29", 1000, 0.3, 1045);
    documentos1.set_cpf("07222179581");
    documentos2.set_cpf("02584135123");
    ob1ptr = &ob2;
    comissao *ob2ptr = 0;
    base ob3("Ranan","Rochester","456.852.951.45",1000,0.6,2000);
    ob2ptr = &ob3;
    Horario t;
    Data data;
    cout << "Data: ";
    data.imprime();
    t.setHora( 07 ).setMinuto( 30 ).setSegundo( 00 );
    cout << "Horario de Entrada: ";
    t.imprime();
    cout << "\n\n";
    empregado *a =new empregado ("Artur","Diniz");
    cout << "Empresa: ";
    p1.imprime();
    cout << "\nCNH:" << documentos1.get_cpf() << "\n";
    documentos1.set_cpf("MG18621252");
    cout << "Identidade:" << documentos1.get_cpf() << "\n";
    ob1ptr->imprime();
    cout << "\nHorario de saida: ";
    t.setHorario( 18, 30, 00 ).imprime();
    cout << endl;
    Horario t1;
    seta(data,24,11,2020);
    cout << "------------------------------------\nData: " ;
    data.imprime();
    t1.setHora( 07 ).setMinuto( 30 ).setSegundo( 00 );
    cout <<"Horario de Entrada: ";
    t1.imprime();
    cout << "\n\n";
    empregado *b =new empregado ("Ranan","Rochester");
    cout << "Empresa: ";
    p2.imprime();
    cout << "\nCNH:" << documentos2.get_cpf() << "\n";
    documentos2.set_cpf("MG85965782");
    cout << "Identidade:" << documentos2.get_cpf() << "\n";
    ob2ptr ->imprime();
    delete a;
    a=0;
    delete b;
    b=0;
    cout << "\nHorario de saida: ";
    t1.setHorario( 18, 30, 00 ).imprime();
    cout << "\n------------------------------------";
    cout << endl;
    return 0;
}
