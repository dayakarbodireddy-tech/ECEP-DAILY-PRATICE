#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr1[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int size1;
    printf("Enter the size1 : ");
    scanf("%d",&size1);
    int arr2[size1];
    printf("Enter the array2 elements : ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //finding sum array1
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr1[i];
    }
    int sum1=0;
    for(int i=0;i<size1;i++)
    {
        sum1=sum1+arr2[i];
    }
    int missing_num=sum - sum1;
    printf("Missing number is %d\n",missing_num);
    return 0;
}