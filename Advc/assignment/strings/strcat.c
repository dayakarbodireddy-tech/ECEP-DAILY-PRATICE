//merge two strings
#include<stdio.h>
#include<string.h>
void merge_strings(char *str1,const char *str2);
int main()
{
    char str1[100]="hello";
    char str2[50]="daya";
    merge_strings(str1,str2);
    return 0;
}
void merge_strings(char *str1,const char *str2)
{
    // char result[100];
    // strcpy(result,str1);
    strcat(str1,str2);
    printf("%s\n",str1);

}