#include<stdio.h>
#define MERGE(n1,n2) n1##n2
int main()
{
    
printf("%d\n",MERGE(10,1));

}