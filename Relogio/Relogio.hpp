#include <iostream>
using namespace std;

class Relogio
{
	public:
		void getHora();
		void setHora(int h, int m, int s);
		void avancar();
		
	private:
		int horas;
		int minutos;
		int segundos; 
};
