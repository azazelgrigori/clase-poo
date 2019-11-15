#include <iostream>
#include <stdlib.h>

using namespace std;

class person
{
private:
    string name
    int age;
public:
    person(string, int);
    virtual void show();
};

class student : public person
{
private:
    float finalNote;
public:
    student(string, int, float);
    void show();
};

class Teacher : public person
{
    private:
    string subject;
    public:
    Teacher(string, int, string)
    void show();
};




Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}

void Person::show()
{
    cout<<"nombre: " << name <<endl;
    cout<<"edad: "<< age <<endl;
}

student::student(string _name, int _edad, float _finalNote) : person(_name, _age)
{
    finalNote = _finalNote;
}

void student::show()
{
    person::show();
    cout<< "nota final: " << finalNote << endl;
}

Teacher::Teacher(string _name, int _age, string _subject) : person(_name, _age)
{
    subject=_subject;
}

void Teacher::show()
{
    person::show()
    cout<<"materia: " << subject << endl;
}

int main()
{
    Person *dani[3];

    dani[0] = new student("",,)



system("pause")
return 0;

}