#include<stdio.h>
int main()
{
    double x=3.89;
    double *p;
    p=&x;
    printf("value is stored in pointer is %lf",*p);
    return 0;
}