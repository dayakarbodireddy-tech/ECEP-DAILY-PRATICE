#include<stdio.h>
void replace_blank(char str[]);
int main()
{
    char str[1000];
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    replace_blank(str);
    return 0;
}
void replace_blank(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='\t')
        {
            if(str[i+1]==' '||str[i+1]=='\t')
            {
                int j=i+1;
                while(str[j]!='\0')
                {
                    str[j]=str[j+1];
                    j++;
                }
            
             }else{
                i++;
         }
        }else{
            i++;
        }
    }
    printf("%s",str);
}