#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the a and b:");
    scanf("%d %d",&a,&b);
    char choice;
    printf("enter the choice:");
    scanf(" %c",&choice);
    switch(choice){
        case '+':int sum = a+b;
           printf("sum = %d\n",sum);
           printf("addition");
           break;
           
        case '-': int diff = a-b;
           printf("diff = %d\n",diff);
           printf("subtraction"); 
           break;
        case '*': int product = a*b;
            printf("product = %d\n",product);
            printf("multiplication");
            break;
        case '/': int division = a/b;
             printf("division = %d\n",division);
             printf("division");
             break;
        default:printf("operator is undefined\n");     
    }
    return 0;
}