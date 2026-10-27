#include<stdio.h>
int fun()
{
   int x=1;
   printf("%d\n",x);
   x++;
}
int main()
{
    int x;
    fun();

    fun();
    printf("%d\n",x);
    return 0;
}