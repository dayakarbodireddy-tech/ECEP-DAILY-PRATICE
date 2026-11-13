#include<iostream>
using namespace std;
class students
{
//public ://by default class provide the security
    int id ;
    string name;
    int dob;
public:
    //Implicit constructor
    //students(){}

    //Explicit constructor
    students()
    {
        cout << "constructor called"<<endl
             <<"Enter the id ,name and dob : ";
        cin >> id >>name>>dob;     
    }
    void display()
    {
        cout << "id is : " << id << endl;
        cout << "name is : " << name << endl;
        cout << "dob is : " << dob << endl << endl;
    }
};
int main()
{
    students s1,s2;
   
    s1.display();
    s2.display();
    
}