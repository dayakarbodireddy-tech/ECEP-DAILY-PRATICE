// #include<iostream>
// using namespace std;
// int x=10;
// int main()
// {
    
//     int x=20;
//     cout << "X : " << ::x <<endl;//it brings the global varible into the local variable
//     cout << "X : " << x << endl;
    
// }

//custom userspace
#include<iostream>
using namespace std;

namespace first
{
    double x=10.5;
    void fun()
    {
        cout << "Fun 1 .... " << endl;
    }
    void fun1()
    {
        cout <<"Hii daya " << endl;
    }
}
namespace second
{
    char x='A';
    void fun()
    {
        cout << "Fun 2..." << endl;
    }
}
void main1()
{
    using namespace first;
    cout <<"X is : " << x <<endl;
    cout <<"X is : " << x <<endl;
    fun();

}

using namespace first;
//int x=10;
int main()
{
    
    int x=20;
    cout << "X : " << first::x <<endl;//it brings the global varible into the local variable
    cout << "X : " << x << endl;
    fun();
    fun1();
    
}