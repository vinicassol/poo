#include "Carro.hpp"

int main()
{
    //classe e objeto
    Carro pobre("Fiat 147", "Branco", 2);
    Carro rico("Porsche", "Cinza", 2);
    
    
    rico.Ligar();
    pobre.Ligar();
    pobre.Acelerar();
    pobre.Acelerar();
    pobre.Acelerar();
    rico.Acelerar();
    rico.Frear();
    pobre.Frear();
    rico.Desligar();
    pobre.Desligar();
    
    return 0;
}
