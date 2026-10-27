#include<stdio.h>
int prime_palindrome(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ret=prime_palindrome(n);
    printf("prime and palindrome is =%d\n",ret);
    return 0;
}
int prime_palindrome(int n)
{
    while(1)
    {
        if(n<=1)
        {
            n++;
            continue;
        }
        int count=0;
        for(int i=2;i<n;i++)//for faster checking i*i<=n
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            int x=n;
            int rev=0;
            while(x!=0)
            {
            rev=rev*10+x%10;
            x=x/10;
            }
            if(rev==n)
            {
                return n;
            }
        }
        n++;
    }
}