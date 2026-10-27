#include<stdio.h>
int main()
{
    int x=10;
    int *p;//pointer to a integer
    p = &x;//referncing
    // printf("Value of x =%d\n",x);
    // printf("address of x =%p\n",&x);
    // printf("value stored in p=%p",p);
    // printf("address of pointer variable p=%p\n",&p);
    // printf("value using pointer=%d\n",*p);
    printf("size of the pointer is %zu\n",sizeof(p));
    printf("size of the pointer is %zu\n",sizeof(*p));
    printf("size of value i s %zu\n",sizeof(x));
    return 0;

}