#include "Cachorro.h"

//implementação do cosntrutor
Cachorro::Cachorro(string nome, string raca, string cor)
{
  this->nome = nome;
  this->raca = raca;
  this->cor = cor;
}

void Cachorro::Latir()
{
  cout << nome << " (" << raca << ") estah latindo.\n";
}

void Cachorro::Comer()
{
  cout << nome << " estah comendo.\n";
}

void Cachorro::Correr()
{
  cout << nome << " estah correndo\n";
}