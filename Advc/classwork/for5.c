#include<stdio.h>
int main()
{
    int num,a=0,b=1,next;
    printf("enter the number of terms:\n");
    scanf("%d",&num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d\n",a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}