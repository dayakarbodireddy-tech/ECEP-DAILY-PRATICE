#include<iostream>
using namespace std;
int main()
{
    int size;
    cout <<"Enter the size : ";
    cin >> size;
    cout <<"Enter the array elements :";
    int *ptr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin >> ptr[i];
    }
    cout <<"Display the array elements : ";
    for(int i=0;i<size;i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    delete[] ptr;
    return 0;
}