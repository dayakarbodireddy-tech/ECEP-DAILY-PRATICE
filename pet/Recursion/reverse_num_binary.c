// Reverse a number and convert it to binary using recursion
#include<stdio.h>
void reverse(int n)
{
    
    static int rev=0;
    if(n==0)
    {
        printf("After reversing :%d\n",rev);
        return;
    }else{
        int remainder=n%10;
        rev=rev*10+remainder;
        reverse(n/10);
    }
    //converting in binary
    
}
void binary(int n)
{
    
    if(n==0)
    {
        return;
        
    }else{
         
         binary(n/2);
         printf("%d",n%2);

    }
    
    
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    reverse(n);
    binary(n);
    return 0;
}
