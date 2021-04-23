#ifndef Turma_hpp
#define Turma_hpp
#include <iostream>
#include <vector>
#include "Recursos.hpp"

using namespace std;

class Turma
{
    
public:
    Turma(string disciplina);
    void adicionaAluno(int numMatricula);
    void adicionaProfessor(int numMatricula);
    void detalhes();
    void setRecursos(int qtdComp, int qtdProj, int qtdAc);
    void displayRecursos();
    
private:
    Recursos recursos;
    string nomeDisciplina;
    vector <int> matriculados;
    vector <int> professores;
    
};

#endif /* Turma_hpp */
