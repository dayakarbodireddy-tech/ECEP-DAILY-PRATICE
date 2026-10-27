
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
    FILE *fp=fopen("bodireddy.txt","wb");
    if(fp==NULL)
    {
        printf("file is not there\n");
        return 0;
    }
    int size;
    printf("Enter the number of students: ");
    scanf("%d",&size);
    struct student s1;
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of the student%d: ",i+1);
        scanf("%19s",s1.name);
        printf("ENTER p,c & m marks : ");
        scanf("%d %d %d",&s1.p,&s1.c,&s1.m);
        fwrite(&s1,sizeof(s1),1,fp);
    }
    fclose(fp);
    return 0;
    
}
