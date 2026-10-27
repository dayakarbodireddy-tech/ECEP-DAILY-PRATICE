#include<stdio.h>
#define SET_BIT(num,n) num|(1<<n)
int main()
{
    int result=SET_BIT(7,4);
    printf("%d\n",result);
}