#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("before integer is %d",*p);
    *p=50;
    printf("after changing is %d",*p);
    return 0;
   
    
   
    

     
}