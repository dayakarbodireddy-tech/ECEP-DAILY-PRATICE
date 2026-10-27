#include<stdio.h>
int main()
{
    int num;
    int i = 0;
    printf("enter the num:");
    scanf("%d\n",&num);
    do{
        printf("%d\n",i);
        i += 2;
    }while(i<=num);
    return 0;
}
        
