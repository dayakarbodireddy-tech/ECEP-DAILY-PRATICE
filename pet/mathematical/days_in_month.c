// Find the number of days in a given month; February should account for 28/29 days as stated in the test
#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: 
        printf("In january we have 31 days\n ");
        break;
        case 2:
        printf("In february :\n ");
        int year;
        printf("Enter the year : ");
        scanf("%d",&year);
        if((year % 400 == 0 )|| (year % 4 == 0 && year % 100 !=0))
        {
           printf("This is leap so we have 29 days\n");
        }else{
            printf("This is not a leap year so 28 days\n");
        }
        break;
        case 3:
        printf("In march we have 31 days\n");
        break;
        case 4:
        printf("In april we have 30 days\n");
        break;
        case 5:
        printf("In may we have 31 days\n");
        break;
        case 6:
        printf("In june we have 30 days\n");
        break;
        case 7:
        printf("In july we have 31 days\n");
        break;
        case 8:
        printf("In august we have 31 days\n");
        break;
        case 9:
        printf("In september we have 30 days\n");
        break;
        case 10:
        printf("In october we have 31 days\n");
        break;
        case 11:
        printf("In Novomber we have 30 days\n");
        break;
        case 12:
        printf("In December we have 31 days\n");
        break;
        default:
        printf("Invalid month\n");

    }
    return 0;
}