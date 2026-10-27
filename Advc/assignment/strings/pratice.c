#include<stdio.h>
#include<string.h>
int copying(char str1[],char str2[],int n);
int main()
{
    char str1[30];
    printf("enter the string1: ");
    scanf("%s",str1);
    char str2[30];
     printf("enter the string2: ");
    scanf(" %s",str2);
    int n=3;
    int ret=copying(str1,str2,3);
    if(ret==0)
    {
        printf("equal\n");
    }else if(ret>0){
        printf("str1 is greater\n");
    }else{
        printf("str2 is greater\n");
    }
    return 0;
    

}
int copying(char str1[],char str2[],int n)
{
    int result=strncmp(str1,str2,3);
    return result;
    
}