#include<iostream>
using namespace std;
class students
{
//public ://by default class provide the security
    int id ;
    string name;
    int dob;
public:
    
   
    //parameterised constructor
    students(int user_id=101,string username="Default",int userdob=2000){
       cout << "Parameterised constructor called "<<endl;
       id=user_id;
       name=username;
       dob=userdob;
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
    students s1,s2(200,"GURU",2002),s3(201,"bodireddy"),s4;
   
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    
}