#include "Jogador.hpp"

void Jogador::SetPlayer(string nome, char simbolo)
{
    this->nome = nome;
    this->simbolo = simbolo;
}

string Jogador::GetNome()
{
    return nome;
}

char Jogador::GetSimbolo()
{
    return  simbolo;
}
