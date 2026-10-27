#include<stdio.h>
int main()
{
    float x;
    printf("enter the value:");
    scanf("%f",&x);
    float *p;
    p=&x;
    printf("value is %f\n",*p);
   // printf("address is %p\n",&x);
    printf("address of pointer%p",p);
    return 0;
}