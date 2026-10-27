#include<stdio.h>
void swap(void *ptr1,void *ptr2,int size);
int main()
{
    int n1=0x12345678;
    int n2=0xabcdef12;
    swap(&n1,&n2,sizeof(int));
   
    return 0;
}
void swap(char *ptr1,char *ptr2,int size)
{
  for(int i=0;i<size;i++)
  {
    char temp=(char *)(*(ptr1+i));
    (char *)(*(ptr1+i))=(char *)(*(ptr2+i));
    (char *)(*(ptr2+i))=temp;
  }
  
  printf("x1=%x\nx2=%x",ptr1,ptr2);
}