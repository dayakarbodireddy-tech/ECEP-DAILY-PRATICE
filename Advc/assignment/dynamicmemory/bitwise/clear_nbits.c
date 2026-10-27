#include<stdio.h>
void clear_bits(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    clear_bits(num);
    return 0;
}
void clear_bits(int num)
{
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    int mask=1;
    num=num & ~((mask<<n)-1);
    for(int i=31;i>=0;i--)
    {
        if(num & (1<<i))
        {
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
    printf("\n");
}