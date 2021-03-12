#include "Carro.hpp"

Carro::Carro(string _tipo, string _cor, int _numPortas)
{
    tipo = _tipo;
    cor = _cor;
    numPortas = _numPortas;
    ligado = false;
    
    ConfiguraPlaca();
}

void Carro::ConfiguraPlaca()
{
    string placa, cor;
    char modelo;

    //solicita input de informações para o usuario
    cout << "Informe placa, cor e modelo de placa para o veiculo " << tipo << ": ";
    
    cin >> placa >> cor >> modelo;
    
    this->placa.SetId(placa);
    this->placa.SetCor(cor);
    this->placa.SetModelo(modelo);
    
}
void Carro::Ligar()
{
    if(!ligado)
    {
        ligado = true;
        cout << tipo << " acaba de ser ligado.\n";
    }
    else
        cout << tipo << " jah esta ligado.\n";
         
}
void Carro::Desligar()
{
    if(ligado) // se o carro estiver ligado
    {
        ligado = false;
        cout << tipo << " acabou de ser desligado.\n";
    }
    else
        cout << tipo << " ja se encontra desligado.\n";
}
void Carro::Acelerar()
{
    if(ligado)
        cout << tipo << " estah acelerando. \n";
    else
        cout << tipo << " esta desligado. Impossivel acelerar\n";
}
void Carro::Frear()
{
    if(ligado)
        cout << tipo << " esta freiando.\n";
    else
        cout << tipo << " esta desligado. Impossivel frear.\n";
}
