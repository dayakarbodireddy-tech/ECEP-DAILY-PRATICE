#include<stdio.h>
void fun(int *num);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    fun(&num);
    printf("main %d\n",num);
    return 0;
}
void fun(int *num)
{
    *num=20;
    
}