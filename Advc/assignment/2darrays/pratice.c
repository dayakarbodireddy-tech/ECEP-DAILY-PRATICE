#include<stdio.h>
void arthimatic_operation(int n1,int n2,int *sum1,int *diff1,int *product1,int *div1)
{
  *sum1=n1+n2;
  *diff1=n1-n2;
  *product1=n1 * n2;
  *div1=n1 / n2;
}
int main()
{
    int num1;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    int num2;
    printf("Enter the num2: ");
    scanf("%d",&num2);
    int sum=0;
    int diff=0;
    int product=0;
    int div=0;
    arthimatic_operation(num1,num2,&sum,&div,&product,&div);
    printf("%d %d %d %d\n",sum,diff,product,div);
    return 0;
}
// int arthimatic_operation(int *n1,int *n2)
// {
//     // int choice;
//     // printf("Enter the choice: ");
//     // scanf("%d",&choice);
//     // switch(choice)
//     // {
//     //     case 1: 
//     //     printf("Addition: ");
//     //     int sum=*n1 + *n2;
//     //     printf("%d\n",sum);
//     //     case 2: 
//     //     printf("Subraction: ");
//     //     int diff=*n1-*n2;
//     //     printf("%d\n",diff);
    
//     //     case 2: 
//     //     printf("Subraction: ");
//     //     int diff=*n1-*n2;
//     //     printf("%d\n",diff);
    
// }