#include "Turma.hpp"

Turma::Turma(string disciplina)
{
    nomeDisciplina = disciplina;
}

void Turma::adicionaAluno(int numMatricula)
{
    matriculados.push_back(numMatricula);
}

void Turma::detalhes()
{
    cout << nomeDisciplina << ": " << matriculados.size() << " alunos matriculados:\n";
    
    for(int i=0; i<matriculados.size(); i++)
    {
        cout << matriculados[i] << endl;
    }
    
}
