#include<stdio.h>
int even_odd(int n);
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    int ret=even_odd(n);
    if(ret==1)
    {
        printf("%d is even",n);
    }else{
        printf("%d is odd",n);
    }
    return 0;
}
int even_odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }else{
        return 0;
    }
}