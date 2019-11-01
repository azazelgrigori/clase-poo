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
    name = _nombre
    breed = _raza
}
Perro::~Perro()
{
    //este es el destructor aqui no se pone nada 
}

void Perro::showData()
{
    cout<<"nombre"<<name<<endl;
    cout<<"raza"<<breed<<endl;

}

void Perro::play()
{
    cout<<"el perro"<<name<<"esta jugando"<<endl;
}

int main()
{
    Perro perro1("zeus", "callejero");

    dog1.showData();
    dog1.play();
    dog1.~Perro();

    system("pause");
    return 0;

}