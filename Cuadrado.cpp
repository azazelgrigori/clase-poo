#include <iostream>

using namespace std;

class Cuadrado{
        //Atributos
        private:
            float lado;
        //metodos
        public:
            Cuadrado (); // Constructor
            void perimetro();
            void area();
};

Cuadrado::Cuadrado(float _lado){
    lado = _lado;
}

void Cuadrado::perimetro()[{

    cout<<"El perimetro del cuadrado es: "<<lado*4<<endl;
}

void Cuadrado::area()[{

    cout<<"El area del cuadrado es: "<<lado*lado<<endl;
}
void pedir_datos(float &a){
    cout<<"ingrese el tamaño del lado del cuadrado";
    cin>>a;
}


int main(){
    float a;
    cout<<endl<<"calculo del perimetro y are de un cuadrado"<<endl<<endl;
    pedir_datos(a);

    system("clear");
    cuadro.perimetro();
    cout<<endl;
    cuadro.area();

    cin.ignore();
    cout<<endl<<"pulsa enter para seguir";
    cin.get();

    return 0;
}