#include<stdio.h>
struct products 
{
    int product_id;
    char product_name[20];
    int price;
};
void display_products(struct products items[],int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    struct products items[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the product_id %d :",i+1);
        scanf("%d",&items[i].product_id);
        printf("enter the product_name %d :",i+1);
        scanf("%s",items[i].product_name);
        printf("enter the product_price %d :",i+1);
        scanf("%d",&items[i].price);
    }
    display_products(items,size);
    return 0;

    
}
void display_products(struct products items[],int size)
{
    printf("\n-----------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s |\n", "product_id", "product_name","product_price");
    printf("-----------------------------------------------------\n");
    for(int i=0;i<size;i++)
    {
        printf("| %-10d | %-20s | %-13d |\n",items[i].product_id,items[i].product_name,items[i].price);
    }
    printf("-----------------------------------------------------\n");
}
