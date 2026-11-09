#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum=0;
    int digit;
    while(num!=0)
    {
       digit=num%10;
       if(digit % 2 == 0)
       {
        sum=sum+digit;
       }
       num=num/10;
    }
    printf("The even sum in a number is %d\n",sum);
}