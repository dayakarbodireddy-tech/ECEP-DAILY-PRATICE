//Transpose a matrix with a missing element.
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
    //finding the transpose matrix
    int transpose[columns][rows];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            
            transpose[j][i]=arr[i][j];
        }
    }
    //printing
    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
        {
           if(transpose[i][j]==-1)
           {
            printf("X ");
            //printf("value is : %d\n",transpose[i][j]);
           }else{
            printf("%d ",transpose[i][j]);
           }
        }
        printf("\n");
    }
    return 0;
}