//sobrecarga de constructores
#include <iostream>
#include <stdlib.h>

using namespace std;

class Time{
    private:
        int horas, minutos, segundos;
    public:
       Time(int,int,int);
       Time(int);
       void showTime();
};

Time::Time(int_hora, int_minutos, int_segundos)
{
    horas = _horas;
    minutos = _minutos;
    segundos = _segudos:
}

Time::Time(int timeSec/3600);
{
    horas = timeSec/3600;
    timeSec %= 3600;
    minutos = timeSec/60;
    segundos = timeSec % 60;
}
void Time::showTime()
{
    cout<<"la hora es:"<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int main()
{
    Time horaActual(07, 37, 30);
    
    horaActual.showTime();
    
    horas.showTime();
    
    system("pause");

    return 0;

}