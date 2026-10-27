#include<stdio.h>
int main()
{
    int size,sum=0;
    printf("enter the size:");
    scanf("%d",&size);
    int marks[size];

    printf("enter the marks\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&marks[i]);
       
    }
    printf("the marks are %d\n");
    for(int i=0;i<size;i++)
    {
        sum=sum+marks[i];
    }
    printf("sum=%d",sum);
    return 0;
}