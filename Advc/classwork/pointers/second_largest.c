#include<stdio.h>
void second_smallest(int *arr,int size);
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    second_smallest(arr,size);
    return 0;
}
void second_smallest(int *arr,int size)
{
    int largest=arr[0];
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    //for smallest
    int smallest=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    //printf("%d ",smallest);
    int second_smallest1=largest;
    //for second largest
    for(i=0;i<size;i++)
    {
        if(arr[i]>smallest && arr[i]<second_smallest1)
        {
           second_smallest1=arr[i];
        }
        
    }
    printf("%d ",second_smallest1);
    int third_smallest=largest;
    for(i=0;i<size;i++)
    {
        if(arr[i]>second_smallest1&&arr[i]<third_smallest)
        {
            third_smallest=arr[i];
        }
    }
    printf("%d ",third_smallest);
        
    

}