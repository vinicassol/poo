#include "Jogador.hpp"

class JogoDaVelha
{
public:
    JogoDaVelha();
    void Jogar();
    
private:
    void DefinirPlayers();
    void ExibirGrade();
    bool VerificarVitoria(char s);
    bool RealizarJogada(int l, int c, char valor);
    
    Jogador j[2];
    char grade[3][3];
    bool temVencedor;
    int numJogadas;
    int jogadorDaVez;
    
};
