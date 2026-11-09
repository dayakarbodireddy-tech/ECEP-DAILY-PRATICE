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
    
    while(sum>9)
    {
        int sum1=0;
        int digit1;
        while(sum!=0)
        {
            digit1=sum%10;
            sum1=sum1+digit1;
            sum=sum/10;
        }
        sum=sum1;
    }
    printf("The sum of even digits in a single number %d\n",sum);
}