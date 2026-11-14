#include<iostream>
using namespace std;
class students
{
//public ://by default class provide the security
    int id ;
    string name;
    int dob;
public:
    
    students(int id=0,string name="default",int dob=2003) : id(id),name(name),dob(dob){
                                                            //outside the constructor & what is write in inside is parameterised variable and outside is object properties
        cout << "Parameterised constructor called "<<endl;
    //    this->id=id;//this pointer hold the address of each 
    //    this->name=name;
    //    this->dob=dob;
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
    students s1,s2(200,"GURU",2002),s3(201,"bodireddy");
   
    s1.display();
    s2.display();
    s3.display();
    
    
}