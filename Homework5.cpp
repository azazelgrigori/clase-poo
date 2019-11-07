#include <iostream>
#include <stdlib.h>


using namespace std;

class Producto{
    private:
    string nombre;
    int precio;
    public:
     Producto();
        void setProducto(string,int); //setters-establecer valores de nuestro atributos
        string getProductonombre(); //getters-mostrar valores de mi atributo
        int getProductoprecio(); //getters-mostrar valores de mi atributo
};

Producto::Producto()
{

}

void Producto::setProducto(string _nombre, int _precio)
{
    nombre = _nombre;
    precio = _precio;
    
}

string Producto::getProductonombre()
{
    return nombre;
}

int Producto::getProductoprecio()
{
    return precio;
}


int main()
{
    Producto producto1;

    producto1.setProducto("perfume paco rabanne",1350);
    cout<<"el producto es un "<<producto1.getProductonombre()<<endl;
    cout<<" y tiene un precio de "<<producto1.getProductoprecio()<<endl;



    system("pause");
    return 0;
}