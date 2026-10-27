#include<stdio.h>
int main()
{
    char str[100];
    printf("enter the character: ");
    fgets(str,sizeof(str),stdin);
    printf("you entered is %s",str);
    return 0;
}