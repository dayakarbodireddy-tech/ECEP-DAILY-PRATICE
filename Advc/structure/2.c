#include<stdio.h>
struct employee
{
    int id;
    char name[200];
    int salary;

};
int main()
{
    struct employee s1;
    printf("enter the id: ");
    scanf("%d",&s1.id);
    printf("enter the name: ");
    scanf("%s",s1.name);
    printf("enter the basic_salary: ");
    scanf("%d",&s1.salary);
    printf("employee id: %d\n",s1.id);
    printf("employeee name: %s\n",s1.name);
    printf("gross salary: %d\n",s1.salary);
    return
}