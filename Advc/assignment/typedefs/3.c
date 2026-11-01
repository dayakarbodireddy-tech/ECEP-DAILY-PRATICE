#include<stdio.h>
typedef char string[100];
int main()
{
    string str={"hello"};
    printf("%zu\n",sizeof(str));
    string str1,str2;
    printf("%zu %zu\n",sizeof(str1),sizeof(str2));
}