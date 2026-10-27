#include<stdio.h>
void replace_bits(int num1,int num2);
int main()
{
    int num1;
    printf("enter the number1: ");
    scanf("%d",&num1);
    int num2;
    printf("enter the number2: ");
    scanf("%d",&num2);
    replace_bits(num1,num2);
    return 0;
}
void replace_bits(int num1,int num2)
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    int mask=1;
    int num=num2 & ((mask<<n)-1);
    num1=num1 & ~((mask<<n)-1);
    num1=num1 | num;
    //printf("%d %d",n,num1);
    for(int i=31;i>=0;i--)
    {
        if(num1 & (mask<<i))
        {
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
    printf("\n");
}