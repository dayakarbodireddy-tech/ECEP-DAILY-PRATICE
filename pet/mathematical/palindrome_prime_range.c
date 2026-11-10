//. Print numbers that are both prime and palindrome within a range
#include<stdio.h>
int main()
{
    int starting_num;
    printf("Enter the starting number : ");
    scanf("%d",&starting_num);
    int ending_num;
    printf("Enter the ending number : ");
    scanf("%d",&ending_num);
    if(starting_num < 1)
    {
        printf("invalid range\n");
        return 0;
    }
    for(int i=starting_num;i<ending_num;i++)
    {
        int flag=1;
        //prime cheking
        for(int j=2;j<i;j++)
        {
            if(i % j == 0)
            {
               flag=0;
               break;
            }
        }
        //palindrome checking
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
            }
        }
    }
    printf("\n");
    return 0;
}