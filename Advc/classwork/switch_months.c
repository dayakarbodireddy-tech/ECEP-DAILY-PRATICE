#include<stdio.h>
int main()
{
    int choice;
    printf("enter the choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days in month\n");
            break;
        case 2:
             printf("28 days in month\n");
             break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days in month\n");
            break;
        default:printf("month is not found\n");     
    }
    return 0;
}