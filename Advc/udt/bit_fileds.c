#include<stdio.h>
struct bit_fileds{
   unsigned int a : 4;
   unsigned int b : 4;
unsigned int c : 4;
};
int main()
{
struct bit_fileds s1;
{
   s1.a=10;
   s1.b=20;
   s1.c=8;
}
printf("%zu\n",sizeof(s1));
printf("%d\n",s1.a);
printf("%d\n",s1.b);
printf("%d\n",s1.c);
}
