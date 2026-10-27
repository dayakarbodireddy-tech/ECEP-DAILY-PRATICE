#include<stdio.h>
struct student{
    int roll_no1;
    int marks1;
    int roll_no2;
    int marks2;
};
void swapping(struct student *var);
int main()
{
    struct student s1;
    printf("enter the roll number1: ");
    scanf("%d",&s1.roll_no1);
    printf("enter the marks1: ");
    scanf("%d",&s1.marks1);
    printf("enter the roll number2: ");
    scanf("%d",&s1.roll_no2);
    printf("enter the marks2: ");
    scanf("%d",&s1.marks2);
    swapping(&s1);
    return 0;
    
}
void swapping(struct student *var)
{
    //swapp marks
    int temp=var->marks1;
    var->marks1=var->marks2;
    var->marks2=temp;
    printf("student1 roll number:%d\n",var->roll_no1);
    printf("student2 roll number:%d\n",var->roll_no2);
    printf("student1 marks:%d\n",var->marks1);
    printf("student2 marks:%d\n",var->marks2);


}