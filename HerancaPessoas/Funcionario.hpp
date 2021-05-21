//
//  Funcionario.hpp
//  HerancaPessoa
//
//  Created by Vinicius Cassol on 20/05/21.
//

#ifndef Funcionario_hpp
#define Funcionario_hpp
#include "Pessoa.hpp"
// Todo funcionario eh uma pessoa

/*
 SEMPRE HERDAMOS O QUE É PUBLICO E PROTEGIDO NA CLASSE BASE, porém, a forma que se comportam na classe derivada muda:
 public: espelho da base (publico fica public e protected fica protected tb na derivada)
 protected: os membros herdados viram protected na classe derivada
 private: os membros herdados viram private na classe derivada
 */
class Funcionario : public Pessoa
{
public:
    Funcionario(){};
    void Detalhes();
private:
    string depto;
    string matricula;
};

#endif /* Funcionario_hpp */
