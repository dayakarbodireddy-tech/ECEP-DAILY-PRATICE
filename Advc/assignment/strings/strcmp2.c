#include<stdio.h>
int my_strcmp(char str1[],char str2[]);
int main()
{
    char str1[30];
    printf("enter a string1: ");
    scanf("%[^\n]",str1);
    char str2[30];
    printf("enter a string2: ");
    scanf(" %[^\n]",str2);
    int result=my_strcmp(str1,str2);
    if(result==0)
    {
        printf("equal\n");
    }else if(result>0)
    {
        printf("string1 is greater");
    }else{
        printf("string2 is greater");
    }
    return 0;
}
int my_strcmp(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0'&&str1[i]==str2[i])
    {
        i++;
    }
    return str1[i]-str2[i];
    

}