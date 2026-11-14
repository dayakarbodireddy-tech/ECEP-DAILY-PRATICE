
#include<iostream>
using namespace std;
#if 0
int main()
{
    int num=10;
    cout << "Before update : " << num <<endl;
    int *ptr=&num;
    *ptr=20;
    cout << "After update : " << num <<endl;
}
#endif

int main()
{
    int num=10;
    cout << "Before update : " << num <<endl;
    int &ref=num;//refreencing variable syntax
    ref=20;
    cout << "After update : " << num <<endl;
    cout << "Address of num :" << &num <<endl;
    cout << "Address of ref :" << &ref <<endl;

}