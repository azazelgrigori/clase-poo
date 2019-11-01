#include <iostream>
#include <stdlib.h>

using namespace std;

class Perro{
    private:
        string nombre, raza;//atributos
    public:
        Perro(string,string);//constructor
        ~Perro();//destructor
        void showData();//metodos
        void play();//metodos

};

Perro::Perro(string _nombre,string _raza)
{
    nombre = _nombre
    raza = _raza
}
Perro::~Perro()
{
    //este es el destructor aqui no se pone nada 
}

void Perro::showData()
{
    cout<<"nombre"<<nombre<<endl;
    cout<<"raza"<<raza<<endl;

}

void Perro::play()
{
    cout<<"el perro"<<nombre<<"esta jugando"<<endl;
}

int main()
{
    Perro perro1("zeus", "callejero");

    perro1.showData();
    perro1.play();
    perro1.~Perro();

    system("pause");
    return 0;

}