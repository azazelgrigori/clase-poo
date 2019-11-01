#include <iostream>
#include <stdlib.h>

using namespace std;

class Point{
    private:
    int x,y;
    public:
        Point();
        void setPoint(int,int); //setters-establecer valores de nuestro atributos
        int getPointX(); //getters-mostrar valores de mi atributo
        int getPointY(); //getters-mostrar valores de mi atributo

};

Point::Point()
{

}

void Point::setPoint(int _x, int _y)
{
    x = _x;
    y = _y;
    
}

int Point::getPointX()
{
    return x;
}

int Point::getPointY()
{
    return y;
}


int main()
{
    Point point1;

    point1.setPoint(5,12);
    cout<<"el valor de el punto x es "<<point1.getPointX()<<endl;
    cout<<"el valor de el punto y es "<<point1.getPointY()<<endl;



    system("pause");
    return 0;
}