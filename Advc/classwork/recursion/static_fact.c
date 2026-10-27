//5*4*3*2*1 like thiss
#include<stdio.h>
void factorial(int n);
int main()
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    int fact=1;
    factorial(n);
    return 0;
}
void factorial(int n)
{
    int static fact=1;
    if(n>0)
    {
        fact=fact*n;
        factorial(n-1);
        
    }else{
        printf("%d ",fact);
    }
}