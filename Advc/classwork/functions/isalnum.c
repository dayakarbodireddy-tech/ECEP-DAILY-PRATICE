#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    int ret = isalnum(ch);
    printf("%d",ret);
    return 0;
}