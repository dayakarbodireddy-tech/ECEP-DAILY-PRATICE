#include<stdio.h>
int getword(char arr[]);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    char arr[size];
    printf("enter a string: ");
    scanf("%s",arr);
    int ret=getword(arr);
    printf("%d",ret);
    return 0;
}
int getword(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        i++;
    }
    return i;
}