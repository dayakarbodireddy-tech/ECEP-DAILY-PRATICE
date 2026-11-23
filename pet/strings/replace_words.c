//6. Replace words in a string. Example from notes: string1 = "wives are knives", replacement/string2 =
//"function pointer" fi output "function are knives".
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    printf("Enter the string : ");
    scanf("%[^\n]",str1);
    char str2[50];
    printf("Enter the string2 : ");
    scanf(" %[^\n]",str2);
    int i=0;
    int j=0;
    char temp[50];
    char temp1[50];
    while(str1[i]!='\0' && str1[i]!=' ')
    {
        temp[j]=str1[i];
        j++;
        i++;
    }
    temp[j]='\0';
    char temp2[200];
    j=0;
    while(str1[i]!='\0')
    {
        temp2[j]=str1[i];
        j++;
        i++;
    }
    temp2[j]='\0';
    i=0,j=0;
    while(str2[i]!='\0' && str2[i]!=' ')
    {
        temp1[j]=str2[i];
        j++;
        i++;
    }
    temp1[j]='\0';
    strcat(temp1,temp2);
    printf("%s\n",temp1);
    
    
    
    
}