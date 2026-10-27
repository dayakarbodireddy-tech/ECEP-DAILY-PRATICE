#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks;
};
void display_details(struct student *var);
int main()
{
    struct student s;
    printf("enter the name: ");
    scanf("%s",s.name);
    printf("enter the roll number: ");
    scanf("%d",&s.roll_no);
    printf("enter the marks: ");
    scanf("%d",&s.marks);
    display_details(&s);
    return 0;
}
void display_details(struct student *var)
{
   //var->marks=var->marks+5;
   (*var).marks=(*var).marks+5;
    printf("student marks %d\n",(*var).marks);
    printf("student name %s\n",(*var).name);
    printf("student roll number %d\n",(*var).roll_no);
}