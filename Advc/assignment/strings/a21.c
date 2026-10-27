#include<stdio.h>
void checking_spaces(char str[]);
int main()
{
    char str[30];
    printf("enter the string:");
    scanf("%[^\n]",str);
    checking_spaces(str);
    return 0;
}
void checking_spaces(char str[])
{
    int i=0;
   while(str[i]!='\0')
   {
    if(str[i]==' '||str[i]=='\t')
    {
        if(str[i+1]==' '||str[i+1]=='\t')
        {
            int j=i;
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
   printf("%s\n",str);
   
}