#include<stdio.h>
int main()
{
    int limit,i;
    printf("enter the limit:");
    scanf("%d",&limit);
    int count = 0;
    for ( i = 2; i <= limit; i++)
    {
        if(limit % i == 0){
            printf("it is not prime number\n");
            break;
        }
        
    }
    if(limit==i){
        count = count + 1;
        printf("it is prime\n");
    }
    return 0;
}