#include<stdio.h>
#define SIZE 10
int main()
{
    //undef SIZE
    #ifndef SIZE
    printf("size is not defined\n");
    #else
    printf("size is defined\n");
    
   #endif
}