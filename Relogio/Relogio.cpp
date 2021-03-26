#include "Relogio.hpp"

void Relogio::setHora(int h, int m, int s)
{
	horas = h;
	minutos = m;
	segundos = s;
}

void Relogio::getHora()
{
	cout << horas << ":" << minutos << ":" << segundos << endl;
}

void Relogio::avancar()

{
	segundos++;

	if(segundos > 59)
	{
		segundos = 00;
		minutos++;
	}

	if(minutos > 59)
	{
		minutos = 00;
		horas++;
	}

	horas = horas > 23 ? 00 : horas;
}
