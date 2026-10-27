#include<stdio.h>
struct employee 
{
    char name[50];
    int id;
    float salary;
};
void display_salary(struct employee *var);
int main()
{
    struct employee s;
    printf("enter the name: ");
    scanf("%s",s.name);
    printf("enter the id: ");
    scanf("%d",&s.id);
    printf("enter the salary: ");
    scanf("%f",&s.salary);
    display_salary(&s);
    return 0;
}
void display_salary(struct employee *var)
{
    if(var->salary<=30000)
    {
        var->salary=var->salary+var->salary*10/100;
    }else{
        var->salary=var->salary+var->salary*5/100;
    }
    printf("employee name : %s\n",var->name);
    printf("employee id : %d\n",var->id);
    printf("employee salary : %f\n",var->salary);
}