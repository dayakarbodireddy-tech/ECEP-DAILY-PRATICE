#include<stdio.h>
int main()
{
    float x=10.5;
    float *p;
    p=&x;
    printf("before is value is %.1f\n",*p);
    *p=25.5;
    printf("after value is %.1f",*p);
    return 0;
}