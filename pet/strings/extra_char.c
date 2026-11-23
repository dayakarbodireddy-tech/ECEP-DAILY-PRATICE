// Find the extra character between two strings
#include<stdio.h>
int main()
{
    char str1[20];
    printf("Enter the string1 : ");
    scanf("%s",str1);
    char str2[20];
    printf("Enter the string2 : ");
    scanf("%s",str2);
    
    int i=0;
    int found=0;
    while(str1[i]!='\0')
    {
       int j=0;
       found=0;
       while(str2[j]!='\0')
       {
        if(str1[i]==str2[j])
        {
            found=1;
            break;
        }
        j++;
       }
       if(found==0)
       {
        printf("%c",str1[i]);
       }
       i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        int j=0;
        found=0;
        while(str1[j]!='\0')
        {
            if(str1[j]==str2[i])
            {
                found=1;
                break;
            }
            j++;
        }
        if(found==0)
        {
            printf("%c",str2[i]);
        }
        i++;
    }
    printf("\n");
     
   
}