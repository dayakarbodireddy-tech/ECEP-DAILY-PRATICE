// Replace specific character sequences in a string. Sequences noted in the test: bbc fi $, bbe fi &, bb fi *
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]=='b' && str[i+1]=='b' && str[i+2]=='c')
        {
            str[j]='*';
            j++;
            i=i+3;
        }
        else if(str[i]=='b' && str[i+1]=='b' && str[i+2]=='e')
        {
            str[j]='#';
            j++;
            i=i+3;
        }
        
        else{
            str[j]=str[i];
            j++;
            i++;
        }
    }
    str[j]='\0';
    printf("after adding specific characters : %s\n",str);
}