#include "Turma.hpp"

Turma::Turma(string disciplina)
{
    nomeDisciplina = disciplina;
}

void Turma::adicionaAluno(int numMatricula)
{
    matriculados.push_back(numMatricula);
}

void Turma::adicionaProfessor(int numMatricula)
{
    professores.push_back(numMatricula);
}

void Turma::detalhes()
{
    cout << nomeDisciplina << ": \n";
    
    cout << "Professor(es):\n";
    for (int i=0; i< professores.size(); i++)
    {
        cout << professores[i] << endl;
    }
    
    cout << matriculados.size() << " alunos matriculados:\n";
    for(int i=0; i<matriculados.size(); i++)
    {
        cout << matriculados[i] << endl;
    }
}

void Turma::setRecursos(int qtdComp, int qtdProj, int qtdAc)
{
    recursos.setComputadores(qtdComp);
    recursos.setProjetores(qtdProj);
    recursos.setArCondicionado(qtdAc);
}

void Turma::displayRecursos()
{
    cout << "Recursos Necessarios:\n";
    cout << recursos.getComputadores() << " computador(es).\n";
    cout << recursos.getProjetores() << " projetor(es).\n";
    cout << recursos.getArCondicionado() << " aparelho(s) de AC. \n\n";
}
