// Print palindrome-prime numbers up to N
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d",&n);
    //finding prime palindromes
    int count =0;
    printf("The %d prime palindromes : ",n);
    for(int i=2;count < n;i++)
    {
       int flag=1;
       for(int j=2;j<i;j++)
       {
        if(i % j == 0)
        {
            flag=0;
            break;
        }
       }
       if(flag==1)
       {
         int temp=i;
         int rev=0;
         while(temp!=0)
         {
            rev=rev*10 + temp%10;
            temp=temp/10;
         }
         if(rev==i)
         {
            printf("%d ",i);
            count++;
         }
       }
    }
    printf("\n");
    return 0;
}