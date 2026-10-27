#include<stdio.h>
int palindrome(int n)
{
    int rev=0,remainder;
    int x=n;
    while(n>0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    if(x==rev)
    {
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int result=palindrome(123);
    if(result)
    {
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}