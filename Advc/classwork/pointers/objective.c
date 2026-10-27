#include<stdio.h>
int main()
{
    int *p,*q;
    //int x,y,z;
   int x=10;
    p=&x;
    q=&x;
   // z=*p/(*q);
   *p=*p+1;
   *q=*q+5;
    printf("%d %d\n",*p,*q);
}