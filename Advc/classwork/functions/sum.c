#include<stdio.h>
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
     return sum;
}
int main()
{
    int result=sum(123);
    printf("sum is %d",result);
    return 0;
}