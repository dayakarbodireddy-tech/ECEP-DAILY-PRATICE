#include<stdio.h>
int main()
{
    double x;
    printf("enter the value:");
    scanf("%lf",&x);
    double *p;
    p=&x;
    printf("value is %lf\n",*p);
    printf("address of that pointer is %p\n",p);
    printf("address os the value is %p",&x);
    return 0;

}

