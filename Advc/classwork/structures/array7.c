#include<stdio.h>
struct product_table 
{
    int product_id;
    char product_name[20];
    int price;
    int quantity;
};
void display_products(struct product_table s[],int size);
int main()
{
    int size=5;
    struct product_table s[5]={{101,"pen",20,10},{102,"book",50,5},{103,"bag",800,3},{104,"bottle",150,8},{105,"pencil",10,20}};
    display_products(s,5);
    return 0;
}
void display_products(struct product_table s[],int size)
{
    printf("\n---------------------------------------------------------------------------\n");
    printf("| %-15s | %-15s | %-15s | %-15s |\n","product_id","product_name","product_price","product_quantity");
    printf("----------------------------------------------------------------------------\n");
    for(int i=0;i<size;i++)
    {
        printf("| %-10d | %-20s | %-10d | %-10d |\n",s[i].product_id,s[i].product_name,s[i].price,s[i].quantity);
    }
    printf("----------------------------------------------------------------------------\n");
}