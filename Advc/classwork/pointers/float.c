#include<stdio.h>
int main()
{
    float x=7.78;
    float *p;
    p=&x;
    printf("value is stored in pointer is %f",*p);
    return 0;
}