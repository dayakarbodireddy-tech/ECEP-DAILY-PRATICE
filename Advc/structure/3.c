#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;

};
int main()
{
    struct rectangle s1;
    printf("enter the length: ");
    scanf("%d",&s1.length);
    printf("enter the breadth: ");
    scanf("%d",&s1.breadth);
    printf("perimeter of rectangle: %d\n",2*(s1.length*s1.breadth));
    printf("area of rectangle: %d\n",s1.length*s1.breadth);
    return 0;
}