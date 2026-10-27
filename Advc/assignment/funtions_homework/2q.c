#include<stdio.h>
int p_or_n(int );
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("either positive nor negative");
        return 0;
    }
    int ret=p_or_n(n);
    if(ret)
    {
        printf("%d is positive",n);
    }else{
        printf("%d is negative",n);
    }
    return 0;
}
int p_or_n(int n)
{
    if(n>0)
    {
        return 1;
    }else{
        return 0;
    }
}