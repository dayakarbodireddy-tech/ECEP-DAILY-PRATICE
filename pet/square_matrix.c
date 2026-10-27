#include<stdio.h>
int main()
{
    int n;
    //printf("Enter the n: ");
    scanf("%d",&n);
    int arr[n][n];
    //printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int temp=arr[i][i];
        arr[i][i]=arr[i][n-1-i];
        arr[i][n-1-i]=temp;
    }
    //printing
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}