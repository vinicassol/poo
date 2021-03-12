//
//  aluno.hpp
//  CalculoNotas
//
//  Created by Vinicius Cassol on 17/04/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.

#include <iostream>
#include <string>
using namespace std;

class Aluno
{
public:
    Aluno(); // construtor
    void setGrauA(float n);
    void setGrauB(float n);
    void setAluno(string n, float ga, float gb);
    void calculaGrauFinal();
    void imprimeGrauFinal();
    
private:
    string nome;
    float grauA, grauB, grauFinal;
};

