//
//  main.cpp
//  HerancaPessoa
//
//  Created by Vinicius Cassol on 20/05/21.
//

#include "Funcionario.hpp"

int main() {

    string n;
    
    Funcionario func;
    cout << "Informe o nome do funcionario: ";
    cin >> n;
    
    func.setNome(n);
    
    cout << "Bem-Vindo, "<< func.getNome() << endl;
    
    return 0;
}
