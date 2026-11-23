#include<iostream>
using namespace std;
class Numbers
{
    int num1;
    int num2;
   public:
   Numbers(int num1=0,int num2=0):num1(num1),num2(num2) 
   {

   }
   void display()
   {
    cout << "Num1 : " << num1 <<endl
         <<"Num 2 : " << num2 <<endl;
   }
   void operator++(int)
   {
    //   num1=!num1;
    //   num2=!num2;
    num1++;
    num2++;
   }
};
int main()
{
    Numbers obj1;
    cout << "Before the operation : " << endl;
    obj1.display();
    //++obj1;
    //!obj1;
    obj1++;
    cout <<"After the ++ opeartion : " <<endl;
    obj1.display();
}