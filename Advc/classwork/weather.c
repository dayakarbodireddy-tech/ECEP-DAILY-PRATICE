#include <stdio.h>
int main()
{
    float temparature; // in celesious
    printf("enter the temparature:");
    scanf("%f",&temparature);
    if (temparature < 0){
        printf("freezing");
    }
    else if (temparature < 20){
        printf("cool");
    }
    else if(temparature <= 30){
        printf("warm");
    }
    else if (temparature > 30){
        printf("veryyy veryy hot");
    } 
    return 0 ;


}