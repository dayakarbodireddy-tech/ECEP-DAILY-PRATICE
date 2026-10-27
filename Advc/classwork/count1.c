#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    int sum = 0;
    for (int i = 1;i <= num;i++)
    {
        sum = sum + i;
    }
     printf("sum = %d\n",sum);
     return 0;
 
}