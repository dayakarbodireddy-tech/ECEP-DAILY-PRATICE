// Find diagonal and adjacent elements whose sum equals a target in a 2D array
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
    printf("Enter the 2d arrays elements : ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int target;
    printf("Enter the target : ");
    scanf("%d",&target);
    printf("adjancent pairs : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            //right
            if(j<columns-1)
            {
                if(arr[i][j]+arr[i][j+1]==target)
                {
                    printf("%d + %d\n",arr[i][j],arr[i][j+1]);
                }
            }
            //down
            if(i<rows-1)
            {
                if(arr[i][j] + arr[i+1][j]==target)
                {
                    printf("%d + %d\n",arr[i][j],arr[i+1][j]);
                }
            }
        }

    }
    //printf("diagonals pair : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            //bottom right
            if(i<rows-1 && j<columns-1)
            {
                if(arr[i][j]+arr[i+1][j+1]==target)
                {
                    printf("%d + %d\n",arr[i][j],arr[i+1][j+1]);
                }
            }
            //bottom -left
            if(i<rows-1 && j>0)
            {
                
                    if(arr[i][j]+arr[i+1][j-1]==target)
                    {
                        printf("%d + %d\n",arr[i][j],arr[i+1][j-1]);
                    }
                
            }
        }
    }
    printf("\n");
    return 0;
}