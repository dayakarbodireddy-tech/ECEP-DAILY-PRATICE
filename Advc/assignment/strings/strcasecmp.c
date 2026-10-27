//strcasecmp
#include<stdio.h>
#include<string.h>
int compare_strings(const char *str1,const char *str2);
int main()
{
    char *str1="Hello daya";
    char *str2="hello DAYA";
    int ret=compare_strings(str1,str2);
    if(ret==0)
    {
        printf("equal\n");
    }else if(ret>0)
    {
        printf("string1 is greater\n");
    }else{
        printf("string2 is greater\n");
    }
}
int compare_strings(const char *str1,const char *str2)
{
    int result=strcasecmp(str1,str2);
    return result;
}