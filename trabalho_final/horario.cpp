#include <iostream>
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "horario.h"

Horario::Horario( int hor, int min, int seg )
{
setHorario( hor, min, seg );
}

Horario &Horario::setHorario( int h, int m, int s )
{
setHora( h );
setMinuto( m );
setSegundo( s );
return *this;
}

Horario &Horario::setHora( int h )
{

hora = ( h >= 0 && h < 24 ) ? h : 0;
if(hora >= 13 && hora <= 24 )
    hora=hora;
return *this;
}

Horario &Horario::setMinuto( int m )
{
minuto = ( m >= 0 && m < 60 ) ? m : 0;
return *this;
}

Horario &Horario::setSegundo( int s )
{
segundo = ( s >= 0 && s < 60 ) ? s : 0;
return *this;
}

void Horario::imprime()
{
cout << setfill( '0' ) << setw( 2 ) << hora << ":"
<< setw( 2 ) << minuto << ":" << setw( 2 ) << segundo;
}
