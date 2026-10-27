#include<stdio.h>
int main()
{
    int num=5;
    for(int i=num;i>=num;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}