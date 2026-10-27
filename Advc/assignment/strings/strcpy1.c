#include<stdio.h>
void copying(char str[],char str1[]);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    char str[size];
    printf("enter a string: ");
    scanf("%s",str);
    char str1[size];
    copying(str,str1);
    return 0;
}
void copying(char str[],char str1[])
{
    int i=0;
    while(str[i]!='\0')
    {
        str1[i]=str[i];
        i++;
    }
    str1[i]='\0';
    printf("copied string: %s",str1);
}