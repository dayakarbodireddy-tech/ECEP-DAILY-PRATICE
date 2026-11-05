#include<iostream>
using namespace std;
int main()
{
    int num;
    char ch;
    double d;
    string name;
    bool statement;
    cout <<"Enter the num : ";
    cin >> num;
    cout << "Enter ch : ";
    cin >> ch;
    cin.ignore();
    cout <<"Enter name : ";
    //cin >> name;
    getline(cin,name);
    cout << "Enter the double d : ";
    cin >> d;
   
    cout << "NUM is : " <<num <<endl
         << "character is : " <<ch <<endl
         << "Name is : " <<name<<endl
         << "Double is : " <<d <<endl;
}