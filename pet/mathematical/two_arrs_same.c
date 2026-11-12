// Compare two arrays and determine whether they are the same
#include<stdio.h>
int main()
{
    int size1;
    printf("Enter the size1:");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the array elements : ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int size2;
    printf("Enter the size1:");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the array elements : ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    if(size1!=size2)
    {
        printf("not same\n");
        return 0;
    }
    int count=0;
    for(int i=0;i<size1;i++)
    {
        if(arr1[i]==arr2[i])
        {
            count++;
        }
    }
    if(count==size1 && count == size2)
    {
        printf("both arrays are same\n");
    }else{
        printf("Both arrays are not same\n");
    }
}