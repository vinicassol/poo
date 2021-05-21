//
//  Pessoa.cpp
//  HerancaPessoa
//
//  Created by Vinicius Cassol on 20/05/21.
//

#include "Pessoa.hpp"

Pessoa::Pessoa()
{
    
}

Pessoa::Pessoa(string nome, string rg, string email, char sexo)
{
    this->nome = nome;
    this->rg = rg;
    this->email = email;
    this->sexo = sexo;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

string Pessoa::getNome()
{
    return nome;
}
string Pessoa::getRg()
{
    return rg;
}

string Pessoa::getEmail()
{
    return email;
}
char Pessoa::getsexo()
{
    return sexo;
}
