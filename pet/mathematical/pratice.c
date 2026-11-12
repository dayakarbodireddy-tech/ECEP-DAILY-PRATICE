// Print N prime numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
    //finding n numbers
    int count =0;
    if(n < 0)
    {
        printf("Invalid number\n");
        return 0;
    }
    for(int i=2;count < n;i++)
    {
        int flag=1;
       //if(int j=2;j<i;j++)
       for(int j=2;j < i;j++)
        {
            if(i % j == 0)
            {
               flag=0;
               break;
            }
        }
        if(flag==1)
        {
            int tem
        }
    }
}