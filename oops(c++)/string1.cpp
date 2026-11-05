#include<iostream>
#include<string>
using namespace std;
int main()
{
  int num;
  string name;
  cout << "Enter the number : ";
  cin >> num;
  cout << "Enter the name : " ;
  cin.ignore();
  getline(cin, name);
  //cin >> name;
  cout << "Num is : " << num << endl;
  cout << "Name is :" << name << endl;
  return 0;
}