#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    int maths;
    int science;
    int computer;
};
void calculate_total_avg_marks(struct student s[],int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    struct student s[size];
    for(int i=0;i<size;i++)
    {
        printf("enter roll_number of student%d:",i+1);
        scanf("%d",&s[i].roll_no);
        printf("enter the name of student%d:",i+1);
        scanf("%s",s[i].name);
        printf("enter the maths marks of student%d:",i+1);
        scanf("%d",&s[i].maths);
        printf("enter the science marks of student%d:",i+1);
        scanf("%d",&s[i].science);
        printf("enter the computer marks of student%d:",i+1);
        scanf("%d",&s[i].computer);
    }
    calculate_total_avg_marks(s,size);
    return 0;

}
void calculate_total_avg_marks(struct student s[],int size)
{
    int total_marks;
    float average;
    printf("\n---------------------------------------------------------------------------------------------------------------------------------\n");
    printf("| %-10s | %-20s | %-10s | %-10s | %-10s | %-10s | %-10s |\n","roll_number","student_name","MATHS","SCIENCE","COMPUTER","TOTAL_MARKS","AVERAGE");
    printf("\n-------------------------------------------------------------------------------------------------------------------------------------\n");
    for(int i=0;i<size;i++)
    {
    //   printf("%d\n",s[i].roll_no);
    //   printf("%s\n",s[i].name);
    //   printf("%d\n",s[i].maths);
    //   printf("%d\n",s[i].science);
    //   printf("%d\n",s[i].computer);
      total_marks=s[i].maths+s[i].science+s[i].computer;
    //   printf("%d\n",total_marks);
       average=total_marks/5.0;
    //   printf("%f\n",average);
    printf("| %-10d | %-20s | %-10d | %-10d | %-10d | %-10d | %-10f |\n",s[i].roll_no,s[i].name,s[i].maths,s[i].science,s[i].computer,total_marks,average);
    }
}