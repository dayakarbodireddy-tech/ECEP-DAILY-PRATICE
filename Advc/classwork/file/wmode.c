#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","a");
    fprintf(fp,"\nello sam how are you\n");
    fclose(fp);
    return 0;
}