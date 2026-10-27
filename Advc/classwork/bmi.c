#include <stdio.h>
int main()
{
    float weight,height;
    float BMI;
    printf("enter the weight:");
    scanf("%f",&weight);
    printf("enter the height:");
    scanf("%f",&height);
    BMI = weight / (height * height);
    if (BMI <= 18){
        printf("underweight\n");
    }
    else if (BMI <= 25){
        printf("healthy weight\n");
    }
    else{
        printf("overweight\n");
    }
    printf("bmi = %.2f\n",BMI);
    return 0;

    
}