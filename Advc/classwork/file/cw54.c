#include<stdio.h>
struct student
{
    char name[20];
    int p;
    int c;
    int m;
};
int main()
{
    FILE *fp=fopen("bodireddy.txt","rb");
    if(fp==NULL)
    {
        printf("File is not there\n");
        return 0;
    }
struct student s1;
int size;
printf("enter the number of students: ");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
    fread(&s1,sizeof(s1),1,fp);
    printf("enter the name of the student%d: %s\n",i+1,s1.name);
    printf("enter p,c & m :%d %d %d\n",s1.p,s1.c,s1.m);
    
}
fclose(fp);
return 0;

}