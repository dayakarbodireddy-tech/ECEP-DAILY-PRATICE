// Find factorial using recursion.
#include<stdio.h>
void factorial(int n);
int main()
{
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  factorial(n);
  return 0;
}
void factorial(int n)
{
    static int fact=1;
    if(n>1)
    {
        fact=fact*n;
        factorial(n-1);
        
    }else{
        printf("Factorial of given number is : %d\n",fact);
    }
    
}