#include<stdio.h>
int sum_of_n(int n);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int ret=sum_of_n(n);
    printf("sum is %d",ret);
    return 0;
}
int sum_of_n(int n)
{
    // int sum=0;
    if(n>0)
    {
    int ret=sum_of_n(n-1);
    return ret+n;
   }

    
}