#include<stdio.h>
int main()
{
    int x=10;
    float y=20.89;
    void *ptr;
    ptr=&x;
    printf("x=%d\n",*(int *)ptr);
    void *ptr2;
    ptr2=&y;
    printf("y=%.2f\n",*(float *)ptr2);
    printf("%lu\n",sizeof((float *)ptr));
    printf("%lu\n",sizeof(ptr2));
    return 0;
}