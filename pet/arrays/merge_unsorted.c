//Merge two unsorted arrays, remove duplicates, and print the result in sorted order.
#include<stdio.h>
int main()
{
    int size1;
    printf("Enter the size1 :");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the array elements : ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int size2;
    printf("Enter the size2 :");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the array2 elements : ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merge_unsort[size1+size2];
    for(int i=0;i<size1;i++)
    {
        merge_unsort[i]=arr1[i];
    }
    for(int i=0;i<size2;i++)
    {
        merge_unsort[size1+i]=arr2[i];
    }
    int uniq_size=0;
    int uniq[size1+size2];
    int duplicate=0;
    for(int i=0;i<size1+size2;i++)
    {
        duplicate=0;
        for(int j=0;j<uniq_size;j++)
        {
            if(merge_unsort[i]==uniq[j])
            {
                duplicate=1;
                break;
            }
        }
        if(!duplicate)
        {
            uniq[uniq_size]=merge_unsort[i];
            uniq_size++;
        }
    }
    //sorting
    for(int k=0;k<uniq_size;k++)
    {
        for(int m=0;m<uniq_size-1;m++)
        {
            if(uniq[m]>uniq[m+1])
            {
                int temp=uniq[m];
                uniq[m]=uniq[m+1];
                uniq[m+1]=temp;
            }
        }
    }
    for(int i=0;i<uniq_size;i++)
    {
        printf("%d ",uniq[i]);
    }
    printf("\n");
    return 0;

}