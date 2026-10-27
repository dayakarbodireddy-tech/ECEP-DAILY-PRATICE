#include<stdio.h>
void calculator(int a,int b,char ch);
int main()
{
    int a,b;
    printf("Enter the a and b: ");
    scanf("%d %d",&a,&b);
    char ch;
    printf("enter the character:");
    scanf(" %c",&ch);
    calculator(a,b,ch);
    return 0;
}
void calculator(int a,int b,char ch)
{
    //char ch;
    int c;

    switch(ch)
    {
        case '+':
        printf("addition:\n");
         c=a+b;
        printf("%d\n",c);
        break;
        case '-':
        printf("subtraction:\n");
         c=a-b;
        printf("%d\n",c);
        break;
        case '*':
        printf("multiplication:\n");
         c=a*b;
        printf("%d\n",c);
        break;
        case '/':
        printf("Division:\n");
         c=a/b;
        printf("%d\n",c);
        break;
        default:printf("it is not basic calculator");
    }
   //
    
}