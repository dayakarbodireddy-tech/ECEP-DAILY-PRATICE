#include <stdio.h>
int main()
{
    int length,breadth,side;
    float radius;
    printf("enter the length and breadth:\n");
    scanf("%d %d",&length,&breadth);
    printf("enter the side:\n");
    scanf("%d",&side);
    printf("enter the radius:\n");
    scanf("%f",&radius);
    int area_rectangle = (length * breadth);
    int perimeter_rectangle = 2 * (length + breadth);
    int area_square = (side * side);
    int perimeter_square = (4 * side);
    float area_circle = (3.14 * radius * radius);
    float perimeter_circle = (2 * 3.14 * radius);
    printf("area_rectangle = %d\n perimeter_rectangle = %d\n",area_rectangle,perimeter_rectangle);
    printf("area_square = %d\n perimeter_square = %d\n",area_square,perimeter_square);
    printf("area_circle = %.2f\n perimeter = %.2f",area_circle,perimeter_circle);
    return 0;

}