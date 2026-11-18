#include<iostream>
using namespace std;

class Emertxe
{
    protected :
    int id;
    string name ;
    int dob;
    public:
    Emertxe()
    {
        cout<<"Emertxe Constructor called" << endl;
    }
    void showProfile()
    {
        cout << "ID is : " <<id << endl
             <<"Name is : " << name << endl
             <<"dob is : " << dob << endl <<endl;
    }
    ~Emertxe()
    {
        cout <<"Emertxe destructor called " << endl;
    }
};

class Mentors : public Emertxe
{
    protected :
    int no_of_batches;
    public:
    Mentors()
    {
        cout <<"Mentors CONSTRUCTOR called" <<endl;
    }
    ~Mentors()
    {
        cout << "Mentors destuctor called"<<endl;
    }
    
};
 
class students : public Emertxe
{
  protected:
  int marks;
  public:
  students()
  {
    cout << "Students constructor called"<<endl<<endl;
  }
  ~students()
  {
    cout<<"students destructor called" <<endl;
  }
};
int main()
{
    Mentors m1;
    students s1;
    // m1.showProfile();
    // s1.showProfile();
}