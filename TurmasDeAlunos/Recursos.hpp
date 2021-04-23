#ifndef Recursos_hpp
#define Recursos_hpp

//Classe para controlar os recursos necessarios em uma atividade (turma)

class Recursos
{
public:
    Recursos();
    void setComputadores(int n);
    void setProjetores(int n);
    void setArCondicionado(int n);
    
    int getComputadores();
    int getProjetores();
    int getArCondicionado();
    
private:
    int computadores;
    int projetores;
    int arCondicionado;
};

#endif /* Recursos_hpp */
