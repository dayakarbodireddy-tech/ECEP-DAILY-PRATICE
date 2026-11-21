 //Find diagonal and adjacent elements whose sum equals a target in a 2D array
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
    int target;
    printf("Enter the target : ");
    scanf("%d",&target);
    printf("adjacnet pairs:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            //top
            // if(i>0)
            // {
            //     if(arr[i][j]+arr[i-1][j]==target)
            //     {
            //         printf("%d %d\n",arr[i][j],arr[i-1][j]);
            //     }
            // }
            //right
            if(j<columns-1)
            {
                if(arr[i][j]+arr[i][j+1]==target)
                {
                    printf("%d %d\n",arr[i][j],arr[i][j+1]);
                }
            }
            //bottom
            if(i<rows-1)
            {
                if(arr[i][j]+arr[i+1][j]==target)
                {
                    printf("%d %d\n",arr[i][j],arr[i+1][j]);
                }
            }
            // //left
            // if(j>0)
            // {
            //     if(arr[i][j]+arr[i][j-1]==target)
            //     {
            //         printf("%d %d\n",arr[i][j],arr[i][j-1]);
            //     }
            // }
        }
    }
    printf("Diagonal pairs : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            //top left
            // if(i>0 && j>0)
            // {
            //     if(arr[i][j]+arr[i-1][j-1]==target)
            //     {
            //         printf("%d %d\n",arr[i][j],arr[i-1][j-1]);
            //     }
            // }
            // //topright
            // if(i>0 && j<columns-1)
            // {
            //     if(arr[i][j]+arr[i-1][j+1]==target)
            //     {
            //         printf("%d %d\n",arr[i][j],arr[i-1][j+1]);
            //     }
            // }
            //bottom right
            if(i<rows-1 && j<columns-1)
            {
                if(arr[i][j]+arr[i+1][j+1]==target)
                {
                    printf("%d %d\n",arr[i][j],arr[i+1][j+1]);
                }
            }
            //bottom left
            if(i<rows-1 && j>0)
            {
                if(arr[i][j]+arr[i+1][j-1]==target)
                {
                    printf("%d %d\n",arr[i][j],arr[i+1][j-1]);
                }
            }
        }
    }
 }