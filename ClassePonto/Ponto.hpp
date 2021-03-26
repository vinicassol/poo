#include <iostream>
using namespace std;

class Ponto
{
public:
    Ponto();
    Ponto(float a, float b);
    void atualiza(float a, float b);
    void mostra();
    void setX(float n);
    void setY(float n);
    float getX();
    float getY();
    float distancia (Ponto p);
private:
    float x;
    float y;
};
