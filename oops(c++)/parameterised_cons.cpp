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
    //parameterised constructor
    students(int user_id,string username,int userdob){
       cout << "Parameterised constructor called "<<endl;
       id=user_id;
       name=username;
       dob=userdob;
    }
    students(int user_id,string username)
    {
        cout <<"paramertised 2 constructor called" << endl;
        id=user_id;
       name=username;
       dob=2003;
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