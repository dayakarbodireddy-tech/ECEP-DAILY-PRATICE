#include<stdio.h>
void leading_setbit(int num);
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    leading_setbit(num);
    return 0;
}
void leading_setbit(int num)
{
    unsigned int mask=1;
    for(int i=31;i>=0;i--)
    {
        if((unsigned int)num & mask<<i)
        {
            printf("leading set value is %d\n",mask<<i);
            break;
        }
    }
}