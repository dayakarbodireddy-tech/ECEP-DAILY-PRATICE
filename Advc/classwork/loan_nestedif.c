#include <stdio.h>
int main()
{
    int age,monthly_income,employment_status,credit_score,existing_loan;
    printf("enter the age:");
    scanf("%d",&age);
    printf("enter the monthly_income:");
    scanf("%d",&monthly_income);
    printf("enter the employment_status:");
    scanf("%d",&employment_status);
    printf("enter the credit_score:");
    scanf("%d",&credit_score);
    printf("enter the existing_loan:");
    scanf("%d",&existing_loan);
    if (age >= 21){
        if (monthly_income >= 30000){
            if (employment_status == 1){
                if (credit_score >= 700){
                    if (existing_loan == 0){
                        printf("loan is approval\n");
                    }else {
                        printf("loan is rejected");
                    }
                }else {
                    printf("low creditscore\n");
                }
            } else {
                printf("unemployed\n");
            }
        }else {
            printf("monthly income is below 30000");
        }
    } else {
        printf("customer is not eligible for loan\n");
    }
    return 0;
}