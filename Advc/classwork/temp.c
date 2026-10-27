#include<stdio.h>
int main()
{
    float celesious;
    printf("enter celesious:\n");
    scanf("%f", &celesious);
    float fahrenheit;
    fahrenheit = ((9/5*celesious)+32);
    printf("%.2f\n", fahrenheit);
    return 0;
}