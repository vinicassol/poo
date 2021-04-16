#include "ListaDeAlunos.hpp"

void ListaDeAlunos::adicionaAluno(string nome)
{
    alunos.push_back(Aluno(nome));
}

void ListaDeAlunos::imprimeLista()
{
    for(int i=0; i < alunos.size(); i++)
    {
        //Imprimir os detalhes de cada aluno
        alunos[i].imprime();
    }
}

int ListaDeAlunos::getMatricula(string nome)
{
    for(int i=0; i< alunos.size(); i++)
    {
        if(alunos[i].getNome()==nome)
            return alunos[i].getMatricula();
    }
    return NULL;
}
