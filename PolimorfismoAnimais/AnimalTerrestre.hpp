#include "Animal.hpp"

#ifndef AnimalTerrestre_hpp
#define AnimalTerrestre_hpp

class AnimalTerrestre : public Animal {
public:
    void setNumPatas(int n);
    void comer();
private:
    int numPatas;
};

#endif /* AnimalTerrestre_hpp */
