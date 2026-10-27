#include<stdio.h>
int find_largest(int *arr,int n);
int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int ret=find_largest(arr,n);
    printf("Largest is %d",ret);
    return 0;
}
int find_largest(int *arr,int n)
{
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}