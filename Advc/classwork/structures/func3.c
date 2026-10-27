//circle calculation
#include<stdio.h>
struct circle{
    int radius;
};
void radius_perimeter(struct circle var);
int main()
{
    struct circle s;
    printf("enter the radius : ");
    scanf("%d",&s.radius);
    radius_perimeter(s);
    return 0;
}
void radius_perimeter(struct circle var)
{
    printf("area of circle is %f\n",3.14*var.radius*var.radius);
    printf("perimeter of circle is %f\n",2*3.14*var.radius);
}