// Merge two arrays into a third array using pointers.
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
    int size2;
    printf("Enter the size2 : ");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the array2 elements : ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merge_arr[size+size2];
    int *p=arr;
    int *p2=arr2;
    int *merge=merge_arr;
    for(int i=0;i<size;i++)
    {
        //merge_arr[i]=arr[i];
        *(merge+i) = *(p+i);
    }
    for(int i=0;i<size2;i++)
    {
        //merge_arr[size + i]=arr2[i];
        *(merge+size+i) = *(p2+i);
    }
    printf("Merged array is : ");
    for(int i=0;i<size+size2;i++)
    {
        //printf("%d ",merge_arr[i]);
        printf("%d ",*(merge+i));
    }
    printf("\n");
    return 0;
}