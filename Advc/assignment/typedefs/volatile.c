#include<stdio.h>
int main()
{
   volatile int i=0;
    unsigned int bit =0;
    while(1)
    {
        printf("bit is %d\n",bit);
        bit=!bit;
        for(int i=0;i<0xFFFFFFF;i++);
    }
}