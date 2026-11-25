#include<stdio.h>
int count_digits(int n)
{
     int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;

}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int ret=count_digits(n);
    printf("The digits in a number : %d\n",ret);
    return 0;
}