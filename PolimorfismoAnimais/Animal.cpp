//
//  Animal.cpp
//  HerancaPessoa
//
//  Created by Vinicius Cassol on 27/05/21.
//

#include "Animal.hpp"

void Animal::fazerBarulho()
{
    cout << "Animal estah fazendo barulho\n";
}
/*
 ESTE METODO PRECISA SER REIMPLEMENTADO NAS CLASSES HERDEIRAS, pois eh um metodo virtual puro
 void Animal::comer()
{
    cout << "Animal estah comendo\n";
}*/

void Animal::dormir()
{
    cout << "Animal estah dormindo\n";
}

void Animal::movimentar()
{
    cout << nome << " estah se movimentando\n";
}

void Animal::setNome(string n)
{
    nome = n;
}
void Animal::setEspecie(string n)
{
    especie = n;
}
