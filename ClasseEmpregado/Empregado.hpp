//
//  Empregado.hpp
//  Empregados
//
//  Created by Marcos Carvalho on 09/03/21.
//
#include <iostream>
using namespace std;

class Empregado
{
    public:
        Empregado(string n, string sn, float s);
        string dadosEmpregado();
        string getNome();
        string getSobrenome();
        float getSalarioAnual();
        float getSalario();
        void setNome(string n);
        void setSobrenome(string sn);
        void setSalario(float s);
        void aumentarSalario(int qtd);
        
    private:
        string nome;
        string sobrenome;
        float salarioMensal;
};
