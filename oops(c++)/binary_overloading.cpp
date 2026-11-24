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
   void  operator +(int second)
   {
    num1=num1 + second;
    num2=num2 + second;
   }
   void  operator -(int second)
   {
    num1=num1 - second;
    num2=num2 - second;
   }
   Numbers operator+(Numbers second)
   {
    Numbers temp;
    temp.num1=num1 + second.num1;
    temp.num2 =num2 +second.num2;
    return temp;
   }
   
};
int main()
{
    Numbers obj1(5,50);
    cout << "before the opearation : " << endl;
    obj1.display();
    cout << "After the oparation : " <<endl;
    obj1 + 10;
    obj1.display();
    cout <<"after the subtraction : " <<endl;
    obj1 -10;
    obj1.display();

    Numbers obj2(10,20),obj3;
    cout << "After adding two objects : " <<endl;
    obj3=obj1 + obj2;
    obj3.display();

}