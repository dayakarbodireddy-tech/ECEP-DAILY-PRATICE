#include<stdio.h>
void prime_limit(int n);
int main()
{
    int n;
    printf("enter the limit: ");
    scanf("%d",&n);
    prime_limit(n);
    return 0;
}
void prime_limit(int n)
{
    int num;
    int count=0,found;
    for(num=2;found<n;num++)
    {
        count=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        
        if(count==0)
        {
            printf("%d ",num);
            found++;
        }
    }
}