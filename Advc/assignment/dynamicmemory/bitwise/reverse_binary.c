#include<stdio.h>
void reverse_binary(int num);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    reverse_binary(num);
    return 0;
}
void reverse_binary(int num)
{
    int mask=1;
    int rev=0;
    int bit;
    while(num>0)
    {
        bit=num & mask;
        rev=rev<<1;
        rev=rev | bit;
        num=num>>1;
    }
    printf("%d ",rev);
}