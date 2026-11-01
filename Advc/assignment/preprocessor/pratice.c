#include<stdio.h>
#define SIZE 10
int main()
{
    #undef SIZE
    #if defined(SIZE)
      printf("macro is there\n");
    #elif SIZE
    printf("we found in elif\n");
    #else
    printf("macro is not there\n");  
    #endif
}
