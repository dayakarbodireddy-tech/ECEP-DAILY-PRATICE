#include<iostream>
using namespace std;
void swap(int &num1,int &num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
}
int main()
{
    int num1;
    cout << "Enter the num1 :";
    cin >> num1;
    int num2;
    cout << "Enter the num2 : ";
    cin >> num2;
    swap(num1,num2);
    cout << num1 <<endl;
    cout << num2 <<endl<<endl;
    return 0;
}