#include<stdio.h>
void palindrome(int n);
int reverse(int n,int rev);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
void palindrome(int n)
{
    int rev=reverse(n,0);
    if(n==rev)
    {
        printf("%d is palindrome",n);
    }else{
        printf("%d is not palindrome",n);
    }
    
}
int reverse(int n,int rev)
{
    
    if(n==0)
   
    return rev;
    
   return reverse(n/10, rev*10+(n%10));
   
   
    
    
}
    





    