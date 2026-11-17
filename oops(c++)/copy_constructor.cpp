#include<iostream>
using namespace std;

class football
{
    string name;
    int goals;
    int jersey_no;
public:
football(string name="Default",int goals=0,int jersey_no=0): name(name),goals(goals),jersey_no(jersey_no)
{
   cout << "constructor called" <<endl;
}
void display()
{
    cout <<"Name : " << name << endl
        <<"Goals : " <<goals <<endl
        <<"jersey number : " <<jersey_no<< endl <<endl;
}
football(football &ref)
{
    cout <<"Copy constructor called" << endl;
    name=ref.name;
    goals=ref.goals;
    jersey_no=ref.jersey_no;
}



};
int main()
{
    football s1("Messi",934,10),s2("ronaldo",984,7);
    s1.display();
    s2.display();

    football s3(s1);
    football s4(s2);
    s3.display();
    s4.display();

    
}