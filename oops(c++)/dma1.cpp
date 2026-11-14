#include<iostream>
#include<cstdlib>
using namespace std;
#if 0//disable this main 
int main()
{
    int *ptr=(int *)malloc(4);
    *ptr=10;
    cout << "*ptr :" << *ptr <<endl;
    free(ptr);
}
#endif
#if 0
int main()
{
    int *ptr=new int(10);
    cout << "*ptr : " << *ptr <<endl;
    delete ptr;
}
#endif

int main()
{
    int *ptr=new int[5] {10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        cout << ptr[i] <<" ";
    }
    cout << endl;
    delete[] ptr;
}