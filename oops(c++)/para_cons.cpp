#include<iostream>
using namespace std;
class students_info
{
    int id;
    string name;
    int dob;
public:
students_info()
{
    cout << "constructor called" << endl;
    cout <<"Enter the id , name & dob :";
    cin >> id >> name >> dob;
}
students_info(int user_id,string user_name,int user_dob)
{
    cout<<"Parameterised constructor"<<endl;
    id=user_id;
    name=user_name;
    dob=user_dob;
}

void display()
{
    cout <<"Id is : " << id <<endl
         <<"Name is : " << name <<endl
         <<"Dob is :" << dob <<endl <<endl;
}
};
int main()
{
    students_info s1,s2,s3(103,"bodireddy",2003),s4(104,"dayakar",2003),s5;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
}