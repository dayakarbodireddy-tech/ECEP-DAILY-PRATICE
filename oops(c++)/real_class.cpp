#include<iostream>
using namespace std;
class students
{
//public ://by default class provide the security
    int id ;
    string name;
    int dob;
public:
    void read()
    {
        cout <<"Enter the Inputs: ";
        cin >> id >> name >> dob;
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
    s1.read();
    s2.read();
    s1.display();
    s2.display();
    
}