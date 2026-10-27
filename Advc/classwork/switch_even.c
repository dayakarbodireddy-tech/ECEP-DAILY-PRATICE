#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
   switch(num % 2){
    case 0: printf("number is even\n");
    break;
    case 1: printf("nnumber is odd\n");
    break;
    default:printf("number is float\n");
}
return 0;
}
