#include "Linha.hpp"

void Linha::Configurar()
{
    int x, y;
    
    for(int i=0; i<2; i++)
    {
        cout << "Informe as coordenadas X,Y do ponto " << i+1 << ": ";
        cin >> x >> y;
        
        pontos[i].atualiza(x, y);
    }
}

void Linha::Mostrar()
{
    cout << "Pontos que compoem esta linha: \n";
    
    for(int i=0; i<2; i++)
    {
        pontos[i].mostra();
    }
}
