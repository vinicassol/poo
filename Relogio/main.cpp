#include "Relogio.hpp"
#include <windows.h>

int main()
{
	Relogio r;
	
	r.setHora(23,59,50);
	
	for (int i=1;i<1300;i++)
	{
        system("cls");
        r.avancar();
        r.getHora();
        Sleep(1000);
	}
	
	return 0;
}
