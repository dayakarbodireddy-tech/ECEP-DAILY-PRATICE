#include<stdio.h>
int  main()
{
    int x,y;
    x=2;
    
    y=function(x);
    printf("%d",y);
    return 0;
}
float function(int x)
{
    return x+1;
}
