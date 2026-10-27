#include<stdio.h>
void fun(int **ptr);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int *ptr=&num;
    fun(&ptr);
    printf("main %d\n",*ptr);
    return 0;
}
void fun(int **ptr)
{
    printf("fun %d\n",**ptr);
}