#include "ListaDeAlunos.hpp"
#include "ListaDeProfessores.hpp"
#include "Turma.hpp"


int main()
{
    ListaDeAlunos la;
    ListaDeProfessores lp;
    
    la.adicionaAluno("Eduardo");
    la.adicionaAluno("Marcos");
    la.adicionaAluno("Joao");
    la.adicionaAluno("William");
    la.adicionaAluno("Ricardo");
    la.adicionaAluno("Carlos");
    la.imprimeLista();
    
    lp.adicionaProfessor("Vini");
    lp.adicionaProfessor("Emmanuel");
    lp.adicionaProfessor("Felipe");
    lp.imprimeLista();

    
    Turma poo("Prog. Orientada Objetos");
    poo.adicionaProfessor(lp.getMatricula("Vini"));
    poo.setRecursos(36, 1, 2);
    
    Turma bd("Banco de Dados");
    bd.adicionaProfessor(lp.getMatricula("Emmanuel"));
    bd.adicionaProfessor(lp.getMatricula("Felipe"));
    bd.setRecursos(50, 2, 2);
    
    poo.adicionaAluno(la.getMatricula("Ricardo"));
    poo.adicionaAluno(la.getMatricula("Joao"));
    poo.adicionaAluno(la.getMatricula("Carlos"));
    
    
    bd.adicionaAluno(la.getMatricula("Eduardo"));
    bd.adicionaAluno(la.getMatricula("Carlos"));
    
    poo.detalhes();
    poo.displayRecursos();
    
    bd.detalhes();
    bd.displayRecursos();
    
    return 0;
}
