#include<stdio.h>
void reverse(int arr[],int i,int size);
int main()
{
    int size;
    printf("enter a size: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements:");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    int i=0;
    reverse(arr,0,size);
    return 0;

}
void reverse(int arr[],int i,int size)
{
  if(i==size)
  {
    return;
  }else{
    reverse(arr,i+1,size);
    printf("%d ",arr[i]);
  }
}