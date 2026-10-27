#include<stdio.h>
int main()
{
    int rows;
    printf("enter the rows: ");
    scanf("%d",&rows);
    int columns;
    printf("enter the columns: ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("enter the 2d array elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //printing
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<columns;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // int sum=0;
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<columns;j++)
    //     {
    //        sum=sum+arr[i][j];
    //     }
    //     printf("sum of 2d array is %d\n",sum);
    //     sum=0;
    // }
    // int largest=arr[0][0];
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<columns;j++)
    //     {
    //         if(arr[i][j]>largest)
    //         {
    //             largest=arr[i][j];
    //         }
    //     }
    // }
    // printf("largest element in 2d array is %d\n",largest);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns/2;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][columns-1-j];
            arr[i][columns-1-j]=temp;
        }
        
    }
    //printing
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}