#include<stdio.h>
int main()
{
    double x=10.5;
    double *p;
    p=&x;
    printf("before is %.1lf\n",*p);
    *p=25.5;
    printf("after is %.1lf",*p);
    return 0;
}