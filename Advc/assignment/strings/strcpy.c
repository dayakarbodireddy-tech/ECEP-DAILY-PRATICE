#include<stdio.h>
#include<string.h>
int main()
{
    int size;
    printf("enter size: ");
    scanf("%d",&size);
    char str[size];
    printf("enter a string: ");
    scanf("%s",str);
    char str1[size];
    strcpy(str1,str);
    printf("copied string:%s",str1);
    return 0;

}