//. Transpose a matrix.
// #include<stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter the rows : ");
//     scanf("%d",&rows);
//     int columns;
//     printf("Enter the columns : ");
//     scanf("%d",&columns);
//     int arr[rows][columns];
//     printf("Enter the 2d array elements : ");
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<columns;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int Transpose[columns][rows];
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<columns;j++)
//         {
//             Transpose[j][i]=arr[i][j];
//         }
        
//     }
//     for(int i=0;i<columns;i++)
//     {
//         for(int j=0;j<rows;j++)
//         {
//             if(Transpose[i][j]==-1)
//             {
//                 printf("X ");
//             }else{
//                 printf("%d ",Transpose[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Print a matrix in spiral order.
// #include<stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter the rows : ");
//     scanf("%d",&rows);
//     int columns;
//     printf("Enter the columns : ");
//     scanf("%d",&columns);
//     int arr[rows][columns];
//     printf("Enter the 2d array elements : ");
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<columns;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int top=0;
//     int bottom=rows-1;
//     int left=0;
//     int right=columns-1;
//     while(left <= right && top <= bottom)
//     {
//         for(int i=left;i<=right;i++)
//         {
//             printf("%d ",arr[top][i]);
//         }
//         top++;
//         for(int i=top;i<=bottom;i++)
//         {
//             printf("%d ",arr[i][right]);
//         }
//         right--;
//         if(top<=bottom)
//         {
//             for(int i=right;i>=left;i--)
//             {
//                 printf("%d ",arr[bottom][i]);
//             }
//             bottom--;
//         }
//         if(left<=right)
//         {
//             for(int i=bottom;i>=top;i--)
//             {
//                 printf("%d ",arr[i][left]);
//             }
//             left++;
//         }
//     }
//     printf("\n");
//     return 0;
// }

// Rotate a 2D array/matrix by 90 degrees clockwise.
// #include<stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter the rows : ");
//     scanf("%d",&rows);
//     int columns;
//     printf("Enter the columns : ");
//     scanf("%d",&columns);
//     int arr[rows][columns];
//     printf("Enter the 2d array elements : ");
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<columns;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     //transpose matrix
//     int transpose[columns][rows];
//     for(int i=0;i<columns;i++)
//     {
//         for(int j=0;j<rows;j++)
//         {
//             transpose[i][j]=arr[j][i];
//         }
//     }
//     for(int i=0;i<columns;i++)
//     {
//         int start=0;
//         int end=rows-1;
//         while(start<end)
//         {
//         int temp=transpose[i][start];
//         transpose[i][start]=transpose[i][end];
//         transpose[i][end]=temp;
//         start++;
//         end--;
//         }
//     }
//     printf("after roatating matrix by 90:\n");
//     for(int i=0;i<columns;i++)
//     {
//         for(int j=0;j<rows;j++)
//         {
//            printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Print a 2D array in wave/waveform form. Example: 1 2 3 / 4 5 6 fi 1 4 5 2 3 6
// #include<stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter the rows : ");
//     scanf("%d",&rows);
//     int columns;
//     printf("Enter the columns : ");
//     scanf("%d",&columns);
//     int arr[rows][columns];
//     printf("Enter the 2d array elements : ");
//     for(int i=0;i<rows;i++)
//     {
//         for(int j=0;j<columns;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int j=0;j<columns;j++)
//     {
//       if(j%2==0)
//       {
//         for(int i=0;i<rows;i++)
//         {
//           printf("%d ",arr[i][j]);
//         }
//       }else{
//         for(int i=rows-1;i>=0;i--)
//         {
//             printf("%d ",arr[i][j]);
//         }
//       }
//     }
//     printf("\n");
//     return 0;
// }

// Perform zig-zag traversal of a matrix.
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
//     for(int d=0;d<rows+columns-1;d++)
//     {
//         if(d%2==0)
//         {
//             int row;
//             if(d<rows)
//             {
//                 row=d;
//             }else{
//                 row=rows-1;
//             }
//             int col=d-row;
//             while(row>=0 && col<columns)
//             {
//                 printf("%d ",arr[row][col]);
//                 row--;
//                 col++;
//             }
//         }else{
//             int col;
//             if(d<columns)
//             {
//                 col=d;
//             }else{
//                 col=columns-1;
//             }
//             int row=d-col;
//             while(col>=0 && row<rows)
//             {
//                 printf("%d ",arr[row][col]);
//                 col--;
//                 row++;
//             }
//         }
//     }
//     printf("\n");
//     return 0;

// int target;
// printf("Enter the target : ");
// scanf("%d",&target);
// printf("Adjacent pairs :\n");
// for(int i=0;i<rows;i++)
// {
//     for(int j=0;j<columns;j++)
//     {
//         if(j<columns-1)
//         {
//         if((arr[i][j]+arr[i][j+1])==target)
//         {
//             printf("(%d %d)\n",arr[i][j],arr[i][j+1]);
//         }
//        }
//        if(i<rows-1)
//        {
//         if((arr[i][j]+arr[i+1][j])==target)
//         {
//             printf("(%d %d)\n",arr[i][j],arr[i+1][j]);
//         }
//         }
//         if((arr[i][j]+arr[i-1][j+1])==target)
//         {
//             printf("(%d %d)\n",arr[i][j],arr[i-1][j+1]);
//         }
//         if((arr[i][j]+arr[i+1][j+1])==target)
//         {
//             printf("(%d %d)\n",arr[i][j],arr[i+1][j+1]);
//         }
//     }
// }
// printf("\n");
// return 0;
// int row[rows];
// int col[columns];
// for(int i=0;i<rows;i++)
// {
//     row[i]=0;
// }
// for(int i=0;i<columns;i++)
// {
//     col[i]=0;
// }
// for(int i=0;i<rows;i++)
// {
//     for(int j=0;j<columns;j++)
//     {
//         if(arr[i][j]==0)
//         {
//             row[i]=1;
//             col[j]=1;
//         }
//     }
// }
// for(int i=0;i<rows;i++)
// {
//     for(int j=0;j<columns;j++)
//     {
//         if(row[i]==1 || col[j]==1)
//         {
//             arr[i][j]=0;
//         }
//     }
// }
// for(int i=0;i<rows;i++)
// {
//     for(int j=0;j<columns;j++)
//     {
//         printf("%d ",arr[i][j]);
//     }
//     printf("\n");
// }
// return 0;
// }