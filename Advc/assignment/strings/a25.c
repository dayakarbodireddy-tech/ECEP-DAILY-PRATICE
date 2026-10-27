#include<stdio.h>
void reverse(char str[]);
int main()
{
    char str[30];
    printf("enter the string: ");
    scanf("%[^\n]",str);
    reverse(str);
    return 0;
}
void reverse(char str[])
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}
