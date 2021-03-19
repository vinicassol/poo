#include <iostream>
using namespace std;

class Placa
{
public:
    void SetCor(string cor);
    void SetId(string id);
    void SetModelo(char modelo);
    
private:
    string cor;
    string id;
    char modelo; //'A'-antigo / 'N'-Brasil
};
