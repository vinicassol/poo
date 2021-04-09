#include"Ponto.hpp"

class Linha
{
public:
    //definir os pontos
    void Configurar();
    
    //mostrar os pontos
    void Mostrar();
    
private:
    Ponto pontos[2];
};
