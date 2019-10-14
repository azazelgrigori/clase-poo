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



int main(){


    system("pause");
    return 0;
}