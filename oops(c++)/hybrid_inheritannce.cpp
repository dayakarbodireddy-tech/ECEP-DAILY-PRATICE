#include<iostream>
using namespace std;
class A{
    public:
    int id;
};
class B : public A{

};
class C : public A
{

};
class D : public B,public C
{

};
int main()
{
    D obj;
    obj.B::id=20;
   obj.C::id=10;
   
   cout << "obj.B::id= " << obj.B::id <<endl;
   cout << "obj.C::id= "<< obj.C::id <<endl;
   obj.C::id=30;
   cout << "obj.B::id= " << obj.B::id <<endl;
   cout << "obj.C::id= "<< obj.C::id <<endl;
    
}