#include<stdio.h>
int sum_n_numbers(int n);
int main()
{
    int n;
    printf("enter the numbers: ");
    scanf("%d",&n);
    int ret=sum_n_numbers(n);
    printf("Sum is %d",ret);
    return 0;
}
int sum_n_numbers(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}