#include<stdio.h>
void even_odd(int n);
int main()
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    even_odd(n);
    return 0;
}
void even_odd(int n)
{
    if(n==0)
    {
        printf("even number");
        return;
    }
    if(n==1)
    {
        printf("odd number");
        return;
    }
    even_odd(n%2);
}