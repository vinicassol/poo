//
//  Empregado.cpp
//  Empregados
//
//  Created by Marcos Carvalho on 09/03/21.
//

#include "Empregado.hpp"
Empregado::Empregado(string n, string sn, float s)
{
    nome = n;
    sobrenome = sn;
    salarioMensal = s >= 0 ? s : 0.0;
}

string Empregado::dadosEmpregado()
{
    return "Dados do funcionário: \nNome: " + nome + " " + sobrenome + "\nSalário mensal: R$ " + to_string(salarioMensal) + "\nSalário anual: R$ " + to_string(getSalarioAnual()) + "\n\n";
}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

float Empregado::getSalario()
{
    return salarioMensal;
}

void Empregado::setNome(string n)
{
    nome = n;
}

void Empregado::setSobrenome(string sn)
{
    sobrenome = sn;
}

void Empregado::setSalario(float s)
{
    salarioMensal = s >= 0 ? s : 0.0;
}

void Empregado::aumentarSalario(int qtd)
{
    salarioMensal = salarioMensal > 0 && qtd > 0 ? salarioMensal + (salarioMensal * qtd) / 100 : 0.0;
}

float Empregado::getSalarioAnual()
{
    return  salarioMensal * 12;
}
