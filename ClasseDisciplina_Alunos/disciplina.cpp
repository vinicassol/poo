//
//  disciplina.cpp
//  CalculoNotas
//
//  Created by Vinicius Cassol on 17/04/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#include "disciplina.hpp"

Disciplina::Disciplina(string n)
{
    nome = n;
}

void Disciplina::incluiAlunos()
{
    alunos[0].setAluno("Huguinho", 8, 6);
    alunos[1].setAluno("Zezinho", 5, 9);
    alunos[2].setAluno("Luizinho", 7, 7);
}

void Disciplina::imprimeNotasFinais()
{
    cout << "Relatorio de notas e alunos \n\n";
    for (int i=0; i<3; i++)
    {
        alunos[i].imprimeGrauFinal();
    }
}
