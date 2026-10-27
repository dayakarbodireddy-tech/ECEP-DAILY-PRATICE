#include<stdio.h>
int armstromg(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ret=armstromg(n);
    if(ret==1)
    {
        printf("%d is armstrong",n);
    }else{
        printf("%d is not armstrong",n);
    }
}
int armstromg(int n)
{
    int remainder;
    int x=n;
    int sum=0;
    while(n>0)
    {
        remainder=n%10;
       sum=sum+(remainder*remainder*remainder);
        n=n/10;
    }
    if(x==sum)
    {
        return 1;
    }else{
        return 0;
    }
}