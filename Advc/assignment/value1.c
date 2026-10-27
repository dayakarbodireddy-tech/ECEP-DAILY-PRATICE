#include<stdio.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    int i,j;
    printf("enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int value;
    printf("enter the value:");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
        if(arr[i]==value)
    {
        for(j=i;j<size-1;j++)
        {
            {
                arr[j]=arr[j+1];
                //size--;
            }
        }
    }
    break;
    }
    printf("after removing values:");
    for(i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}