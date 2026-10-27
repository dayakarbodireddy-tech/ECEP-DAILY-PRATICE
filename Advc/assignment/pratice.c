#include<stdio.h>
int main()
{
    int i,j,num=1;
    for(i=1;i<=5;i++)
    {
        // for(j=5-i;j>=1;j--)
        // {
        //     printf(" ");
        // }
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }

    return 0;
}