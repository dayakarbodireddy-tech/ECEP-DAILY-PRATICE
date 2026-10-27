#include<stdio.h>
int is_prime(int num)
{
    int i;
    if(num<2)
    {
        return 0;
    }else{
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
}
    return 1;

}
void generate_prime(int limit)
{
    int num;
    for(num=2;num<=limit;num++)
    {
        if(is_prime(num))
        {
            printf("%d ",num);
        }
    }

}
int main()
{
    int limit;
    printf("enter the limit:");
    scanf("%d",&limit);

if(limit>1)
{
   generate_prime(limit);
}else{
    printf("invalid input");
}
return 0;
}
