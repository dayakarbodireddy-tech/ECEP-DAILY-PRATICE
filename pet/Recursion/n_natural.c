//Print natural numbers using recursion
#include<stdio.h>
void natural_numbers(int n)
{
    if(n==0)
    {
        return;
    }else{
        natural_numbers(n-1);
        printf("%d ",n);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    natural_numbers(n);
    return 0;
}
