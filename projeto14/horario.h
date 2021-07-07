
#ifndef HORARIO_H
#define HORARIO_H
class Horario
{
public:
Horario( int = 0, int = 0, int = 0 );
Horario &setHorario( int, int, int );
Horario &setHora( int );
Horario &setMinuto( int );
Horario &setSegundo( int );
void imprime();
private:
int hora;
int minuto;
int segundo;
};
#endif
