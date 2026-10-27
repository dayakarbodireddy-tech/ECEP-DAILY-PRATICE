#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("file is not there\n");
        return 0;
    }
    
    printf("starting position %ld\n",ftell(fp));
    fseek(fp,4,SEEK_SET);
    printf("second starting position %ld\n",ftell(fp));
    fseek(fp,-2,SEEK_CUR);
    printf("third starting position %ld\n",ftell(fp));
    fseek(fp,-5,SEEK_END);
    printf("fourth starting position %ld\n",ftell(fp));
    char ch;
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
        printf("file has occured the errors\n");
    }
    fclose(fp);
    return 0;
}