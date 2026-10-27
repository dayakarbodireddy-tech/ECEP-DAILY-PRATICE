#include<stdio.h>
void sorted(int arr[],int size);
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sorted(arr,size);
    return 0;
}
void sorted(int arr[],int size)
{
   int largest=arr[0];
   for(int i=0;i<size;i++)
   {
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
   } 
   int smallest=arr[0];
   for(int i=0;i<size;i++)
   {
    if(arr[i]<smallest)
    {
        smallest=arr[i];
    }
}
//printf("%d ",smallest);

for(int i=0;i<size;i++)
{
     int second=largest;
    for(int j=0;j<size;j++)
    {
        if(arr[j]>smallest&&arr[j]<second)
        {
            second = arr[j];
        }
    }
    printf("%d ",smallest);
    smallest=second;
}
 }