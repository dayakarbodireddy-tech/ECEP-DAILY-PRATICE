#include<stdio.h>
void prime_or_not(int n);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    prime_or_not(n);
    return 0;
}
void prime_or_not(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
          count++;
          break;
        }
    }
    if(count==0)
    {
        printf("%d is prime",n);
    }else{
        printf("%d is not prime",n);
    }
}