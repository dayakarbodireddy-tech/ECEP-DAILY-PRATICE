//finding the second largest
#include<stdio.h>
int second_largest(int *arr,int size);
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ret=second_largest(arr,size);
    printf("second largest is %d\n",ret);
    return 0;
}
int second_largest(int *arr,int size)
{
    int largest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    int smallest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    int second=smallest;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>second && arr[j]<largest)
            {
               second=arr[j];
            }
        }
    }
    //printf("second largest number is %d\n",second);
    //smallest=second;
    //return second;
    int third=smallest;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>third && arr[j]<second)
            {
                third=arr[j];
            }
        }
    }
    return third;
}