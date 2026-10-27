#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("daya.txt","");
    printf("hello daya\n");
    fclose(fp);
    return 0;
}