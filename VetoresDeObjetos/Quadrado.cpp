
#include "Quadrado.hpp"

void Quadrado::Configurar()
{
    int x, y;
    for(int i=0; i<4; i++)
    {
        cout << "Informe as coordenadas X,Y do ponto " << i+1 << ": ";
        cin >> x >> y;
        
        pontos[i].atualiza(x, y);
    }
}

void Quadrado::Mostrar()
{
    cout << "Pontos que compoem esta linha: \n";
    
    for(int i=0; i<4; i++)
    {
        pontos[i].mostra();
    }
}
