// Create a file named text.txt and add
// “abcdabcbcdaabc”.
// – WAP program to find the occurrences of character 'c'
// using ftell()
#include<stdio.h>
int main()
{
    FILE *fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("File is not there\n");
        return 1;
    }
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='c')
        {
        printf("%ld\n",ftell(fp));
        }
    }
    if(feof(fp))
    {
        printf("file has reached end\n");
    }
    if(ferror(fp))
    {
        printf("errors is there\n");
    }
    fclose(fp);
    return 0;
}