#include <iostream>
#include <string.h>

using namespace std;

class Menu(){
    private:
    string agregar;
    string editar;
    string eliminar;
    public:
     Menu(string,string,string);
     void imprimir();

}

Menu::Menu(string a, string b, string c){
    agregar = a;
    editar = b;
    eliminar = c;

}

void Menu::imprimir(){
    cout<<agregar<<endl;
    cout<<editar<<endl;
    cout<<eliminar<<endl;
}

int main(){

    Menu amenu();

    amenu.imprimir();
    
    
    
    system("pause");
     return 0;
}