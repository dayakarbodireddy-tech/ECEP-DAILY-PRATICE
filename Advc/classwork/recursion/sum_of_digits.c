#include<stdio.h>
int sum_of_digits(int n);
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    int ret=sum_of_digits(n);
    printf("sum is %d\n", ret);
    return 0;
}
int sum_of_digits(int n)
{
    if(n==0)
    {
        return 0;
    }else{
        
        int remainder=n%10;
        
        return remainder + sum_of_digits(n/10);
    }
}