#include <stdio.h>
int main()
{
    int principle,rate,time;
    float simpleinterest;
    printf("enter the three values:\n");
    scanf("%d %d %d",&principle,&rate,&time);
    simpleinterest = ((principle * rate * time)/100);
    printf("simpleinterest = %f",simpleinterest);
    return 0;
}