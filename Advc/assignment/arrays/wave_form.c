#include<stdio.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    int i,j;
    printf("enter the array elelments:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found=1;
    for(i=0;i<size-1;i++)
    {
        if(i%2==0)
        {
            if(arr[i]<arr[i+1])
            {
                found=0;
                break;
            }
        }else{
            if(arr[i]>arr[i+1])
            {
                found=0;
                break;
            }
        }
    }
    if(found)
    {
        printf("Array is in wave form\n");
    }else{
        printf("Array is not in wave form\n");
    }
    return 0;
}