#include "Participante.hpp"
#include <iostream>
using namespace std;



void estaticas()
{
    
    int normal = 1;
    int static estatica = 1;
    cout << "Variavel Normal: " << normal << endl;
    cout << "Variavel Estatica: " << estatica << endl;
    normal ++;
    estatica++;
}

struct Pessoa
{
    int id;
    string nome;
};

int geraId()
{
    int static s_id = 0;
    return ++s_id;
}

int main()
{
//######### AULA PARTE 1 ##########################
    estaticas();
    estaticas();
    estaticas();
    
//######### AULA PARTE 2 ##########################
    Pessoa pessoas[4];
    
    pessoas[0].nome = "Abgail";
    pessoas[0].id = geraId();
    
    pessoas[1].nome = "Bernadete";
    pessoas[1].id = geraId();
    
    pessoas[2].nome = "Cassandra";
    pessoas[2].id = geraId();
    
    pessoas[3].nome = "Dercy";
    pessoas[3].id = geraId();
    
    for(int i=0; i< 4; i++)
    {
        cout << pessoas[i].id << " - " << pessoas[i].nome << endl;
    }
    
//######### AULA PARTE 3 ##########################
    
    Participante a("Ana");
    Participante b("Bruno");
    Participante c("Carla");
    Participante d("Daniel");
    Participante e("Elias");
    
    
    a.Detalhes();
    b.Detalhes();
    c.Detalhes();
    d.Detalhes();
    e.Detalhes();

//######### AULA PARTE 4 ##########################
    cout << "Participantes no chat: " << Participante::numParticipantes() << endl;
}
