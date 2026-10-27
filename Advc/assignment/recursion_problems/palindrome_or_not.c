#include<stdio.h>
int palindrome(int n,int rev);
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int rev;
    int ret=palindrome(n,0);
    if(ret==n)
    {
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}
int palindrome(int n,int rev)
{
    
    if(n==0)
    {
        return rev;
    }else{
        return palindrome(n/10,rev*10+n%10);
    }
}