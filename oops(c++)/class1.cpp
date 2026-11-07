#include<iostream>
using namespace std;
struct students_info
{
private:
    int id ;
    string name;
    int dob;
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
    struct students_info s1,s2;
    s1.display();
    s2.display();
    
    // s1.id=200;
    // s1.name="bodiredy";
    // s1.dob=2006;
    s1.read();
    s2.read();

    s1.display();
    s2.display();
}