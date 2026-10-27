#include<stdio.h>
void get_check(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    get_check(num);
    return 0;
}
void get_check(int num)
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    int mask=1;
    num=num & ~(mask<<n);
    printf("bit:%d value%d\n",n,num);
}