#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%s\n",str);
    int ret;
    ret=strlen(str);
    printf("%d\n ",ret);
    return 0;
}