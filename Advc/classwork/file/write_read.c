#include<stdio.h>
int main()
{
    FILE *fp=fopen("daya9.txt","w+");
    if(fp==NULL)
    {
        printf("File is not there\n");
        return 0;
    }else{

    
        fprintf(fp,"hello world");
        rewind(fp);
        printf("%c\n",fgetc(fp));
    }
}