#include<stdio.h>
int main()
{
    char ch;
    FILE *fptr1;
    fptr1=fopen("daya.txt","r");
    FILE *fptr2;
    fptr2=fopen("daya1.txt","w");
    while(fscanf(fptr1,"%c",&ch)!=EOF)
    {
    fprintf(fptr2,"%c",ch);
    }
    return 0;

}