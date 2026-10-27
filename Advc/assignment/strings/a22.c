#include<stdio.h>
void squeezing(char str1[],char str2[]);
int main()
{
    char str1[30];
    printf("enter the string1: ");
    scanf("%[^\n]",str1);
    char str2[30];
    printf("enter the string2: ");
    scanf(" %[^\n]",str2);
    squeezing(str1,str2);
    return 0;
}

void squeezing(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        int j=0;
        while(str2[j]!='\0')
        {
            if(str1[i]==str2[j])
            {
                int k=i;
                while(str1[k]!='\0')
                {
                    str1[k]=str1[k+1];
                    k++;
                }
                i--;
                break;
            }else{
                j++;
            }
        }
            i++;
        
    }
    printf("%s\n",str1);
}