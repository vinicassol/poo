#include "Triangulo.hpp"

void Triangulo::Configurar()
{
    int x, y;
    for(int i=0; i<3; i++)
    {
        cout << "Informe as coordenadas X,Y do ponto " << i+1 << ": ";
        cin >> x >> y;
        
        pontos[i].atualiza(x, y);
    }
}

void Triangulo::Mostrar()
{
    cout << "Pontos que compoem esta linha: \n";
    
    for(int i=0; i<3; i++)
    {
        pontos[i].mostra();
    }
}
