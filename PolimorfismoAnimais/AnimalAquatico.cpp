
#include "AnimalAquatico.hpp"

void AnimalAquatico::setGelra(bool g)
{
    temGelra = g;
}

void AnimalAquatico::movimentar()
{
    cout << nome << " estah nadando! \n";
}

void AnimalAquatico::comer()
{
    cout << nome << " estah comendo algas \n";
}
