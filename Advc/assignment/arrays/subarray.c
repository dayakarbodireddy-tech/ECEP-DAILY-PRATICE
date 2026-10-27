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
    //chceking which subarray is max
    int  sum=0,max;
    int k;
    printf("enter the k:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum+=arr[i];
        max=sum;
    }
    
    for(i=1;i<size-k;i++)
    {
        sum-=arr[i-1];
        sum=sum + arr[i+k-1];
        {
            if(max<sum)
            {
                max=sum;
            }
        }
    }
    printf("%d ",max);

    return 0;
      
}