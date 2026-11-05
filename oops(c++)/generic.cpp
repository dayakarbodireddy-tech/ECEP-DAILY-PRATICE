#include<iostream>
using namespace std;
template <typename D>
D add(D a,D b)
{
    return a+b;
}
    

int main()
{
    cout << add(10,20) <<endl;
    cout << add(10.5,20.5) <<endl;
}