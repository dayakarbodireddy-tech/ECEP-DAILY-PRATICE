#include<iostream>
using namespace std;

class Emertxe
{
    protected :
    int id;
    string name ;
    int dob;
    public:
    Emertxe(int id=0,string name="Default",int dob=2003):id(id),name(name),dob(dob)
    {
        cout<<"Emertxe Constructor called" << endl;
    }
    void showProfile()
    {
        cout << "ID is : " <<id << endl
             <<"Name is : " << name << endl
             <<"dob is : " << dob << endl;
    }
    
};

class Mentors : public Emertxe
{
    protected :
    int no_of_batches;
    public:
    Mentors(int id=1,string name="Default",int dob=2003,int no_of_batches=1):Emertxe(id,name,dob),no_of_batches(no_of_batches)
    {
        cout <<"Mentors CONSTRUCTOR called" <<endl;
    }
    void showNo_of_batches()
    {
        cout << "Batches : " <<no_of_batches<<endl<<endl;;
    }
    
    
};
 
class students : public Emertxe
{
  protected:
  int marks;
  public:
  students(int id=2,string name="Default",int dob=2003,int marks=0):Emertxe(id,name,dob),marks(marks)
  {
    cout << "Students constructor called"<<endl<<endl;
  }
  void show_Marks()
  {
    cout << "Marks : " << marks<<endl;;
 }
    
   
 
};
int main()
{
    Mentors m1(100,"daya",2003,2);
    students s1(200,"reddy",2003,90);
     m1.showProfile();
     m1.showNo_of_batches();
    s1.showProfile();
    s1.show_Marks();
}