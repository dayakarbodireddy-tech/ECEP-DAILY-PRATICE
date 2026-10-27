#include<stdio.h>
void reverse(char str[],int i);
int main()
{
    char str[30];
    printf("enter a string: ");
    scanf("%[^\n]",str);
    int i;
    reverse(str,0);
    return 0;
}
void reverse(char str[],int i)
{
    
    if(str[i]=='\0')
    {
        return;
    }else{
     reverse(str,i+1);
     printf("%c",str[i]);
    }
}