#include<stdio.h>
int main()
{
    int num=5;
    int i,j;
    for(i=num;i>=num;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}