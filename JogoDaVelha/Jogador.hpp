#include <iostream>
using namespace std;

class Jogador
{
public:
    void SetPlayer(string nome, char simbolo);
    string GetNome();
    char GetSimbolo();
private:
    char simbolo; // se eh X ou O
    string nome;
};
