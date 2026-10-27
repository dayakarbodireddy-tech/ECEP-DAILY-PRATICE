#include<stdio.h>
int main()
{
    FILE *fp=fopen("daya10.txt","a+");
    if(fp==NULL)
    {
        printf("File is not there\n");
        return 0;
    }else{
        fprintf(fp,"denii daya");
        rewind(fp);
        printf("%c\n",fgetc(fp));
    }
}