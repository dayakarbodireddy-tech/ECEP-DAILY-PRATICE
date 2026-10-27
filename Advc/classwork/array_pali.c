#include<stdio.h>
int main()
{
   int size,i;
   printf("enter the size:");
   scanf("%d",&size);
   int arr[size];
   
   printf("enter the array elements:");
   for(i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }
   
   printf("array elements before reversing:\n");
   for(i=0;i<size;i++)
   {
    printf("%d ",arr[i]);
   }
   printf("\n");
   
   printf("array elements after reversing:");
   for(i=size-1;i>=0;i--)
   {
    printf("%d ",arr[i]);
   }
   printf("\n");
   // if(arr[i]==arr[i])
   // {
   //  printf("array is palindrome.");
   // }else{
   //  printf("array is not palindrome");
   // }
   int ispalindrome=1;
   for(i=0;i<size/2;i++)
   {
      if(arr[i] != arr[size-1-i])
      {
         ispalindrome=0;
         break;
      }
   }
   if(ispalindrome)
   {
      printf("array is palindrome");
   }else{
      printf("array is not palindrome.");
   }
   return 0;
   
}