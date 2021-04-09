#include <iostream>
using namespace std;

//Para resolver problema de redefiniçao de classe
// Acontece quando diferentes classes incluem esta classe
#ifndef PONTO_H
#define PONTO_H

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

#endif
