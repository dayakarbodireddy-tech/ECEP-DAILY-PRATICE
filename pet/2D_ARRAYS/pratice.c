//spiral matrix
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
    //finding spiral matrix
    int top=0;
    int bottom=rows-1;
    int left=0;
    int right=columns-1;
    while(left <= right && top <= bottom)
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
        //bottom to top
        if(left <= right)
        {
            for(int i=bottom;i>=top;i--)
            {
                printf("%d ",arr[i][left]);
            }
            left++;
        }

    }
    printf("\n");
    return 0;
}