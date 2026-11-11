// Insert a new value into a sorted array/list
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size+1];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int new_value;
    printf("Enter the new value : ");
    scanf("%d",&new_value);
    
       arr[size]=new_value;
       for(int i=0;i<size;i++)
       {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
       }
       for(int i=0;i<size+1;i++)
       {
         printf("%d ",arr[i]);
       }
       return 0;
    
}