#include<stdio.h>
#define SWAP(t,n1,n2) temp=n1;n1=n2;n2=temp
int main()
{
    char n1='A',n2='D',temp;
    SWAP(char,n1,n2);
    printf("n1=%c\nn2=%c\n",n1,n2);
}