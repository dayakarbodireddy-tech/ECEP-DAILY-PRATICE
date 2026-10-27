#include<stdio.h>
int main()
{
    int size,i,j;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("before array element set:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("after array elements set:\n");
    int temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}