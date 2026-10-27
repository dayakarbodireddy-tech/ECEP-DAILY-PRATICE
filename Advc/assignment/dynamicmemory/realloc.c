#include<stdio.h>
#include<stdlib.h>
void changing_memory(int *ptr1);
int main()
{
    int *ptr=malloc(5*sizeof(int));
    ptr=realloc(ptr,40);
    ptr[2]=20;
    ptr[9]=89;
    changing_memory(ptr);
    free(ptr);
    return 0;

}
void changing_memory(int *ptr1)
{
  //ptr1[2]=10;
  printf("%p\n",ptr1);
  //ptr1[37]=50;
 // ptr1=realloc(ptr1,24);
  printf("%p\n",ptr1);
  printf("x=%d\n X1=%d\n",ptr1[2],ptr1[9]);
}