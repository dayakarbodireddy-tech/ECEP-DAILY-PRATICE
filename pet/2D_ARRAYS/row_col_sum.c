//Find row sums and column sums of a 2D array.
#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the rows : ");
    scanf("%d",&rows);
    int columns;
    printf("Enter the columns : ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the 2d array elements : ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int row_sum=0;
    int column_sum=0;
    for(int i=0;i<rows;i++)
    {
        
        for(int j=0;j<columns;j++)
        {
            row_sum=row_sum+arr[i][j];
        }
    }
    printf("Row sum is %d\n",row_sum);
    for(int i=0;i<columns;i++)
    {
        
        for(int j=0;j<rows;j++)
        {
            column_sum=column_sum+arr[j][i];
        }
    }
    printf("Column sum is %d\n",column_sum);
}