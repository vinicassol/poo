#include "ListaDeAlunos.hpp"
#include "Turma.hpp"

int main()
{
    ListaDeAlunos la;
    
    la.adicionaAluno("Eduardo");
    la.adicionaAluno("Marcos");
    la.adicionaAluno("Joao");
    la.adicionaAluno("William");
    la.adicionaAluno("Ricardo");
    
    //la.imprimeLista();
    
    Turma poo("Prog. Orientada Objetos");
    
    poo.adicionaAluno(la.getMatricula("Ricardo"));
    poo.adicionaAluno(la.getMatricula("Joao"));
    
    poo.detalhes();
    
    return 0;
}
