#include<stdio.h>
struct student_details
{
    char name[20];
    int roll_no;
    int marks;
};
int main()
{
    struct student_details s1;
    printf("enter the name: ");
    scanf("%s",s1.name);
    printf("enter the roll number: ");
    scanf("%d",&s1.roll_no);
    printf("enter the marks: ");
    scanf("%d",&s1.marks);
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll_no);
    printf("%d\n",s1.marks);
    return 0;
}