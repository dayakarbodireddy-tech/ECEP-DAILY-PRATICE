#include<stdio.h>
int sum_n(int n);
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    int ret=sum_n(n);
     printf("%d ",ret);
     return 0;
}
//int sum=0;
int sum_n(int n)
{
    if(n>0)
    {
     int sum=sum_n(n-1);
     return n+sum;

        
    }
        
       
}