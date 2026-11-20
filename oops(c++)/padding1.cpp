#include<iostream>
using namespace std;
 
class mentors
{
public:    
    int id;
    string name;
    
    static int count;//not included because memory allocated at the compile time
};
int mentors :: count=0;//we have a static varaible in my program please allocate the memeory

int main()
{
    cout << "Size of class is : " << sizeof(mentors) << endl;
    mentors m1,m2;
    m1.count=1;
    cout << "count : " << m1.count << endl;
    cout << "count : " << m2.count << endl;
    m2.count=2;
    cout << "count : " << m1.count << endl;
    cout << "count : " << m2.count << endl;

}
    
