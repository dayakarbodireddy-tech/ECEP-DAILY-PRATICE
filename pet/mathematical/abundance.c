#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum>num)
    {
        printf("it is abundance number\n");
    }else if(num==sum)
    {
        printf("Perfect number\n");
    }else{
        printf("deffienct number\n");
    }
    return 0;
}