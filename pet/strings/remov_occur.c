// Remove all occurrences of a specific character from a string
#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    char ch;
    printf("Enter the character to remove : ");
    scanf(" %c",&ch);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=ch)
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("After removing : %s\n",str);
    return 0;
}