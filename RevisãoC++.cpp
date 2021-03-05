#include <iostream>
using namespace std;

void Exercicio1()
{
    // Inverte o valor de X e de Y
    
    int x;
    int y;
    
    cout << "Informe um valor para X e um para Y: ";
    cin >> x;
    cin >>y;
    
}

void Exercicio2e3()
{
    int n1;
    int n2;
    
    cout << "Informe dois numeros: ";
    cin >> n1;
    cin >> n2;
    
    // n1 pode ser o menor
    if(n1 < n2)
        cout << "O primeiro valor eh o menor: " << n1 << endl;
    // n2 pode ser o menor
    else if (n2 < n1)
        cout << "O segundo valor eh o menor: " << n2 << endl;
    // numeros iguais
    else
        cout << "Os numeros sao iguais\n";
}

void Exercicio4()
{
    // Ler e acumular a soma de valores informados pelo usuario ateh que seja informado 0;
}

void Exercicio5()
{
    // Jovem, Adulto, Idoso?
    
}

void Exercicio6()
{
    // Receber 10 valores, e após, imprimir o maior e o menor
    int maior = 0;
    int menor = 0;
    int atual;
    
    for(int i=1; i<= 10; i++)
    {
        cout << "Informe o valor " << i << ": ";
        cin >> atual;
        
        if(i == 1)
        {
            maior = atual;
            menor = atual;
        }
        else
        {
            if(atual < menor)
                menor = atual;
            
            if(atual > maior)
                maior = atual;
        }
    }
    cout << "Maior valor: " << maior << endl;
    cout << "Menor Valor: " << menor << endl;
}

int main()
{
    int ex;
    
    cout << "Escolha o Exercicio (1 - 6): ";
    cin >> ex;
    
    switch(ex)
    {
        case 1:
            break;
        case 2:
        case 3:
            Exercicio2e3();
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            Exercicio6();
            break;
    }
    
}
