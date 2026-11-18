//shallow and deep copys
#include<iostream>
using namespace std;
class students
{
    int *batches;
    public:
    students(int batch=0)
    {
        cout <<"Constructor Called" << endl;
        batches=new int(batch);
    }
    // students(const students &ref)//it follows shallow copy method
    // {
    //     cout <<"Copy constructor called" << endl;
    //     batches=ref.batches;
    // }
    students(const students &ref)
    {
        cout <<"Copy constructor called" << endl;
        batches=new int(*ref.batches);
    }
    void display()
    {
        cout <<"Batches : " << *batches << endl;
    }
    ~students()
    {
        cout <<"Destructor called" << endl;
        delete batches;
    }


};
int main()
{
   students s1(5),s2(3);
   students s3(s1);
   students s4(s2);
   s1.display();
   s2.display();
   s3.display();
   s4.display();
}