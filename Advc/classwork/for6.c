#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    int rev=0;
    
    while (num != 0)
    {
        int remainder = num % 10;
        rev = (rev*10) + remainder;
        num = num / 10;
    }
    printf("reversed number is\n %d",rev);
    return 0;
}