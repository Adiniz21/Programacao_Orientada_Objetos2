#include <iostream>
using std::cout;
using std::endl;
#include "horario.h"
int main()
{
Horario t;
t.setHora( 18 ).setMinuto( 30 ).setSegundo( 22 );
cout << "Horario: ";
t.imprime();
cout << endl << endl << "Novo horario: ";
t.setHorario( 20, 20, 20 ).imprime();
cout << endl;
return 0;
}
