#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    //#undef SIZE
    for(int i=0;i<SIZE;i++)
    {
        printf("%d",arr[i]);
    }
}