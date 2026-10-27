#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    int rev=0;
    int remainder;
    if(n==0)
    {
        return;
    }else{
        remainder=n%10;
        rev=rev*10+remainder;
        printf("%d",rev);
        reverse(n/10);
    }
}