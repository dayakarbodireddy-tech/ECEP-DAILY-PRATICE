#include<stdio.h>
void reverse(char str[],int i);
int main()
{
    char str[30];
    int i=0;
    printf("enter the string: ");
    scanf("%[^\n]",str);
    reverse(str,0);
    return 0;
}
void reverse(char str[],int i)
{
    int len=0;
    
    while(str[len]!='\0')
    {
        len++;
    }
    if(i==len)
    {
        return;
    }else{
        reverse(str,i+1);
        printf("%c",str[i]);
    }
    
}