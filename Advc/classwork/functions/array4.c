#include<stdio.h>
void largest()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    int i;
    printf("enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //for second largest number
    int temp,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    printf("second largest is %d",arr[size-2]);
}
int main()
{
    largest();
    return 0;
}