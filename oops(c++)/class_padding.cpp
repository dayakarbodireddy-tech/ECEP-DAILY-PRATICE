#include<iostream>
using namespace std;
 
class mentors
{
    int id;
    string name;
    int dob;
};
class students : public mentors
{
   string address;
};
int main()
{
    cout << "Size of class is : " << sizeof(mentors) << endl;
    cout << "Size of class is : " << sizeof(students) << endl;
}
