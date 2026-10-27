#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=malloc(5*sizeof(int));
    printf("enter the 5 integers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&*(ptr+i));
    }
    //finding sum
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+*(ptr+i);
    }
    float average;
    average=(float)sum/5;
    printf("sum is %d\n average is %g\n",sum,average);
    free(ptr);
}