//shallow copy in this we have one disadvantage when delete it free 2 times we got code aborted
#include<iostream>
using namespace std;
class shallowcopy
{
    int *batches;
public:
shallowcopy(int batch=0)
{
    cout <<"Constructor called" << endl;
    batches=new int(batch);
} 
shallowcopy(const shallowcopy &ref)
{
    cout << "COPY CONSTRUCTOR CALLED" <<endl;
    batches=ref.batches;
}
void display()
{
    cout <<"Batches : " <<*batches <<endl;
}
~shallowcopy()
{
    cout<<"destructor called" << endl;
    delete batches;
}
};
int main()
{
    shallowcopy m1(5),m2(m1);
    m1.display();
    m2.display();
}