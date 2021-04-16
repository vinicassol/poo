#ifndef Aluno_hpp
#define Aluno_hpp

#include<iostream>
using namespace std;

class Aluno
{
public:
    Aluno(string nome);
    void imprime();
    string getNome();
    int getMatricula();
    
private:
    string nome;
    int numMatricula;
    
    // São usados para gerar automaticamente um numero
    // de matricula diferente para cada objeto da classe
    int static ultimoNumMatricula;
    int geraNumMatricula();
    
};

#endif /* Aluno_hpp */
