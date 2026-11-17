//shallow copy in this we have one disadvantage when delete it free 2 times we got code aborted
#include<iostream>
using namespace std;
class deepcopy
{
    int *batches;
public:
deepcopy(int batch=0)
{
    cout <<"Constructor called" << endl;
    batches=new int(batch);
} 
deepcopy(const deepcopy &ref)
{
    cout << "COPY CONSTRUCTOR CALLED" <<endl;
    batches=new int(*ref.batches);
}
void display()
{
    cout <<"Batches : " <<*batches <<endl;
}
~deepcopy()
{
    cout<<"destructor called" << endl;
    delete batches;
}
};
int main()
{
    deepcopy m1(5),m2(m1);
    m1.display();
    m2.display();
}