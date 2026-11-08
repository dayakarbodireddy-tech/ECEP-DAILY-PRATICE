#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    //finding the sum of all digits in a number
    int sum=0;
    while(num!=0)
    {
      sum=sum + num%10;
      num=num/10;
    }
    int sum1=0;
    while(sum!=0)
    {
        sum1=sum1 + sum%10;
        sum=sum/10;
    }
    int sum2=0;
    while(sum1!=0)
    {
        sum2=sum2+sum1%10;
        sum1=sum1/10;
    }
    if(sum2==1)
    {
        printf("num is a magic number\n");
    }else{
        printf("its not a magic number\n");
    }
}