#include "Ponto.hpp"

Ponto::Ponto()
{
    x = 0;
    y = 0;
}

Ponto::Ponto(float a, float b)
{
    x = a;
    y = b;
}

void Ponto::atualiza(float a, float b)
{
    x = a;
    y = b;
}

void Ponto::mostra()
{
    cout << "X: " << x << " - Y: " << y <<endl;
}

void Ponto::setX(float n)
{
    x = n;
}

void Ponto::setY(float n)
{
    y = n;
}

float Ponto::getX()
{
    return x;
}

float Ponto::getY()
{
    return y;
}

float Ponto::distancia(Ponto p)
{
    return sqrt(pow((x - p.getX()),2) + pow((y - p.getY()),2));
}
