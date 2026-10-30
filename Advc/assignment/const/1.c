#include<stdio.h>
int main()
{
    const int num=10;
    int *ptr=&num;
    //num=20;
    *ptr=20;
    printf("%d\n",num);
}