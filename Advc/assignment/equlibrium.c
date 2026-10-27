#include<stdio.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:");
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count;
    for(i=0;i<size;i++)
    { 
        //count=0;
        if((arr[i]+arr[i+1]==arr[size-i]+arr[size-i-1]))
        {
           count++;
           break;
        }
    }
    printf("Equilibrium index = %d",count);
    return 0;
}