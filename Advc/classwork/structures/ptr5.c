#include<stdio.h>
struct product
{
    char product_name[100];
    int price;
    int quantity;
    int quantity_want;
};
void present_avaiable(struct product *var);
int main()
{
    struct product s;
    printf("product name: ");
    scanf("%s",s.product_name);
    printf("product price: ");
    scanf("%d",&s.price);
    printf("product quantity: ");
    scanf("%d",&s.quantity);
    printf("customer need products: ");
    scanf("%d",&s.quantity_want);
    present_avaiable(&s);
    return 0;
}
void present_avaiable(struct product *var)
{
    if(var->quantity_want>var->quantity)
    {
        printf("insufficient stock\n");
        return;
    }else{
        var->quantity=var->quantity-var->quantity_want;

    }
    printf("product name : %s\n",var->product_name);
    printf("product price : %d\n",var->price);
    printf("quantity available is : %d\n",var->quantity);
}
