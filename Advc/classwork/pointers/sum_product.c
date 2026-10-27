#include<stdio.h>
void sum(int *p,int *p1);
void product(int *p,int *p2);
int main()
{
    int a,b;
    printf("Enter the a:");
    scanf("%d",&a);
    printf("Enter the b:");
    scanf("%d",&b);
    sum(&a,&b);
    product(&a,&b);
    return 0;
}
void sum(int *p,int *p1)
{
    int sum=0;
    sum=*p+*p1;
    printf("Sum is %d\n",sum);
}
void product(int *p,int *p1)
{
    int product1;
    product1=*p * *p1;
    printf("product is %d",product1);
}