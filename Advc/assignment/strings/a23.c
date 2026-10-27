#include<stdio.h>
void atoi(char str[]);
int main()
{
    char str[30];
    printf("enter the string: ");
    scanf("%s",str);
    atoi(str);
    return 0;
}
void atoi(char str[])
{
    int i=0;
    int sign=1;
    int num=0;
    if(str[i]=='+')
    {
        i++;
    }
    if(str[i]=='-')
    {
        sign=-1;
        i++;
    }
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
          num=str[i]-'0'+num*10;
          i++;
        }else{
           printf("%d\n",num);
           return;
        }
    }
    printf("%d\n",num*sign); 
}