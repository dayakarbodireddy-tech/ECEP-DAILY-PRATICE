#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("file is not there\n");
        return 0;
    }
    if(feof(fp))
    {
        printf("file has rechaed end\n");
    }else{
        printf("not reached\n");
    }
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
    fclose(fp);
    return 0;
}