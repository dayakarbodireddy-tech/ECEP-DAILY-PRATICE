#include<stdio.h>
#define SWAP(n1,n2) \
temp=n1;\
n1=n2;\
n2=temp
int main()
{
    int temp,n1=10,n2=20;
    SWAP(n1,n2);
    printf("n1=%d\n n2=%d\n",n1,n2);
}