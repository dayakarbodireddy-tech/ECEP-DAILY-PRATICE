#include<stdio.h>
void func(int **ptr);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int *ptr=&num;
    func(&ptr);
    printf("main %d\n",*ptr);
}
void func(int **ptr)
{
    static int num1=20;
    *ptr=&num1;
}