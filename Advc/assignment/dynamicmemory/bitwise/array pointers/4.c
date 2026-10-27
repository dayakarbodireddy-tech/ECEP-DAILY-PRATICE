#include<stdio.h>
void swap(int *ptr1,int *ptr2);
int main()
{
    int num1;
    printf("Enter the num: ");
    scanf("%d",&num1);
    int num2;
    printf("ENTER the num2: ");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("%d %d\n",num1,num2);
    return 0;
}
void swap(int *ptr1,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    
}