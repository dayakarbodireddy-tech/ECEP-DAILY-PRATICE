#include<stdio.h>
#include<stdlib.h>
int main()
{
    
  int *ptr=malloc(sizeof(int));
  if(ptr==NULL)
  {
    printf("memory is not there\n");
    return 0;
  }else{
    //*ptr=10;
    scanf("%d",ptr);
    printf("%d\n",*ptr);
  }
}