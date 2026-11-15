#include<iostream>
using namespace std;
class students
{
    
    int id;
    string name;
public:
    // void read()//method 1
    // {
    //     cout << "Enter the Inputs : ";
    //     cin >> id >> name ;
    // }
    // void display()
    // {
    //     cout << "Id is :" << id << endl
    //          << "Name is :" << name << endl << endl;

    // }
    void setdata(int a,string n)
    {
       id=a;
       name=n;
    }
    void getdata()
    {
        cout << "Id is : " << id <<endl;
        cout << "Name is : "<< name <<endl;
    }
};
int main()
{
    students s1,s2;
    // s1.read();
    // s2.read();
    // s1.display();
    // s2.display();
    s1.setdata(23,"daya");
    s2.setdata(24,"reddy");
    s1.getdata();
    s2.getdata();
}