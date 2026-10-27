#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    int marks;
};
void display_details(struct student s[],int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    struct student s[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the roll_no %d: ",i+1);
        scanf("%d",&s[i].roll_no);
        printf("enter the name %d: ",i+1);
        scanf("%s",s[i].name);
        printf("enter the marks %d: ",i+1);
        scanf("%d",&s[i].marks);
    }
    display_details(s,size);
    return 0;


}
void display_details(struct student s[],int size)
{
    printf("\n---------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s |\n", "ROLL_NO", "NAME", "MARKS");
    printf("-----------------------------------------------\n");
    for(int i=0;i<size;i++)
    {
        // printf("student %d roll_number=%d\n",i+1,s[i].roll_no);
        // printf("student %d name=%s\n",i+1,s[i].name);
        // printf("student %d marks=%d\n",i+1,s[i].marks);
        printf("| %-10d | %-20s | %-5d |\n",s[i].roll_no,s[i].name,s[i].marks);
    }
    printf("------------------------------------------------\n");
}
