//
//  main.cpp
//  CalculoNotas
//
//  Created by Vinicius Cassol on 17/04/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#include "disciplina.hpp"

int main()
{
    Disciplina d("Algoritmos");
    
    d.incluiAlunos();
    d.imprimeNotasFinais();
    
    return 0;
}
