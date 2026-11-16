//set operator and delete operator
//set to allocate memory dynamically at the run time ,we are not passing bytes it depends on datatype
//delete to deallocate dynamic memory
//syntax: data_type *ptr=new data_type(value);
#include<iostream>
using namespace std;
int main()
{
   int *ptr=new int(20);
   *ptr=100;
   cout << *ptr <<endl;
   delete ptr; 
}