#include<stdio.h>
struct product
{
    char product_name[200];
    float price;
    int quantity;

};
int main()
{
    struct product s1;
    printf("enter the product_name: ");
    scanf("%s",s1.product_name);
    printf("enter the price: ");
    scanf("%f",&s1.price);
    printf("enter the quantity: ");
    scanf("%d",&s1.quantity);
    float total_amount=(s1.price*s1.quantity)/1000;
    printf("%s\n",s1.product_name);
    printf("%f\n",s1.price);
    printf("%d\n",s1.quantity);
    printf("total_amount is %f\n",total_amount);
    return 0;
}