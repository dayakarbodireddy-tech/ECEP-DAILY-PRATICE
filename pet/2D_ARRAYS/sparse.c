//Check/represent a sparse matrix.
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
    //finding sparse matrix or not
    int zero_count=0;
    int nonzero_count=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(arr[i][j]==0)
            {
                zero_count++;
            }else{
                nonzero_count++;
            }
        }
    }
    if(zero_count > nonzero_count)
    {
        printf("Its a sparse matrix\n");
    }else{
        printf("NOT sparse matrix\n");
    }
}