#include<stdio.h>
void count(char arr[]);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    char arr[size];
    printf("enter the string: ");
    scanf("%s",arr);
    count(arr);
    return 0;

}
void count(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
}