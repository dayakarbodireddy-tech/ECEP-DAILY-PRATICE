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
    int j=size-1;
    for(int i=size-1;i>=0;i--)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j--;
        }
    }
    while(j>=0)
    {
        arr[j]=0;
        j--;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
    
    
      
    
