#include<stdio.h>
void n_nums(int n);
int main()
{
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    n_nums(n);
    return 0;
}
void n_nums(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n ",i);
    }
}