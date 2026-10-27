#include<stdio.h>
void check(int num,int n);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    check(num,n);
    return 0;
}
void check(int num,int n)
{
    num=num&(1<<n);
    if(num!=0)
    {
        printf("1\n");
    }else{
        printf("0\n");
    }
    
    
}