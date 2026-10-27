#include<stdio.h>
#define CHECK_NBIT(num,n,m) num & (1<<n)
int main()
{
    int num=13;
    if(CHECK_NBIT(num,2,3))
    {
        num=num & ~(1<<3);
        printf("%d\n",num);
    }else{
        printf("%d\n",num);
    }

}