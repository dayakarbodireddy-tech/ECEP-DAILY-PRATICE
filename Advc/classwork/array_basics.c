#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size:");
    scanf("%d",&size);
    int marks[size];
    printf("enter the marks:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("the values are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
        
}