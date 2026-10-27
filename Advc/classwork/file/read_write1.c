#include<stdio.h>
int main()
{
    FILE *fp=fopen("daya.txt","r+");
    if(fp==NULL)
    {
        printf("File is not there\n");
    }else{
    printf("%c\n",fgetc(fp));
    fprintf(fp,"dello");
    }
}