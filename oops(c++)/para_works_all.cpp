//one parameterised constructor works for all 
#include<iostream>
using namespace std;
class students_info
{
    int id;
    string name;
    int dob;
public:
students_info(int user_id=100,string user_name="Default",int user_dob=2003)//direct initilaization works for all objects properties
{
    cout << "Parameterized constructor called" << endl;
   id=user_id;
   name=user_name;
   dob=user_dob;
}
void display()
{
    cout << "Id is : " << id <<endl
         << "Name is : " << name <<endl
         << "Dob is : " << dob << endl << endl;
}

};
int main()
{
    students_info s1(100,"daya",2003),s2;
    s1.display();
    s2.display();
}