#include "Ponto.hpp" //Interface da classe ponto

int main()
{
    Ponto p1(0.5, 0.5);
    Ponto p2(8, 9.5);
    
    cout << "Distancia entre os dois pontos: " << p1.distancia(p2) << endl;
    return 0;
}
