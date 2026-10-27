#include<stdio.h>
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    char str[size];
    printf("enter the string: ");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}