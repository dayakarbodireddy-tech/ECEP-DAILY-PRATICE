#include <stdio.h>
int main()
{
    int atm_card,atm_pin,account_balance,withdraw_amount;
    printf("enter atm_card:");
    scanf("%d",&atm_card);
    printf("enter atm_pin:");
    scanf("%d",&atm_pin);
    printf("enter account_balance:");
    scanf("%d",&account_balance);
    printf("enter withdraw_amount:");
    scanf("%d",&withdraw_amount);
    if (atm_card == 1){
        if (atm_pin == 1){
            if (withdraw_amount >= 100){
                if (account_balance >= withdraw_amount){
                    account_balance -= withdraw_amount;
                    printf("transaction is successfull\n");
                    printf("balance = %d\n",account_balance);
                } else {
                    printf("balance is insufficient\n");
                }
                    
            } else {
                printf("minimum  withdraw amount is 100\n");
            }
        } else {
            printf("pin is incoorect\n");
        }
    } else {
        printf("no atm card is detected\n");
    }
    return 0;
}

            
            
        
    