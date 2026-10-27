#include <stdio.h>
int main()
{
    int age,driving_test;
    printf("enter the age:");
    scanf("%d",&age);
    printf("enter the driving test status:");
    scanf("%d",&driving_test);
    if (age >= 18){
        if (driving_test == 1){
            printf("person is eligible to recieve driving license\n");
        }else {
            printf("person is not eligible for driving license\n");
        }
    }else {
        printf("person is minor not eligible for driving license\n");
    }
    return 0;
}