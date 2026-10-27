#include<stdio.h>
double power_x(double x,int n);
int main()
{
    double x;
    printf("enter the x: ");
    scanf("%lf",&x);
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    
    double ret=power_x(x,n);
    printf("%lf\n",ret);
    return 0;
}
double power_x(double x,int n)
{
    int is_negative=0;
    if(n<0)
    {
        n=-n;
        is_negative=1;
    }
    double power=1;
    for(int i=0;i<n;i++)
    {
        power=power*x;
    }
    if(is_negative)
    {
        power=1/power;
    }
    return power;
}