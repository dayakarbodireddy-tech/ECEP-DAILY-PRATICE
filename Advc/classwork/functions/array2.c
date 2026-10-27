#include<stdio.h>
int largest()
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
   //checking largest
   int max=arr[0];
   for(int i=0;i<size;i++)
   {
     if(arr[i]>max)
     {
        max=arr[i];
     }
   }
   return max;
}
int main()
{
    int result=largest();
    printf("largest is %d",result);
    return 0;
}