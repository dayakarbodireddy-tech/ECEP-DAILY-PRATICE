#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int x = num;
    int sum;
    while (num > 0)
    {
        int remainder = num % 10;
        sum = sum + (remainder*remainder*remainder );
        num = num / 10;
    }
    if (x == sum){
        printf("ARMSTRONG number%d\n",x);
    }else{
        printf("not ARMSTRONG number%d\n",x);
    }
    return 0;
}