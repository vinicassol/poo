#include "ListaDeProfessores.hpp"

void ListaDeProfessores::adicionaProfessor(string nome)
{
    professores.push_back(Professor(nome));
}

void ListaDeProfessores::imprimeLista()
{
    for(int i=0; i<professores.size(); i++)
    {
        professores[i].imprime();
    }
}

int ListaDeProfessores::getMatricula(string nome)
{
    for(int i=0; i<professores.size(); i++)
    {
        if(professores[i].getNome() == nome)
        {
            return professores[i].getMatricula();
        }
    }
    return NULL;
}

