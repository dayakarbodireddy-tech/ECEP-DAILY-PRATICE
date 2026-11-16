//specail member function of a class
//purpose when an ojbect is destroyed compiler is automatically called the destructor
//it is also same as the class name only we use tilde(~) before 
//syntax:~classname()//no arguments
//{
//  statements
//}
//when use dynamic memory we should use inside statements delete
//for static automatic deleted
#include<iostream>
using namespace std;
class students
{
//public ://by default class provide the security
    int id ;
    string name;
    int dob;
public:
    
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
    ~students()
    {
        cout << "Destructor called" <<endl;
    }
    
};
int main()
{
    students s1,s2;
   
    s1.display();
    s2.display();
    
}