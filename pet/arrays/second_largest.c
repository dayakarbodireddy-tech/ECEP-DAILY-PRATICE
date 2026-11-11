// Find the second largest element in an array.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
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
    int second_largest=smallest;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<largest && arr[i]>second_largest)
        {
            second_largest=arr[i];
        }
    }
    int third_largest=smallest;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<second_largest && arr[i]>third_largest)
        {
            third_largest=arr[i];
        }
    }
    printf("Second largest value is %d\n",second_largest);
    printf("Second largest value is %d\n",third_largest);
    return 0;
}