#include <iostream>

using namespace std;

//haciendo una clase
class Fecha{
    //atributos
    private:
        int dia, mes, ano;
    //metodos
    public:
        Fecha(char [8]);//constructor
        void mostrar();
};

Fecha::Fecha(char fecha[]){  //11102019 //salida 11/10/2019
    dia = ((fecha[0]-'0')*10)+(fecha[1]-'0');
    mes = ((fecha[2]-'0')*10)+(fecha[3]-'0');
    ano = ((fecha[4]-'0')*1000)+(fecha[5]-'0')*100)+((fecha[6]-'0')*10)+(fecha[7]-'0');

}
 //metodo mostrar 
void Fecha::mostrar(){
    
    cout<<"la fecha es: "<<dia<<" / "<<mes<<" / "<<ano<<endl;
}


int main(){

    Fecha afecha = Fecha("18102019"); //objeto 1
    Fecha bfecha("24052018"); //objeto 2 manera de declarar diferente
 
 //se aplican metodos en el objeto
    afecha.mostrar();
    bfecha.mostrar();
//terminamos
    system("pause");
    cout<<"presiona cualquier tecla para terminar";
    return 0;
}