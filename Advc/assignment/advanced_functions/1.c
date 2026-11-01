#include<stdio.h>
int add(int n1,int n2)
{
    return n1+n2;
}
int main()
{
    int (*fptr)(int,int);
    fptr=add;
    printf("%d\n",add(10,20));
    printf("%d\n",fptr(10,20));
    printf("%d\n",(*fptr)(10,20));
}