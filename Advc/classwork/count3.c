#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
     int count = 0;
    while (num > 0)
    {
        num = num/10;
        count = count + 1;
    
    }
    printf("count = %d\n",count);
    return 0;
}