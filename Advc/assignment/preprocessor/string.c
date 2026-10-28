#include<stdio.h>
#define STRING(n) #n
int main()
{
    
    printf("%s\n",STRING(hello));
    printf("%s\n",STRING(20));
    printf("%s\n",STRING(DAYA REDDY));
}