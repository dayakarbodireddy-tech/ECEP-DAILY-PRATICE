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
    //finding smallest positive
    int found=0;
    for(int i=1;;i++)
    {
        found=0;
        for(int j=0;j<size;j++)
        {
            if(arr[j]==i)
            {
                //printf("%d ",arr[i]);
                found=1;
                break;
            }
        }
        if(found==0)
        
        {
            printf("%d ",i);
            printf("\n");
            return 0;
        }
    }
    
}