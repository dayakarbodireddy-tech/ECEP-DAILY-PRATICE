#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr=malloc(4*sizeof(char));
    if(ptr==NULL)
    {
        printf("memory is not there\n");
        return 0;
    }
    for(int i=0;i<4*sizeof(char);i++)
    {
        scanf("%c",&ptr[i]);
    }
    for(int i=0;i<4*sizeof(char);i++)
    {
        printf("%c",ptr[i]);
    }
    
}