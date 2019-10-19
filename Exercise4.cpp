#include <iostream>
#include <string.h>

using namespace std;

class Carro{
    //atributos
    private:
        string marca;
        string modelo:
        int ano;
        int precio;
    //metodos
    public:
        Carro(string,string,int,int); //constructor
        void presumir();
};

Carro::Carro(string a, string b, int c, int d){
    marca = a;
    modelo = b;
    ano = c;
    precio = d;

}

void Carro::presumir(){
    cout<<" mi carro es marca "<<marca<<" de modelo "<<modelo<<" del año "<<ano<<" y me costo "<<precio<<" no la armas "<<endl;
}

int main(){

   Carro acarro("dodge","charger",2020,957000);
   Carro bcarro("dodge","durango",2020,1350540);

    acarro.presumir();
    bcarro.presumir();
    
    system("pause");
     return 0;

}