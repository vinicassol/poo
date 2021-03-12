//
//  aluno.cpp
//  CalculoNotas
//
//  Created by Vinicius Cassol on 17/04/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#include "aluno.hpp"

Aluno::Aluno()
{
    grauA = 0;
    grauB = 0;
    grauFinal = 0;
}

void Aluno::setAluno(string n, float ga, float gb)
{
    nome = n;
    grauA = ga;
    grauB = gb;
    calculaGrauFinal();
}

void Aluno::setGrauA(float n)
{
    grauA = n;
}

void Aluno::setGrauB(float n)
{
    grauB = n;
}

void Aluno::calculaGrauFinal()
{
    grauFinal = (grauA + 2*grauB)/3;
}

void Aluno::imprimeGrauFinal()
{
    cout << nome << ": " << grauFinal << endl;
}
