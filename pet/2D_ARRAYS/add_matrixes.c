// Add two matrices of the same size and store/print the result.
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
    int rows2;
    printf("Enter the rows2 : ");
    scanf("%d",&rows2);
    int columns2;
    printf("Enter the 2 : ");
    scanf("%d",&columns2);
    if(rows!=rows2 || columns !=columns2)
    {
        printf("Inavlid matrixes\n");
        return 0;
    }
    int arr2[rows2][columns2];
    printf("Enter the 2d array2 elements : ");
    for(int i=0;i<rows2;i++)
    {
      for(int j=0;j<columns2;j++)
      {
        scanf("%d",&arr2[i][j]);
      }
    }
    int result[rows][columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            result[i][j]=arr[i][j]+arr2[i][j];
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
    
    
}