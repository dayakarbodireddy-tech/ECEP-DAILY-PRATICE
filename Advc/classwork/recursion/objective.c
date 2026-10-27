#include<stdio.h>
int fun(int a);
int main()
{
    int a=4;
    fun(4);
    return 0;
}
int fun(int a)
{
    if(a>0)
    {
        fun(a-1);
        fun(--a);
    }
    printf("%d ",a);
    
}