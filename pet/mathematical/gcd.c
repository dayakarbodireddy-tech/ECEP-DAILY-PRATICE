#include<stdio.h>
void gcd(int num1,int num2)
{
    int min;
    int gcd_storing=1;
    if(num1<num2)
    {
        min=num1;
    }else{
        min=num2;
    }
    for(int i=1;i<=min;i++)
    {
        if(num1 % i==0 && num2 % i==0)
        {
          gcd_storing=i;
        }
    }
    printf("gcd of two numbers is %d\n",gcd_storing);
}
int main()
{
    int num1;
    int num2;
    printf("Enter the number1 : ");
    scanf("%d",&num1);
    printf("Enter the number2 : ");
    scanf("%d",&num2);
    gcd(num1,num2);
    return 0;
}