#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str=malloc(20);
    scanf("%[^\n]",str);
    printf("%s\n",str);
    free(str);
    return 0;
}