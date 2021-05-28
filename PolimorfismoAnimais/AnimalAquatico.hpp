#include "Animal.hpp"

#ifndef AnimalAquatico_hpp
#define AnimalAquatico_hpp

// POLIMORFISMO: uma classe herdeira pode se comportar diferente do conceito "tradicional

class AnimalAquatico : public Animal
{
public:
    void movimentar();
    void setGelra(bool g);
    void comer();
    
private:
    bool temGelra;
};

#endif /* AnimalAquatico_hpp */
