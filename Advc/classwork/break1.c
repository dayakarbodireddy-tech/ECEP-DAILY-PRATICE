// #include<stdio.h>//first number divisible by 7 and terminated using break
// int main()
// {
//     int i;
//     for(i=1;i<=100;i++){
//         if(i%7==0){
//         printf("%d\n",i);
//         break;
//         }
//     }
//     return 0;
// }
#include<stdio.h>//repeated inputs and postive numbers accpet and -ve terminates using while
int main()
{
    int num;
    
    while(1){
        printf("enter the number:");
        scanf("%d",&num);
        if(num == 0){
            printf("The number is constant\n");
            break;
        }
        if(num>0){
        printf("%d\n",num);
        } else{
        printf("Negative number entered.program terminated\n");
        break;
        }
    }
    return 0;
}
// #include<stdio.h>//divisible by 4 and 6 and terminated
// int main()
// {
//     int num;
//     printf("enter the number:\n");
//     scanf("%d",&num);
    
//     for(int i=1;i<=num;i++){
//         if(i%4==0 && i%6==0){
//             printf("%d\n",i);
//             break;
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int num;
//     while(1){
//         printf("enter the number:\n");
//         scanf("%d",&num);
//         if(num%2==0){
//             printf("first even number found %d\n",num);
//             break;
//         }
//     }
//     return 0;
// }



   