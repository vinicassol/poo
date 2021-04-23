#ifndef ListaDeProfessores_hpp
#define ListaDeProfessores_hpp

#include <vector>
#include "Professor.hpp"

class ListaDeProfessores
{
public:
    void adicionaProfessor(string nome);
    void imprimeLista();
    int getMatricula(string nome);
    
private:
    //Vetor com todos os professores da Universidade
    vector<Professor> professores;
};

#endif /* ListaDeProfessores_hpp */
