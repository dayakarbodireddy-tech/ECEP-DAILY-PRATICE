#include<stdio.h>
int main()
{
    FILE *fp=fopen("file8.txt","r+");
    printf("");
    fprintf(fp,"Hello");
}