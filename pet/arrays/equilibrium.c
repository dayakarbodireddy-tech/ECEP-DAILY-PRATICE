// Find the equilibrium index in an array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //finding equilibrium index
    for(int i=0;i<size;i++)
    {
        int left_sum=0;
        int right_sum=0;
        for(int j=0;j<i;j++)
        {
            left_sum=left_sum+arr[j];
        }
        for(int j=i+1;j<size;j++)
        {
            right_sum=right_sum+arr[j];
        }
        if(left_sum == right_sum)
        {
            printf("the equilibrium index of an array is %d\n ",i);
        }
    }
    
}