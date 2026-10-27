#include<stdio.h>
void power(int x,int y);
int main()
{
    int x=2,y;
    printf("enter the y: ");
    scanf("%d",&y);
    power(2,y);
    return 0;
}
void power(int x,int y)
{
    int power1=1;
    for(int i=1;i<=y;i++)
    {
        power1=power1*2;
    }
    printf("power value is %d",power1);
}