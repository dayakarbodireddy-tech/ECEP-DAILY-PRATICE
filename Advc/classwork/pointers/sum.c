//Write a C program to read two float values and find their sum using pointers.
#include<stdio.h>
void float_sum(float *p,float *p2)
{
   float sum;
   sum=*p+*p2;
   printf("sum is %f",sum);
}
int main()
{
    float a,b;
    printf("enter the a and b:");
    scanf("%f %f",&a,&b);
    float_sum(&a,&b);
    return 0;
}