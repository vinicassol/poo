#include "PoligonoGenerico.hpp"

void PoligonoGenerico::Configurar()
{
    char continuar;
    do
    {
        double x, y;
        cout << "Informe as coordenadas X,Y do ponto: \n";
        cin >> x >> y;
        
        //ponto auxiliar para input de dados
        Ponto auxiliar;
        auxiliar.atualiza(x, y);
        
        //adiciona o ponto no vetor dinamico
        pontos.push_back(auxiliar);
        
        cout << "Deseja incluir outro ponto no seu poligono generico? (s/n)";
        cin >> continuar;
    }while(continuar != 'n');
}
//Mostrar todos os pontos que estão armazenados no vetor
void PoligonoGenerico::Mostrar()
{
    cout << "\nPoligono Generico Composto por " << pontos.size() << " pontos: \n";
    for(int i  = 0; i < pontos.size(); i ++)
    {
        pontos[i].mostra();
    }
}
