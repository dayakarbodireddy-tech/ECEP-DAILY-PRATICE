#include <stdio.h>
int main()
{
    float total_bill,discount_percent,discount_amount,finalbill_amount;
    
    printf("enter the total_bill:");
    scanf("%f",&total_bill);
    printf("enter the discount_percent:");
    scanf("%f",&discount_percent);
    if (total_bill >= 2000){
        discount_amount = (total_bill * discount_percent)/100;
        printf("gets the discount\n");
    }
    else {
        discount_amount = 0;
        printf("no discount\n");
    }
    
    finalbill_amount = total_bill - discount_amount;
    printf("discount_amount = %.2f\n",discount_amount);
    printf("finalbill_amount = %.2f\n",finalbill_amount);
    return 0;
}

    