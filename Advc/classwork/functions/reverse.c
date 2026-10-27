#include<stdio.h>
int reverse(int n)
{
   int remainder,rev=0;
    while(n>0)
    {
    remainder=n%10;
    rev=(rev*10)+remainder;
    n=n/10;
    }
    return rev;
}
int main()
{
    int result=reverse(1267);
    printf("%d is reversed number",result);
    return 0;
}