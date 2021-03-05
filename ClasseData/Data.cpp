#include "Data.hpp"

Data::Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;
}
void Data::setDia(int d)
{
    dia = d;
}
void Data::setMes(int m)
{
    mes = m;
}
void Data::setAno(int a)
{
    ano =a;
}
void Data::toString()
{
    cout << dia << "/" << mes << "/" << ano << endl;
}
