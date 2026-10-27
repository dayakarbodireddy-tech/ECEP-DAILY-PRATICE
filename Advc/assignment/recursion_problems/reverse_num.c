#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n==0)
    {
        return;
    }else{
        printf("%d",n%10);
        reverse(n/10);
    }
}