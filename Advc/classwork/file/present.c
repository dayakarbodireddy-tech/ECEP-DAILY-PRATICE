#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("daya.txt","r");
    if(fp==NULL)
    {
        printf("is not there\n");
        return 0;
    }
    fclose(fp);
    printf("is there\n");
    return 0;
}