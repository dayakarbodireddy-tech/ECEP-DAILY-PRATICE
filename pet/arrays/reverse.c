#include<stdio.h>
void reverse(int size,int arr[])
{
  int start=0;
  int end=size-1;
  while(start<end)
  {
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;

  }
  printf("After reversing: ");
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Orirginal array elements: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverse(size,arr);
    return 0;
}