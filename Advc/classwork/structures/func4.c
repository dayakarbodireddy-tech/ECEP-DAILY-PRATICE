
#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
void display_date(struct date var);
int main()
{
    struct date s;
    printf("enter the date: ");
    scanf("%d",&s.day);
    printf("enter the month: ");
    scanf("%d",&s.month);
    printf("enter the year: ");
    scanf("%d",&s.year);
    display_date(s);
    return 0;
}
void display_date(struct date var)
{
    if((var.day>0&&var.day<=31) && (var.month>0&&var.month<=12) && (var.year>0&&var.year<=2026))
    {
        printf("%d %d %d",var.day,var.month,var.year);
        
    }else{
        printf("invalid month\n");
        return;
    }
}