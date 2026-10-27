#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.bmp","wb");
    if(fp==NULL)
    {
        printf("File is not there\n");
        return 0;
    }
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    fwrite(&num,sizeof(int),1,fp);
    fclose(fp);
    return 0;
}