//Find the mismatched number in two arrays
#include<stdio.h>
int main()
{
    int size1;
    printf("Enter the size1 : ");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the array elements:");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int size2;
    printf("Enter the size2 : ");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the array2 elements:");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<size2;i++)
    {
        int flag=1;
        for(int j=0;j<size1;j++)
        {
            if(arr1[j]==arr2[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",arr2[i]);
        }
    }
    for(int i=0;i<size1;i++)
    {
        int flag=1;
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",arr1[i]);
        }
    }
    printf("\n");
    return 0;

}