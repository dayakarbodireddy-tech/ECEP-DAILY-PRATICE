#include<stdio.h>
void get_bit(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    get_bit(num);
    return 0;
}
void get_bit(int num)
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    int mask=1;
    num=(num & (mask<<n));
    printf("%d %d\n",n,num);
    
    
}


