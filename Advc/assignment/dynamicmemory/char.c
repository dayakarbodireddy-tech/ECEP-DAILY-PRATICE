#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[4];
    printf("enter the n:\n");
    scanf("%s",str);
 char *ptr=malloc(4*sizeof(char));
 if(ptr==NULL)
 {
    printf("memory is not there\n");
    return 0;
 }
 //strcpy(ptr,str);
 for(int i=0;i<4*sizeof(char);i++)
 {
    printf("%c",*(str+i));
 }
 free(ptr);
}