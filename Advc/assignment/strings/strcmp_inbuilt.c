#include<stdio.h>
#include<string.h>
void compare_strings(char str1[],char str2[]);
int main()
{
    char str1[30];
    printf("enter a string: ");
    scanf("%[^\n]",str1);
    char str2[30];
    printf("enter a string2: ");
    scanf(" %[^\n]",str2);
    compare_strings(str1,str2);
    return 0;
}
void compare_strings(char str1[],char str2[])
{
    int ret=strcmp(str1,str2);
    
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