// Rotate a 2D array/matrix by 90 degrees clockwise.
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
    //transpose matrix
    int transpose[columns][rows];
    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
        {
            transpose[i][j]=arr[j][i];
        }
        //printf("\n");
    }
    //finding 90 clockwise
    for(int i=0;i<columns;i++)
    {
        int start=0;
        int end=rows-1;
        while(start < end)
        {
            int temp=transpose[i][start];
            transpose[i][start]=transpose[i][end];
            transpose[i][end]=temp;
            start++;
            end--;
        }
    }
    //rotated matrix is 
    printf("matrix after rotated by 90 :\n");
    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;

}