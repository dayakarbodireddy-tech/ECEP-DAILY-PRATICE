#include<stdio.h>
#include<stdarg.h>
int my_print(char *str,...)
{
    va_list ap;
    va_start(ap,str);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]== '%')
        {
            switch(str[i+1])
            {
                case 'd' : printf("%d",va_arg(ap,int));
                break;
                case 's' : printf("%s",va_arg(ap,char *));
                break;
                case 'c' : printf("%c",va_arg(ap,int));
            }
        }
        i++;
    }
    va_end(ap);
}
int main()
{
    printf("%d %s %c\n",10,"hello",'s');
}