//book information
#include<stdio.h>
struct book_details
{
    char title[100];
    char author[100];
    int price;
};
void display_book_details(struct book_details var);
int main()
{
    struct book_details s;
    printf("enter the title: ");
    scanf("%[^\n]",s.title);
    printf("enter the author name: ");
    scanf("%s",s.author);
    printf("enter the price: ");
    scanf("%d",&s.price);
    display_book_details(s);
    return 0;
}
void display_book_details(struct book_details var)
{
    printf("book title is : %s\n",var.title);
    printf("book author is : %s\n",var.author);
    printf("book price is : %d\n",var.price);
}