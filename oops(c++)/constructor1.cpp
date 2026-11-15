#include<iostream>
using namespace std;
class students_info{
    //public:
    int id;
    string name;
    int dob;
    

public:
  students_info()
  {
    cout<<"Constructor called"<<endl;
    cout<<"Enter the Inputs : ";
    cin >> id >> name >> dob;
  }    
    void display()
    {
        cout <<"ID is :" << id <<endl
            <<"NAME is :" << name <<endl
            <<"DOB is :" << dob << endl <<endl;
    }
};
int main()
{
    students_info s1,s2;
    
    
    s1.display();
    s2.display();
}