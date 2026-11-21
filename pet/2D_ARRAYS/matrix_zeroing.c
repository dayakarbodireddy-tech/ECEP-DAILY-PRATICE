// Matrix zeroing: wherever a zero occurs, make the entire corresponding row and column zero
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
    int row[rows];
    int col[columns];
    for(int i=0;i<rows;i++)
    {
        row[i]=0;
    }
    for(int i=0;i<columns;i++)
    {
        col[i]=0;
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(row[i]==1 || col[j]==1)
            {
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    
    }
    return 0;
}