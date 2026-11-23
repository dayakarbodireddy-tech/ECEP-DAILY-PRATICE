// Find the length of the last word in a string. Examples: "Hello world" fi 5; "Fly me to the moon" fi 3.
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    printf("Original length of the string : %d\n",len);
    int count=0;
    int end=len-1;
    while(end>=0 && str[end]==' ')
    {
        end--;
    }
    while(str[end]!='\0' && str[end]!=' ')
    {
        count++;
        end--;
    }
    printf("Length of the last word : %d\n",count);
    return 0;
}