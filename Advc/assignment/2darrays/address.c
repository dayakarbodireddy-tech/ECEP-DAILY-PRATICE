#include<stdio.h>
void fun(int *ptr1)
{
    printf("%d\n",*(ptr1+1));
}
void fun1(int **ptr2)
{
    printf("%d\n",*(ptr2+1));
}
int main()
{
    int arr[5]={1,2,3,4,5};
    fun(arr);
    fun1(&arr);
}