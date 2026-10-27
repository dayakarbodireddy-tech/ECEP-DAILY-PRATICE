#include<stdio.h>
struct student{
    int id;
    char name[20];
    char address[20];
};
int main()
{
    struct student s1={10,"daya","allamadugu"};
    struct student s2;
    s2=s1;
    printf("%p\n",&s2.id);
    printf("%p\n",&s2.name);
    printf("%p\n",&s2.address);
    return 0;
}