#include<stdio.h>
#include<string.h>
void compare_strings(char str1[],char str2[],int n);
int main()
{
    char str1[30];
    printf("enter a string1: ");
    scanf("%[^\n]",str1);
    char str2[30];
    printf("enter a string2: ");
    scanf(" %[^\n]",str2);
    int n;
    printf("enter the n: ");
    scanf("%d",&n);
    compare_strings(str1,str2,n);
    return 0;
}
void compare_strings(char str1[],char str2[],int n)
{
    int ret=strncmp(str1,str2,n);
    if(ret==0)
    {
        printf("Equal strings\n");
    }else if(ret>0)
    {
        printf("string1 is greater\n");
    }else{
        printf("string2 is greater\n");
    }
}