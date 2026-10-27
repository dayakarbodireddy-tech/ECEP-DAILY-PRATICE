#include<stdio.h>
int atoi(char *s);
int main()
{
    char str[30];
    printf("enter the string: ");
    scanf("%s",str);
    int ret=atoi(str);
    printf("%d\n",ret);
    return 0;
}
int atoi(char *s)
{
    int i=0;
    int sign=1;
    while(s[i]==' ')
    {
        i++;
    }
    if(s[i]=='+')
    {
        i++;
    }
    else if(s[i]=='-')
    {
        sign=-1;
        i++;
    }
    if(s[i]<'0'||s[i]>'9')
    {
        return 0;
    }
    int num=0;
    while(s[i]!='\0')
    {
        if(s[i]>='0'&&s[i]<='9')
        {
          num=s[i]-'0'+num*10;
          if(sign==1 && num>2147483647)
          {
            return 2147483647;
          }
          if(sign==-1 && num>2147483648)
          {
            return -2147483648;
          }
        }else{
            break;
        }
        i++;
    }
    return num*sign;
}