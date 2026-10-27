#include<stdio.h>
//#include<stdlib.h>
int main()
{
    FILE *file_input;
    file_input=fopen("daya1.txt","r");
    if(file_input==NULL)
    {
        printf("not there\n");
        return 0;
    }
    fclose(file_input);
    printf("is there\n");
    return 0;
}