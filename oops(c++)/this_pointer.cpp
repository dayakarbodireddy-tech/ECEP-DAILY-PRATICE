//this pointer (to avoid name collision between object properties and parameterised variable)
//when object is cretaed using class at that one this pointer also cretaed automatically we dont bother about declaration about that
//syntax : this->object_properties=parameterised variable;
//here this pointer holds the object_properties current so compiler understands it is a object properties
#include<iostream>
using namespace std;
class students_info
{
    int id;
    string name;
    int dob;
public:
students_info(int id,string name,int dob)
{
    cout <<"Parameterised constructor called" <<endl;
    cout  <<"this pointer used" << endl;
    this->id=id;//this pointer
    this->name=name;
    this->dob=dob;
}
void display()
{
    cout << "Id is : " << id << endl
         << "Name is : " << name << endl
         << "dob is : " << dob << endl << endl;
}
};
int main()
{
    students_info s1(101,"daya",2003),s2(102,"reddy",2003);
    s1.display();
    s2.display();
}
