//
//  main.cpp
//  Empregados
//
//  Created by Marcos Carvalho on 09/03/21.
//

#include <iostream>
#include "Empregado.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Empregado empregado1("Fulano", "de Tal", 1200.00);
    Empregado empregado2("João", "da Silva", -150.99);
    
    
    cout << empregado1.dadosEmpregado();
    cout << empregado2.dadosEmpregado();
    
    empregado1.aumentarSalario(10);
    empregado2.aumentarSalario(90);
    
    cout << empregado1.dadosEmpregado();
    cout << empregado2.dadosEmpregado();
    
    
    return 0;
}
