//
//  Animal.hpp
//  HerancaPessoa
//
//  Created by Vinicius Cassol on 27/05/21.
//

#include <iostream>
using namespace std;

#ifndef Animal_hpp
#define Animal_hpp

// Quando uma classe possuiur pelo menos um metodo virtual puro, ela passa a ser uma CLASSE ABSTRATA e não sera mais possivel instancia-la

class Animal{
public:
    void fazerBarulho();
    virtual void comer() = 0; // metodo virtual puro. Obrigatoriamente deve ser implementado nas herdeiras
    
    void dormir();
    virtual void movimentar(); //metodo virtual pode ser re-implementado na classe derivada
    void setNome(string n);
    void setEspecie(string n);
    
protected:
    string especie;
    double tamanho;
    double peso;
    int idade;
    string nome;
};

#endif /* Animal_hpp */
