#include<stdio.h>
int fun(int );
int main()
{
    int x=5;
    int ret=fun(x);
    printf("%d",ret);
}
int fun(int a)
{
   if(a>0)
   {
    int ret=fun(a-1);
    return a+ret;
   }else{
    return 0;
   }
}