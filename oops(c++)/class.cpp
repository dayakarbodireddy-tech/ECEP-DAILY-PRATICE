#include<iostream>
using namespace std;
struct students_info
{
    //in c++ we can define the data memebers and we can do intialition of data memebers  
    //Also we can define the functions inside the structure that is called member function
    int id = 100;
    string name="daya";
    int dob=2003;
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
    
    s1.id=200;
    s1.name="bodiredy";
    s1.dob=2006;

    s1.display();
    s2.display();
}