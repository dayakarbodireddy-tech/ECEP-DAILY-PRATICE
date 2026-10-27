#include<stdio.h>
int largest(int a,int b)
{
    if(a>b)
    {
        return a;
    }else{
        return b;
    }
}
int main()
{
    int result= largest(20, 30);
    printf("largest is %d\n",result);
    return 0;
}