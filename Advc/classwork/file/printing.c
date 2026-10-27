#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r");
    fprintf("eof : ",feof(fp));
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    printf("\n");
    //feof is checking file pointer is pointing to eof or not if pointing to eof it returns non zero and if not is return 0
    //ferror

}