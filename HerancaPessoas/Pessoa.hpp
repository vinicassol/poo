//
//  Pessoa.hpp
//  HerancaPessoa
//
//  Created by Vinicius Cassol on 20/05/21.
//

#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <iostream>
using namespace std;

class Pessoa
{
public:
    Pessoa();
    Pessoa(string nome, string rg, string email, char sexo);
    string getNome();
    string getRg();
    string getEmail();
    char getsexo();
    void setNome(string nome);
    
//Membros protegidos sao acessiveis também pelas classes herdeiras
protected:
    string rg;
    string nome;
    string email;
    char sexo;
    
};
#endif /* Pessoa_hpp */
