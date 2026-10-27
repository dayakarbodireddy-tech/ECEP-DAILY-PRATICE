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
    int j=0;
    for(int i=0;i<size;i++)
    {
     if(arr[i]!=0)
     {
        arr[j]=arr[i];
        j++;
     }
    }
    while(j<size)
    {
        arr[j]=0;
        j++;
    }
        
    
        
        
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}