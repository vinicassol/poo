#ifndef ListaDeAlunos_hpp
#define ListaDeAlunos_hpp

#include "Aluno.hpp"
#include <vector> // vetor dinamico

class ListaDeAlunos
{
public:
    void adicionaAluno(string nome);
    void removeAluno(string nome);
    void removeAluno(int numMatricula);
    void imprimeLista();
    int getMatricula(string nome);
private:
    //vetor dinamico de alunos
    vector<Aluno> alunos;
};

#endif /* ListaDeAlunos_hpp */
