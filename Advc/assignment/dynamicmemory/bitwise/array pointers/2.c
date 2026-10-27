#include<stdio.h>
void fun(char* array[],int size);
int main()
{
    char str1[50];  
    
    char str2[50];
    
    char str3[50];
    
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    char* string[size];
    string[0]=str1;
    string[1]=str2;
    string[2]=str3;
    for(int i=0;i<size;i++)
    {
        scanf("%s",string[i]);
    }
    fun(string,size);
    
}
void fun(char* array[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%s ",array[i]);
    }
}