#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r+");
    printf("ftell:%ld\n",ftell(fp));
    //fprintf(fp,"dayaaa");
    if(fprintf(fp,"dayaodaya")<0)
    {
       printf("error occured while writing\n");
       return 1;
    }
    printf("ftell:%ld\n",ftell(fp));
    rewind(fp);
    int ch;
    while((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    printf("\n");
    if(feof(fp))
    {
        printf("file reached end\n");
    }
    if(ferror(fp))
    {
        printf("file occured the errors\n");
    }
}