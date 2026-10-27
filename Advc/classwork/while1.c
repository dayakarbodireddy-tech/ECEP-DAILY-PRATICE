#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int x = num;
    int reserve = 0;
    while (num != 0)
    {
        int remainder = num % 10;
        reserve = (reserve*10) + remainder;
        num = num / 10;
    }
    if(x == reserve){
        printf("%d\n is palindrome",x);
    }else{
        printf("%d not palindrome\n",x);
    }
    return 0;
}
    