#include <iostream>
#include <stdlib.h>

using namespace std;

class Person //CLASE PADRE
{
    private://atributos
    string name;
    int age;
    public://metodos
    Person(string, int);
    void showPerson();
};

class Student : public Person//CLASE HIJA   
{
    private:
        string sudentCode;
        float finalNote;
    public:
        Student(string, int, string, float);
        void showStudent();
};

Person::Person(string _name, int _age)
{
    name = _name
    age = _age
}

Student::Student(string _name, int _age, string _studentcode, float _finalnote) : Person (_name,_age)
{
    studentCode = _studentCode
    finalNote = _finalNote
}

void Person::showPerson()
{
    cout<<"el nombre es: "<<_name<<endl;
    cout<<"la edad es: "<<_age<<endl;
}

void Student::showStudent()
{
    cout<<"el codigo es: "<<_studentCode<<endl;
    cout<<"la nota final es: "<<_finaNote<<endl;
}

int main()
{
    Student student_obj("gus",25,"1232134531",95.7):

    student_obj.showPerson()
    student_obj.showStudent()s


    system("pause");
    return 0;
}