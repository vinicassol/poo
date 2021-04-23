
#ifndef Professor_hpp
#define Professor_hpp

#include <iostream>
using namespace std;

class Professor
{
public:
    Professor(string nome);
    void imprime();
    int getMatricula();
    string getNome();

    
private:
    string nome;
    int numMatricula;
    
    //Atributo de Classe
    int static proximoNumMatricula;
    
};

#endif /* Professor_hpp */
