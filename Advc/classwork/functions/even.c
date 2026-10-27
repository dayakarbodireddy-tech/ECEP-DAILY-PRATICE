#include<stdio.h>
int even(int n)
{
    if(n%2==0)
    {
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int result=even(n);
    if(result)
    {
        printf("even  %d",n);
    }else{
        printf("not even %d",n);
    }
    return 0;
}