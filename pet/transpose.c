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
    printf("Enter the array elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int transpose[columns][rows];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    //printing
    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}