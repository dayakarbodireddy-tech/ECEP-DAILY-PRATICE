#include <stdio.h>
int main()
{
    int a,b,c,total;
    float avg;
    printf("enter the three numbers:\n");
    scanf("%d %d %d", &a,&b,&c);
    total = a + b + c;
    printf("%d\n", total);
    avg = total/3;
    printf("%f", avg);
    return 0;
}