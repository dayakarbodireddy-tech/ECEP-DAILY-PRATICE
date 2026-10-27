#include<stdio.h>
#include<math.h>
struct distance_btw_twopoints
{
    int x;
    int y;
    int x1;
    int y1;
};
void distance(struct distance_btw_twopoints var);
int main()
{
    struct distance_btw_twopoints s;
    printf("enter the x: ");
    scanf("%d",&s.x);
    printf("enter the y: ");
    scanf("%d",&s.y);
    printf("enter the x1: ");
    scanf("%d",&s.x1);
    printf("enter the y1: ");
    scanf("%d",&s.y1);
    distance(s);
    return 0;
}
void distance(struct distance_btw_twopoints var)
{
    int distance_two=sqrt((var.x1-var.x)*(var.x1-var.x)+(var.y1-var.y)*(var.y1-var.y));
    printf("distance between two points is %d\n",distance_two);
}