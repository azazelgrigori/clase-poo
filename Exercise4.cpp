#include <iostream>

using namespace std;

class Carro{
    //atributos
    private:
        char marca[15];
        char modelo[15]:
        int ano[4];
        int precio[7];
    //metodos
    public:
        Carro(char,char,int,int); //constructor
        void presumir();
};

Carro::Carro(char a[15], char b[15], int c[4], int d[7]){
    marca = a;
    modelo = b;
    ano = c;
    precio = d;

}

void Carro::presumir(){
    cout<<"mi carro es marca"<<marca<<"de modelo"<<modelo<<"del año"<<ano<<"y me costo"<<precio<<"no la armas"<<endl;
}

int main(){

   Carro acarro("dodge","charger","2020","957000");

    acarro.presumir();

    
    system("pause");
    cout<<"presiona cualquier tecla para salir"
     return 0;

}