#include <iostream>
using namespace std;

class Participante
{
    
public:
    int static numParticipantes();
    Participante(string nome);
    void Detalhes();
    
private:
    int static s_contaId;
    int GerarProximoId();
    
    int id;
    string nome;
};
