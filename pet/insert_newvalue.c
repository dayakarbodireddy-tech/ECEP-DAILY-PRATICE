#include<stdio.h>
int main()
{
    int size;
    int value;
    printf("Enter the size : ");
    scanf("%d",&size);
    printf("Emter the value: ");
    scanf("%d",&value);
    int arr[size + 1];
    printf("Enter the array Elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[size]=value;
   
    
    
    
    int i=0;
    int j=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<size+1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}