// Check whether a number array is sorted.
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
    //checking elements sorted or not
    int ascending_count =0; 
    int decending_count =0; 
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            ascending_count++;
        }
        if(arr[i]>=arr[i+1])
        {
            decending_count++;
        }
    }
    if(ascending_count==size-1 || decending_count==size-1)
    {
        printf("the array is sorted\n");
    }else{
        printf("the array is not sorted\n");
    }
}