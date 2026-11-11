// Rotate an array from a given position.
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int position;
    printf("Enter the position : ");
    scanf("%d",&position);
    int temp=arr[size-1];
    for(int i=size-1;i>position-1;i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[position-1]=temp;
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}