#include<stdio.h>
float average(int a,int b,int c)
{
    return (a+b+c)/3;
}
int main()
{
    float result=average(10,20,30);
    printf("average is =%.2f ",result);
    return 0;
    
}