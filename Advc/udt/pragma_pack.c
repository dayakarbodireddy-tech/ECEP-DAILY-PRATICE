#include<stdio.h>
#pragma pack(2)
struct student 
{
    char ch1;
    short s;
    float f;
    int n1;
    int n2;
    double d;
};
#pragma pack()
struct daya
{
    int ch;
    char ch1;
};
int main()
{
    struct student s1;
    printf("%zu\n",sizeof(s1));
    printf("%zu\n",sizeof(struct daya));
}