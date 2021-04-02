#include "Participante.hpp"

int Participante::s_contaId=0;

Participante::Participante(string nome)
{
    id = GerarProximoId();
    this->nome = nome;
}

int Participante::GerarProximoId()
{

    return ++Participante::s_contaId;
}

void Participante::Detalhes()
{
    cout << id << " - " << nome << endl;
}

int Participante::numParticipantes()
{
    return Participante::s_contaId;
}
