#include <stdio.h>
int main()
{
    int choice;
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:printf("sunday\n");
         break;
      case 2 :printf("monday\n");
         break;
      case 3:printf("wednesday\n");
        break;
      case 4:printf("thursday\n");
        break;
      case 5 :printf("friday\n");
       break;
      case 6:printf("saturday\n");
       break;
      case 7:printf("sunday\n");
        break;
      default:printf("it is month");
      break;    

    }
    return 0;
}