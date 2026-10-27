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
   int count=0;
   int sum=0;
   int x=n;int temp=n;
   while(temp>0)
   {
    count++;
    temp=temp/10;
   }
   temp=x;
   while(temp>0)
   {
       int remainder=temp%10;
       int power=1;
       for(int i=0;i<count;i++)
       {
        power=power*remainder;
    }
    sum=sum+power;
    temp=temp/10;
   }
    if(x==sum)
    {
        return 1;
    }else{
        return 0;
    }
}