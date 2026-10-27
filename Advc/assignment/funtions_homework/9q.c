#include<stdio.h>
void range(int n);
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    range(n);
    return 0;
}
void range(int n)
{
    if((n>=0&&n<=100)||(n>=-50&&n<=70))
    {
        printf("%d is range",n);
    }else{
        printf("%d is not in range",n);
    }
}