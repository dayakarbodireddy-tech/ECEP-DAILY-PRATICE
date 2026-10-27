#include<stdio.h>
int main()
{
    FILE *fptr=fopen("file.txt","r");
    fprintf(fptr,"hello");
    printf("%d\n",ferror(fptr));
    FILE *ptr1=fopen("file.txt","w");
    fprintf(fptr,"hello");
    printf("%d\n",ferror(ptr1));
    
    return 0;
}