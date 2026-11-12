// Sort an array in descending order without using bubble sort.
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
    //sorting in decending order without bubble sorting
    int second_largest;
    for(int i=0;i<size;i++)
    {
        second_largest=smallest;
        for(int j=0;j<size;j++)
        {
            if(arr[j]<largest && arr[j]>second_largest)
            {
                second_largest=arr[j];
            }
        }
        printf("%d ",largest);
        largest=second_largest;
    }


}