#include<stdio.h>
int main()
{
    char x;
    printf("enter the value:");
    scanf("%c",&x);
    char *p;
    p=&x;
    printf("character is %c\n",*p);
    printf("address of that %p\n",p);
    //printf("%p\n",&p);
    printf("%p",&x);
    return 0;

}