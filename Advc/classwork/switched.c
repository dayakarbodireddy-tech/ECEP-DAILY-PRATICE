#include <stdio.h>
int main()
{
    int a,b,choice;
    printf("enter the a and b:");
    scanf("%d %d",&a,&b);
    printf("enter the choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1 :printf("addition\n");
                int sum = a + b;
                printf("sum = %d",sum);
                break;
        case 2: printf("subtraction\n");  
                int diff = a - b;
                printf("diff = %d",diff);
                break;
        case 3 : printf("multiplication\n
            ");
                 int product = a * b;
                 printf("product = %d",product);
                 break;
        case 4 : printf("division\n");
                int divide = a / b;
                printf("divide = %d",divide);
                break;
        default : printf("choice is not there");
                                      
    }  
    return 0;         
            
}