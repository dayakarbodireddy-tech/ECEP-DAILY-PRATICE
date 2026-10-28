#include<stdio.h>
struct student
{
    char ch1;
    short s;
    float f;
    int n1;
    int n2;
    double d;

};
int main()
{
    struct student s1;
    printf("%zu\n",sizeof(s1));
    
}