#include "JogoDaVelha.hpp"

JogoDaVelha::JogoDaVelha()
{
    //inicialização da grade vazia
    for(int linha=0; linha<3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna ++)
        {
            grade[linha][coluna] = ' ';
        }
    }
    
    temVencedor = false;
    numJogadas = 1;
    jogadorDaVez = 0;
}

void JogoDaVelha::ExibirGrade()
{
    for(int linha=0; linha<3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna ++)
        {
            cout << grade[linha][coluna];
            if(coluna!= 2)
                cout <<'|';
        }
        if(linha != 2)
            cout << "\n-----\n";
    }
    cout << endl;
}

bool JogoDaVelha::RealizarJogada(int l, int c, char valor)
{
    if(grade[l][c] == ' ')
    {
        grade[l][c] = valor;
        numJogadas++;
        return true;
    }
    else
        return false;
}

void JogoDaVelha::DefinirPlayers()
{
    string nome;
    char simbolo;
    
    cout << "Player 1, qual seu nome? ";
    cin >> nome;
    cout << "Player 1, qual simbolo vc vai usar? ";
    cin >> simbolo;
    j[0].SetPlayer(nome, simbolo);
    
    cout << "Player 2, qual seu nome? ";
    cin >> nome;
    cout << "Player 2, qual simbolo vc vai usar? ";
    cin >> simbolo;
    j[1].SetPlayer(nome, simbolo);
}

void JogoDaVelha::Jogar()
{
    DefinirPlayers();
    
    ExibirGrade();
    while(!temVencedor && numJogadas <= 9)
    {
        int l, c;
        
        
        cout << j[jogadorDaVez].GetNome() <<", defina posicao: " << endl;
        cin >> l >> c;
        
        
        if(!RealizarJogada(l,c,j[jogadorDaVez].GetSimbolo()))
        {
            cout << "Jogada Inválida, " << j[jogadorDaVez].GetNome() << "! Informe novamente: " << endl;
        }
        else
        {
            if(VerificarVitoria(j[jogadorDaVez].GetSimbolo()))
            {
                temVencedor = true;
            }

            if(!temVencedor)
            {
                if( jogadorDaVez == 0)
                    jogadorDaVez = 1;
                else
                    jogadorDaVez = 0;
            }
        }
        

        ExibirGrade();
        
    }
    ExibirGrade();
    
    if(temVencedor)
        cout << "Jogo com Vitorioso! Parabens " << j[jogadorDaVez].GetNome() << endl;
    else
        cout << " Empate.\n";
}

bool JogoDaVelha::VerificarVitoria(char s)
{
    //Verificar linhas iguais
    for(int i=0; i<3; i++)
    {
        //verificar se as 3 posicoes sao iguais
        if(grade[i][0]==s && grade[i][1] == s && grade[i][2] ==s)
            return true;
        else if(grade[0][i]==s && grade[1][i] == s && grade[2][i]==s)
            return true;
    }
    //testar diagonais
    if((grade[0][0]==s && grade[1][1]==s && grade[2][2] == s) || (grade[0][2]==s && grade[1][1] == s && grade[2][0]==s))
    {
        return true;
    }
  
    
    
    return false;
}
