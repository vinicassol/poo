#include <iostream>
using namespace std;

class Data
{
public:
    
    Data(){}; // Construtor Padrão
    Data(int d, int m, int a); //construtor personalizado
    void toString();
    void setDia(int d);
    void setMes(int m);
    void setAno(int a);
    int getDia() {return dia;};
    int getMes() {return mes;};
    int getAno() {return ano;};
    
private:
    int dia;
    int mes;
    int ano;
};
