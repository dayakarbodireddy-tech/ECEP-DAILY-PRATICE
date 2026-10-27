#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r+");
    if(fp==NULL)
    {
        printf("file is not there\n");
        return 0;
    }
    printf("position1:%ld\n",ftell(fp));
    
    char ch;
    ch=fgetc(fp);
    //putchar(ch);
    printf("%c\n",ch);
    printf("after one reading %ld\n",ftell(fp));
}