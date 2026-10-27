#include<stdio.h>
int main()
{
    int check_balance,deposit,withdraw;
    printf("enter the check_balance,deposit,withdraw:");
   scanf("%d %d %d",&check_balance,&deposit,&withdraw);
   int choice;
   printf("enter the choice:");
   scanf("%d",&choice);
   switch(choice){
      case 1:if (check_balance >= withdraw){
            check_balance =( check_balance - withdraw)+ deposit;
           

            printf("balance = %d\n",check_balance);
            printf("transaction is successfull\n");
      }else{
        printf("transaction is unsuccessfull\n");
      }
       break;
          
      case 2: if (deposit >= 100){
          printf("minimum amount is above 100\n");
      }else{
        printf("minimum amount is below\n");
      }
        break;
      case 3: if (withdraw >= 100){
          printf("min withdraw amount is above 100\n ");
      }else{
        printf("min withdraw amount is below 100\n");
      }
      break;
      case 4: int exit_choice;
      break;
      default: printf("atm is not working\n");                
    }
    return 0;
}
        
      



    
    
 