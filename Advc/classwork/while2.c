#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int fact = 1, i = 1;
    while (i <= num)
    {
        fact = fact * i;
            i++;
    }
    printf("factorial value is %d",fact);
    return 0;
}