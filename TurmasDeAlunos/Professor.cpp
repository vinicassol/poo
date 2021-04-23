#include "Professor.hpp"

int Professor::proximoNumMatricula = 0;

Professor::Professor(string nome)
{
    this->nome = nome;
    numMatricula = ++proximoNumMatricula;
}

void Professor::imprime()
{
    cout << "Professor matricula " << numMatricula <<": " << nome << endl;
}

int Professor::getMatricula()
{
    return numMatricula;
}

string Professor::getNome()
{
    return nome;
}
