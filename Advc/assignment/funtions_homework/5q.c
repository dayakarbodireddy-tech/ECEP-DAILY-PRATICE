#include<stdio.h>
void largest(int n,int n1);
void smallest(int n,int n1);
int main()
{
   int n,n1;
   printf("enter the num1 and num2: ");
   scanf("%d %d",&n,&n1);
   largest(n,n1);
   smallest(n,n1);
   return 0;
}
void largest(int n,int n1)
{
    if(n>n1)
    {
        printf("%d is largest\n",n);
    }else{
        printf("%d is largest\n",n1);
    }
}
void smallest(int n,int n1)
{
    if(n<n1)
    {
        printf("%d is smallest\n",n);
    }else{
        printf("%d is smallest\n",n1);
    }
}