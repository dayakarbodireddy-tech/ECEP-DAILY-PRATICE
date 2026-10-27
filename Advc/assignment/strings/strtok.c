#include<stdio.h>
#include<string.h>
char *my_strtok(char *str,const char *delim);
int main()
{
    char str[]="are;you;:okay";
    char *token=my_strtok(str,";:");
    while(token!=NULL)
    {
        printf("%s\n",token);
        token=my_strtok(NULL,";:");
    }
    return 0;
}
char *my_strtok(char *str,const char *delim)
{
    static char *next;
    if(str!=NULL)
    {
       next=str;
    }
    if(next==NULL)
    {
        return NULL;
    }
    char *start=next;
    while(*start&&strchr(delim,*start))
    {
        start++;
    }
    if(*start=='\0')
    {
        return NULL;
    }
    char *end=start;
    while(*end&&!strchr(delim,*end))
    {
        end++;
    }
    if(*end)
    {
        *end='\0';
        next=end+1;
    }else{
        next=NULL;
    }
    return start;
}