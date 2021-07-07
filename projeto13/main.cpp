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

class amiga
{
    friend void seta(amiga &, int);
public:
    amiga(int a =0)
    :dia(a)
    {
    }

    void imprime()
    {
        cout << dia;
    }
private:
    int dia;
    int mes;
    int ano;
};

void seta(amiga &a, int d, int m, int an)
{
    a.dia = d;
}

int main()
{
    amiga ac;
    cout << "Antes da funcao amiga: ";
    ac.imprime();
    seta(ac,8,11,2000);
    cout << "\nApos funcao amiga: ";
    ac.imprime();
    cout << "\n---------------------------------------------------------------";
    return 0;
}
