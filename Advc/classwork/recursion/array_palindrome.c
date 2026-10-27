#include<stdio.h>
void palindrome(int arr[],int size);
int reverse(int arr[],int size);
int main()
{
    int size;
    printf("Enter the number: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    palindrome(arr,size);
    return 0;
}
void palindrome(int arr[],int size)
{
    int rev=reverse(arr,size);
    if(arr[]==rev)
    {
        printf("%d is palindrome",n);
    }else{
        printf("%d is not palindrome",n);
    }
    
}
int reverse(int arr[],int size)
{
    int rev=0;
    if(n==0)
   
    return rev;
    
   return reverse(n/10, rev*10+(n%10));
   
   
    
    
}
    





    