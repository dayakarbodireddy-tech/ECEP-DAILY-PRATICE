#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    int columns;
    printf("Enter the columns: ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the 2d array 1 elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int arr1[rows][columns];
    printf("Enter the 2d array 2 elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int sum=0;
    //printing
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
          sum=arr[i][j]+arr1[i][j];
          printf("%d ",sum);
        }
        printf("\n");
    }
}