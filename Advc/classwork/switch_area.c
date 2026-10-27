#include<stdio.h>
int main(){
    int length,breadth,height;
    float radius;
    printf("enter the length, breadth,height:");
    scanf("%d%d%d",&length,&breadth,&height);
    printf("enter the radius:");
    scanf("%f",&radius);
    int choice;
    printf("enter the choice:");
    scanf("%d",&choice);

   
    switch(choice){
        case 1:int area_rectangle = length * breadth;
        printf("area_rectangle = %d\n",area_rectangle);
        break;
        case 2:int area_triangle = 0.5 * breadth * height;
        printf("area_triangle = %d\n",area_triangle);
        break;
        case 3:float area_circle = 3.14 * breadth *height;
        printf("area_circle = %.2f\n",area_circle);
        break;
        default:printf("area not defined\n");
    }
}