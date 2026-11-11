// Find the minimum and maximum elements in a 2D array
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
    //finding the max and min
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("max element of 2d array is %d\n",max);
     
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<columns;j++)
    //     {
    //         if(arr[i][j]<min)
    //         {
    //             min=arr[i][j];
    //         }
    //     }
    // }
    printf("min element of 2d array is %d\n",min);
}
