#include <iostream>
#include <stdlib.h>

using namespace std;

class Person //clase padre
{
    private:
    string name;
    int age;
    public:
    Person(string, int);
    void showName();
    void showAge();

};

class Employe : public Person
{
    private:
    int sueldo;
    int codigoE;
    public:
    Employe(string,int,int,int)
    void showEmploye();
    void showData():
};

class Student : public Person
{
    private:
    string carrera;
    int codigo;
    int nota;
    public:
    student(string,int,string,int,int)
    void showStudent();
    void showNotes();
};

class College : public Student
{
    private:
    string car;
    int colegiatura;
    public:
    college(string,int,string,int,string,int,int)
    void showCollege();
    void showColegiatura();
};

Person::Person(string _name, int _age)
{
    name = _name
    age = _age
}

Employe::Employe(string _name, int _age, int sueldo, int codigoE) : Person (_name,_age)
{
    sueldo = _sueldo
    codigo = _codigoE
}

Student::Student(string _name, int _age, string _carrera, int _codigo, int _nota) : person (_name,_age)
{
    carrera = _carrera
    codigo = _codigo
    nota = _nota
}

College::College(string _name, int _age, string _carrera, int _codigo, int _nota, string _carro, int _colegiatura) : student (_carrera, _codigo, _nota, _name, _age)
{
    carro = _carro
    colegiatura= _colegiatura
}

void Person::showName()
{
    cout<<"el nombre es: "<<_name<<endl;
}

void Person::showAge()
{
    cout<<"la edad es: "<<_age<<endl;
}

void Employe::showEmploye()
{
    cout<<"el nombre del empleado es: "<<_name<<"su edad es: "<<_age<<endl;
}

void Employe::showData()
{
    cout<<"y este empleado gana: "<<_sueldo<<"por mes su codigo de empleado es: "<<_codigoE<<endl;
}

void Student::showStundent()
{
    cout<<"el alumno se llama: "<<_name<<"y tiene: "<<_age<<endl;
}

void Student::showNotes()
{
    cout<<"su codigo es: "<<_codigo<<" y su promedio es: "<<_nota<<endl;
}

void College::showCollege()
{
    cout<<"el auto del estudiante: "<<_name<<" es un: "<<_carro<<endl;
}

void College::showColegiatura()
{
    cout<<"la colegiatura mensual del alumno es: "<<_colegiatura<<endl;
}


int main()
{
    Person person1("hazael", 25)
    Employe employe1("hazael", 25, 20500, 435687)
    Student student1("hazael", 25, "software", 923487, 95)
    College college1("hazael", 25, "software", 923487, 95, "mazda 6", 30)

    person1.shownName()
    person1.showAge()

    employe1.showEmploye()
    employe1.showData()

    student1.showStudent()
    student1.showNotes()

    college1.showCollege()
    college1.showColegiatura()
    
    system("pause")
    return 0;
}