#include<stdio.h>
void power(int x,int y);
int main()
{
    int x,y;
    printf("enter the x and y: ");
    scanf("%d %d",&x,&y);
    power(x,y);
    return 0;
}
void power(int x,int y)
{
    int power1=1;
    for(int i=1;i<=y;i++)
    {
        power1=power1*x;
    }
    printf("power value is %d",power1);
}