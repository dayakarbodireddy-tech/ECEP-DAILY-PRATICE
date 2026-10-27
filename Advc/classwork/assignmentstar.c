#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num); 
    int i,j;
    for(i=num;i>=1;i--)
    {
        for(j=i;j<=num;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    } 
    for(i=2;i<=num;i++)
    {
        for(j=i;j<=num;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}