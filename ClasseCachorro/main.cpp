#include "Cachorro.h"

int main() 
{
  //Criação de objetos
  Cachorro meuCao("Toby", "Vira Lata", "Preto");
  Cachorro caoDaAna("Amora", "Basset", "Marrom e Branco");

  meuCao.Latir();
  caoDaAna.Latir();
  caoDaAna.Comer();

}