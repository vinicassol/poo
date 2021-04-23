#include "Recursos.hpp"

Recursos::Recursos()
{
    computadores = 0;
    projetores = 0;
    arCondicionado = 0;
}

void Recursos::setComputadores(int n)
{
    computadores = n;
}

void Recursos::setProjetores(int n)
{
    projetores = n;
}
void Recursos::setArCondicionado(int n)
{
    arCondicionado = n;
}

int Recursos::getComputadores()
{
    return computadores;
}
int Recursos::getProjetores()
{
    return projetores;
}
int Recursos::getArCondicionado()
{
    return arCondicionado;
}
