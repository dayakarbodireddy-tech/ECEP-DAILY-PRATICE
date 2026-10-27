#include<stdio.h>
void check_sets(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    check_sets(num);
    return 0;
}
void check_sets(int num)
{
    int mask=1;
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    num=num|(1<<n);
    printf("%b\n",num);
}