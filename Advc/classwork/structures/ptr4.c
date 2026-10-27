#include<stdio.h>
struct employee{
    char name1[20];
    int id1;
    float salary1;
    char name2[30];
    int id2;
    float salary2;
};
void display_higher_salary(struct employee *var);
int main()
{
    struct employee s;
    printf("enter the employee1 name: ");
    scanf("%s",s.name1);
    printf("enter the employee id1: ");
    scanf("%d",&s.id1);
    printf("enter the employee1 salary: ");
    scanf("%f",&s.salary1);
    printf("enter the employee2 name: ");
    scanf("%s",s.name2);
    printf("enter the employee id2: ");
     scanf("%d",&s.id2);
     printf("enter the employee2 salary: ");
     scanf("%f",&s.salary2);
    display_higher_salary(&s);
    return 0;
}
void display_higher_salary(struct employee *var)
{
    if(var->salary1>var->salary2)
    {
        printf("employee1 name : %s\n",var->name1);
        printf("employee1 id : %d\n",var->id1);
        printf("employee1 salary1 : %f\n",var->salary1);
    }else{
        printf("employee2 name : %s\n",var->name2);
        printf("employee2 id : %d\n",var->id2);
        printf("employee2 salary1 : %f\n",var->salary2);
    }
}