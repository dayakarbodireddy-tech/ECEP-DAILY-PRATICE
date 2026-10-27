#include<stdio.h>
void largest(int a,int b,int c);
void smallest(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("enter the num1 and num2 and num3: ");
    scanf("%d %d %d",&a,&b,&c);
    largest(a,b,c);
    smallest(a,b,c);
    return 0;
}
void largest(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        printf("%d is largest\n",a);
    }else if(b>a&&b>c)
    {
        printf("%d is largest\n",b);
    }else{
        printf("%d is largest\n",c);
    }
}
void smallest(int a,int b,int c)
{
    if(a<b&&a<c)
    {
        printf("%d is smallest\n",a);
    }else if(b<a&&b<a)
    {
        printf("%d is smallest\n",b);
    }else{
        printf("%d is smallest\n",c);
    }
}