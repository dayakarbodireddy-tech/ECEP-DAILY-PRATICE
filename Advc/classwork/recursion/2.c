#include<stdio.h>
void print(int);
int main()
{
    int x;
    printf("enter the num: ");
    scanf("%d",&x);
    print(x);
    return 0;
}
void print(int x)
{
    if(x>0)
    {
        //printf("Hello world! %d\n ",x);
       print(x-1);
       printf("hello world! %d\n ",x);
    }
}