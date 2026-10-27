#include<stdio.h>
void leap_year(int n);
int main()
{
    int n;
    printf("enter the year: ");
    scanf("%d",&n);
    leap_year(n);
    return 0;
}
void leap_year(int n)
{
    if((n%4==0 || n%400==0))
    {
        printf("%d is a leap year",n);
    }else if(n%100==0){
        printf("%d is not leap year",n);
    }else 
    {
        printf("this year not leaf year %d",n);
    }
}