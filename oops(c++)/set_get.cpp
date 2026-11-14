#include<iostream>
using namespace std;
class students{
    int age;

    public:
    void setage(int a)
    {
        age=a;
    }
    int getage()
    {
        return age;
    }

};
int main()
{
    students s1;
    s1.setage(23);
    cout << s1.getage() << endl;
    return 0;
}