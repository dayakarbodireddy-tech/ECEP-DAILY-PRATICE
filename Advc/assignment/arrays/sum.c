#include<stdio.h>
int main()
{
    int arr[7]={2,4,3,5,7,8,9};
    int sum=0;
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++){
         if(arr[i]+arr[j]==n)
        {
           // sum==n;
           printf("(%d,%d)",arr[i],arr[j]);
        }
    }
    }
    printf("\n");
    return 0;
}