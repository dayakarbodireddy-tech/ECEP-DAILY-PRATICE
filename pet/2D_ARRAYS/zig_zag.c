// Perform zig-zag traversal of a matrix.
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
    //finding zigzag
    for(int d=0;d<rows+columns-1;d++)
    {
        if(d%2==0)
        {
            int row;
            if(d<rows)
            {
                row=d;
            }else{
                row=rows-1;
            }
            int col=d-row;
            while(row>=0 && col <columns)
            {
                printf("%d ",arr[row][col]);
                row--;
                col++;
            }
        }else{
            int col;
            if(d<columns)
            {
                col=d;
            }else{
                col=columns-1;
            }
            int row=d-col;
            while(col >=0 && row <rows)
            {
                printf("%d ",arr[row][col]);
                col--;
                row++;
            }
        }
    }
    printf("\n");
}