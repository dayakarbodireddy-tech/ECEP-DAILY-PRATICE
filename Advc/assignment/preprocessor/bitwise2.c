#include<stdio.h>
#define COUNT_BITS(num,i) num & 1<<i
int main()
{
    int count =0;
    for(int i=31;i>=0;i--)
    {
        if(COUNT_BITS(10 , i))
        {
           count++;
        }
    }
    printf("%d\n",count);
}