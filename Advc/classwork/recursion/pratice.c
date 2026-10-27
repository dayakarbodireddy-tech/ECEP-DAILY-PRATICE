#include<stdio.h>
void reverse(char str[]);
int main()
{ 
    
    //int len;
    char str[30];
    printf("enter a string:");
    scanf("%[^\n]",str);
    reverse(str);
    return 0;
}
void reverse(char str[])
{
    int size=0;
    while(str[size]!='\0')
    {
        size++;
    }
    
    
    for(int i=size-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}