// Check whether a number is a palindrome.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int x=num;
    int rev=0;
    if(num < 0)
    {
        printf("Invalid input\n");
        return 0;
    }
    while(num!=0)
    {
        rev=rev*10 + num %10;
        num=num/10;
    }
    if(x==rev)
    {
        printf("The number is palindrome %d\n",x);
    }else{
        printf("The number is not palindrome %d\n",x);
    }
}