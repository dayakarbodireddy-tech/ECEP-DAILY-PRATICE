#include <stdio.h>
int main()
{
    float weight,charge;
    printf("enter the weight:");
    scanf("%f",&weight);
    if (weight <= 1){
        charge = 50;
    }
    else if(weight <= 5){
        charge = 100;
    }
    else if (weight <= 10){
        charge = 200;
    }
    else {
        charge = 200 + (weight - 10) *20;
    }
    printf("shipping_charge = %.2f",charge                                                                                                                                                                                                      );
    return 0;


} 