#include "Ponto.hpp"
#include <vector> // vetores dinamicos
/*
 Vector: biblioteca da STL
 STL: Standard Templates Library
 
 OUtras Bibliotecas:
 -> Stack - pilha
 -> Queue - Fila
 -> List - Lista
 -> Set - Conjuntos
 */

#ifndef PoligonoGenerico_hpp
#define PoligonoGenerico_hpp

class PoligonoGenerico
{
public:
    void Configurar();
    void Mostrar();
private:
    // Vetor dinamico de pontos
    vector<Ponto> pontos;
    
    //vector<int> vetorDeInt;
    //vector<string> vetorDeStrings;
};


#endif /* PoligonoGenerico_hpp */
