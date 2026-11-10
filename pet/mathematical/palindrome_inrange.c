// Print palindromes in a range (example 100 to 200: 101, 111, 121, ...).
#include<stdio.h>
int main()
{
    int starting_num;
    printf("Enter the starting number : ");
    scanf("%d",&starting_num);
    int ending_num;
    printf("Enter the ending number : ");
    scanf("%d",&ending_num);
    for(int i=starting_num;i<ending_num;i++)
    {
        int temp=i;
        int rev=0;
        while(temp!=0)
        {
            rev=rev*10 +  temp%10;
            temp=temp/10;
        }
        if(rev==i)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;

}