#include <stdio.h>

void squeeze(char str1[], char str2[]);

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    

    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}
void squeeze(char str1[],char str2[])
{
    int i=0;
    while(str[i]=!'\0')
    {
        int j=0;
        while(str[j]!='\0')
        {
            if(str[i]==str[j])
            {
                str[i]=str[i+1];
            }
                j++;
            
        }
    }
}