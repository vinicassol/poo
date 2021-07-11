#include <iostream>
using namespace std;

class Cachorro
{
  public:
    Cachorro(string nome, string raca, string cor);
    void Latir();
    void Comer();
    void Correr();
  private:
    string raca;
    string nome;
    string cor;
};