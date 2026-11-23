#include<iostream>
using namespace std; 
class Sum{
    public :
int add(int num1,int num2)
{
    cout <<"Function 1 : ";
    return num1+num2;
}
int add(int num1,int num2,int num3)
{
    cout <<"Function 2 : ";
    return num1+num2;
}
double add(double num1,double num2)
{
    cout <<"Function 3 : ";
    return num1+num2;
}
};
int main()
{
    Sum s;
    cout << s.add(10.5,20.2) << endl;//compile time polymorpism
    cout << s.add(10,5) << endl;
    cout << s.add(10,20,30) << endl;
}
