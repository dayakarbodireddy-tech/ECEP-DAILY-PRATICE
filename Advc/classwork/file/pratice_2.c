#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r+");
    if(fprintf(fp,"bodireddy")<0)
    {
        printf("enter occured while writing\n");
        return 1;
    }
    rewind(fp);
    int ch;
    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    printf("\n");
    if(feof(fp))
    {
        printf("file has reached end\n");
    }
    if(ferror(fp))
    {
        printf("error occured\n");
    }
}