// Remove duplicate numbers from an array
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
    int uniq_size=0;
    int uniq[size];
    //checking duplicates
    int duplicate=0;
    for(int i=0;i<size;i++)
    {
        duplicate=0;
        for(int j=0;j<uniq_size;j++)
        {
            if(arr[i]==uniq[j])
            {
                duplicate=1;
                break;
            }
        }
        if(!duplicate)
        {
            uniq[uniq_size]=arr[i];
            uniq_size++;
        }
    }
    printf("Uniq array elements are : ");
    for(int k=0;k<uniq_size;k++)
    {
        printf("%d ",uniq[k]);
    }
    printf("\n");
}