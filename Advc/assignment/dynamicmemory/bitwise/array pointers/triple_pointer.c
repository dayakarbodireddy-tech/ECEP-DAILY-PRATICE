#include<stdio.h>
void triple_pointer(int ***ptr2);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int *ptr=&num;
    int **ptr1=&ptr;
    triple_pointer(&ptr1);
    printf("main %d\n",**ptr1);
    return 0;
}
void triple_pointer(int ***ptr2)
{
    static int num1=20;
    **ptr2=&num1;
}