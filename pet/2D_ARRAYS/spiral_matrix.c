//Print a matrix in spiral order
//transpose matrix
#include<stdio.h>
int main()
{
    int rows;
    printf("Emter the rows : ");
    scanf("%d",&rows);
    int columns;
    printf("Enter the ccolumns : ");
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
    int top=0;
    int bottom=rows-1;
    int left=0;
    int right=columns-1;
    while(top <= bottom && left <= right)
    {
        //left to right
        for(int i=left;i<=right;i++)
        {
            printf("%d ",arr[top][i]);
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++)
        {
            printf("%d ",arr[i][right]);
        }
        right--;
        //right to left
        if(top <= bottom)
        {
            for(int i=right;i>=left;i--)
            {
                printf("%d ",arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                printf("%d ",arr[i][left]);
            }
            left++;
        }
    }
    return 0;
}