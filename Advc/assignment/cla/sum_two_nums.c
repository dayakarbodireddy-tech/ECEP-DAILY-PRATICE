#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  printf("The argument count is %d\n",argc);
  int a=0;
  int b=0;
  a=atoi(argv[1]);
 
  b=atoi(argv[2]);
  int sum=a+b;
  float average=sum/2.0;
  printf("The average is %g\n",average);
  return 0;
}