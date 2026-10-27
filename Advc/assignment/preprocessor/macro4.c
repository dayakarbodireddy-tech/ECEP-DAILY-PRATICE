#include<stdio.h>
#define SWAP(t,n1,n2) \
t temp=n1;\
n1=n2;\
n2=temp;
int main()
{
   
    float n1=10.1,n2=30.3;
    SWAP(float,n1,n2);
    printf("n1=%g\nn2=%g\n",n1,n2);
}

   