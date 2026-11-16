#include<iostream>
using namespace std;
class students_info
{
    int id;
    string name;
    int dob;
public:
students_info(int user_id,string user_name,int user_dob):id(user_id),name(user_name),dob(user_dob)
{
  cout << "Initializer list called" <<endl;
}
void display()
{
    cout << "Id is :" << id <<endl
         <<  "Name is : " << name << endl
         << "dob is : " << dob << endl <<endl;
}

};
int main()
{
    students_info s1(101,"daya",2003),s2(102,"reddy",2003);
    s1.display();
    s2.display();
}