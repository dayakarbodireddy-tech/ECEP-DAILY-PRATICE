#include<stdio.h>
void prime_limit(int limit);
int main()
{
    int limit;
    printf("enter the limit: ");
    scanf("%d",&limit);
    prime_limit(limit);
    return 0;
}
void prime_limit(int limit)
{
    int num;
    int count=0;
    for(num=2;num<limit;num++)
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
        }
    }
}