#include<stdio.h>
int digits(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int result=digits(123213);
    printf("digits is %d",result);
    return 0;
}