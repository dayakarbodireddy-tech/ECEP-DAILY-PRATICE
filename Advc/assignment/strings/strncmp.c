#include<stdio.h>
#include<string.h>
int my_strncmp(char *str1,char *str2,int n);
int main()
{
    char str1[30];
    //printf("Enter the string1 : ");
    scanf("%[^\n]",str1);
    char str2[30];
   // printf("enter the string2 : ");
    scanf(" %[^\n]",str2);
    int n;
    //printf("Enter the n : ");
    scanf("%d",&n);
    int ret=my_strncmp(str1,str2,n);
    if(ret==0)
    {
        printf("str1 is equal to str2");
    }else if(ret>0)
    {
        printf("str2 is less than str1");
    }else{
        printf("str1 is less than str2");
    }
    return 0;
}
int my_strncmp(char *str1,char *str2,int n)
{
    int result=strncmp(str1,str2,n);
    return result;
}