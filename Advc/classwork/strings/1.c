#include<stdio.h>
int main()
{
    char arr[]="HELLO WORLD";
    char *str="HELLO WORLD";
    char *str1="HELLO WORLD";
    char arr1[]="HELLO WORLD";
   // *arr='h';
    printf("%s\n",arr);
    printf("size of %lu\n",sizeof(arr));
    printf("size of %lu\n",sizeof(str));
    if(str==str1)
    {
        printf("equal\n");
    }else{
        printf("not equal\n");
    }
    return 0;
}