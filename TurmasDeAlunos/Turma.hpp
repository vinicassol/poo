

#ifndef Turma_hpp
#define Turma_hpp
#include <iostream>
#include <vector>
using namespace std;

class Turma
{
    
public:
    Turma(string disciplina);
    void adicionaAluno(int numMatricula);
    void detalhes();
private:
    string nomeDisciplina;
    vector <int> matriculados;
    //vector <int> Professores;
    
    
};

#endif /* Turma_hpp */
