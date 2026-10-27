#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y:");
    scanf("%d%d",&x,&y);
    
    int power = 1;
    for (int i = 1;i <= y;i++)
    {
        power = power * x;
        
        
    }
    printf("power =%d\n",power);
    return 0;
}