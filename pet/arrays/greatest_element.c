#include<stdio.h>
int main()
{
    int size;
    int found=0;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements : ");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        found=0;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
              printf("%d ",arr[j]);
               found=1;
               break;
            }
        }
        
        if(found==0)
        {
            printf("-1 ");
        }
    }
    return 0;
}