//
//  disciplina.hpp
//  CalculoNotas
//
//  Created by Vinicius Cassol on 17/04/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//


#include "aluno.hpp"

class Disciplina
{
public:
    
    Disciplina(string n);
    void incluiAlunos();
    void imprimeNotasFinais();
    
private:
    string nome;
    Aluno alunos[7];
    
};
