// Find the largest palindrome in a given range.
#include<stdio.h>
int main()
{
    int starting_num;
    printf("Enter the number : ");
    scanf("%d",&starting_num);
    int ending_num;
    printf("Enter the ending number : ");
    scanf("%d",&ending_num);
    int rev=0;

    for(int i=ending_num-1;i>=starting_num;i--)
    {
      int temp=i;
      rev=0;
      while(temp!=0)
      {
        rev=rev*10 + temp%10;
        temp=temp/10;
      }
      if(rev==i)
      {
        printf("Largest palindrome number is %d\n",rev);
        return 0;
      }
      
    }
}