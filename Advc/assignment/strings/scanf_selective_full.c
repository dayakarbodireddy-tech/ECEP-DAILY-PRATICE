#include<stdio.h>
int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%[^\n]",str);
    printf("entered string is %s",str);
    return 0;
}