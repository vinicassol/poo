#include "Data.hpp"

int main()
{
    Data hoje;
    Data ontem(3,3,2021);

    
    hoje.setDia(4);
    hoje.setMes(3);
    hoje.setAno(2021);
    
    ontem.toString();
    hoje.toString();
    
    return 0;
}

