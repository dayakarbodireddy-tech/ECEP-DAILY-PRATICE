#include<iostream>
using namespace std;

class emertxe
{
    
    protected:
    int id;
    string name;
    int dob;
    public:
  emertxe(int id=0,string name="None",int dob=0):id(id),name(name),dob(dob)
  {
    cout << "Emertxe Constructor called " << endl;
  } 
  virtual void display()=0;//pure virtual funtion we cannot make any classes//abstarct class
      

};
 class students : public emertxe
 {
    protected:
       int marks;
    public:
       students(int id=0,string name="None",int dob=0,int marks=0):emertxe(id,name,dob),marks(marks)
       {
        cout <<"Students constructor called" << endl;
       }
    
      void display()
      {
       cout << "Id is : " << id <<endl
         << "Name is : " << name << endl
         << "dob is : " << dob <<endl
         << "Marks : " << marks <<endl;
      }
 };
 class mentors : public emertxe
 {
    protected:
       int batches;
    public:
       mentors(int id=0,string name="None",int dob=0,int batches=0):emertxe(id,name,dob),batches(batches)
       {
        cout <<"mentors constructor called" << endl;
       }
    
      void display()
      {
       cout << "Id is : " << id <<endl
         << "Name is : " << name << endl
         << "dob is : " << dob <<endl
         << "batches : " << batches <<endl;
      }
 };
 int main()
 {
    // students s1(100,"dayakar",2004,90);
    // s1.display();
    // mentors s2(200,"bodireddy",2004,7);
    // s2.display();

    // students *s1=new students(100,"daya",2004,90);
    // s1->display();
     emertxe *em;
    // em= new students(100,"reddy",2004,9);//it calls emertxe constructor because of early binding
    // em->display();
    // delete em;

    em=new mentors(200,"hari",2001,4);
    em->display();
    delete em;
  }