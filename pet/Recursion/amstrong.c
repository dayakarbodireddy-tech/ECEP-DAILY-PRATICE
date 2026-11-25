//. Armstrong number using recursion.
#include<stdio.h>
int armstrong(int n,int count)
{
    
    
    static int sum=0;
    if(n==0)
    {
        return sum;
    }else{
        int power=1;
        int remainder=n%10;
        for(int i=0;i<count;i++)
        {
           power=power*remainder;
        }
        sum=sum+power;
        return armstrong(n/10,count);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int x=n;
    int count=0;
    int temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    int ret=armstrong(n,count);
    if(ret==x)
    {
        printf("ARmstrong number\n");
    }else{
        printf("Not a armstrong number\n");
    }
}