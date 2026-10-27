#include<stdio.h>
int main()
{
    char choice;
    printf("enter the choice:");
    scanf(" %c",&choice);
    switch(choice){
        case 'R':printf("STOP\n");
          break;
        case 'Y':printf("WAIT\n");
          break;
        case 'G':printf("START\n");
        break;
        default:printf("orange go slowly\n");    
    }
    return 0;
}