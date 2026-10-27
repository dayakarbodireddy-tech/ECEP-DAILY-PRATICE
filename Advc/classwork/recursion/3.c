#include<stdio.h>
void n_numbers(int);
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    n_numbers(x);
    return 0;
}
void n_numbers(int x)
{
    if(x>0)
    {
        printf("%d ",x);
        n_numbers(x-1);
    }
}