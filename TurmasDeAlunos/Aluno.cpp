#include "Aluno.hpp"

int Aluno::ultimoNumMatricula = 0;

//construtor
Aluno::Aluno(string nome)
{
    //atributo da classe = parametro do medtodo
    this->nome = nome;
    this->numMatricula = geraNumMatricula();
}

void Aluno::imprime()
{
    cout << numMatricula << " - " << nome << endl;
}

int Aluno::geraNumMatricula()
{
    ultimoNumMatricula++;
    return ultimoNumMatricula;
}

string Aluno::getNome()
{
    return nome;
}

int Aluno::getMatricula()
{
    return numMatricula;
}
