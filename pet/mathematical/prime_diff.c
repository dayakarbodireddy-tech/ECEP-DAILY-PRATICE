// Print prime numbers in a range whose consecutive prime numbers differ by 6.
#include<stdio.h>
int main()
{
    int starting_num;
    printf("Enter the starting number : ");
    scanf("%d",&starting_num);
    int ending_num;
    printf("Enter the ending number : ");
    scanf("%d",&ending_num);
    //finding prime numbers in range
    int previous_prime=-1;
    for(int i=starting_num;i<ending_num;i++)
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
                if(previous_prime!=-1)
                {
                    if(i-previous_prime==6)
                    {
                        printf("%d %d ",previous_prime,i);
                    }
                }
            previous_prime=i;
            }
        
        
    }
    printf("\n");
    return 0;
}