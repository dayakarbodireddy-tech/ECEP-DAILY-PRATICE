#include<iostream>
#include<cstdlib>
using namespace std;
class mentors
{
    public:
    int id;
    string name;
    int batches;

    mentors(int id=100,string name ="none",int batches=2):id(id),name(name),batches(batches)
    {
        cout <<"Constructor called " << endl;
    }
    void display()
    {
        cout << "Id is : " << id << endl
             << "Name is : " << name << endl
             <<"Batches : " << batches << endl;
    }
    ~mentors()
    {
        cout << "Destructor called " << endl;
    }
};
int main()
{
    mentors *m1=(mentors*)new mentors();
    //mentors *m1=(mentors*)malloc(sizeof(mentors));//constructor and destructor will not called when we use malloc thats y wew use new
    m1->display();
    delete m1;
}