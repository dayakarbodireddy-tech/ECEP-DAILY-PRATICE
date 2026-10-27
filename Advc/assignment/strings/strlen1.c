#include<stdio.h>
int count(char str[]);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    char str[size];
    printf("enter a string: ");
    scanf("%s",str);
    int ret=count(str);
    printf("%d",ret);
    return 0;
}
int count(char str[])
{
    int i=0;
    while(str[i]!=0)
    {
        i++;
    }
    return i;
}