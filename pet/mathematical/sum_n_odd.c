//Find the sum of n odd natural numbers and display the odd numbers too
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum=0;
    printf("Odd numbers are : ");
    int count =0;
    for(int i=1;count<num;i++)
    {
        
        if(i % 2 !=0)
        {
            printf("%d ",i);
            count++;
            sum=sum+i;
        }
    
    }
    printf("\n");
    printf("sum of odd numbers is : %d\n",sum);
    return 0;
}