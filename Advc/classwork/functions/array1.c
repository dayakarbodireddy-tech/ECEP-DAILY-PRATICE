#include<stdio.h>
void array(int arr[],int size)
{
    int i;
    int sum=0;
    for(i=0;i<size;i++)
    {
       sum=sum+arr[i];
    }
    printf("sum is:%d",sum);
}
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    array(arr,size);
    return 0;
}