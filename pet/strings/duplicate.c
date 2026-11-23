// Remove duplicate characters from a string.
#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0')
    {
        int found=0;
        int j=0;
        while(j<i)
        {
            if(str[i]==str[j])
            {
                found=1;
                break;
            }
            j++;
        }
        if(found==0)
        {
            printf("%c",str[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
    
}