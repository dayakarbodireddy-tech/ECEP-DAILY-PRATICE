#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    int columns;
    printf("Enter the columns: ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the 2d arrays elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //finding smallest
    int smallest=arr[0][0];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(arr[i][j]<smallest)
            {
                smallest=arr[i][j];
            }
        }
    }
    printf("MINIMUN ELEMENT:%d\n",smallest);
    int largest=arr[0][0];
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(arr[i][j]>largest)
            {
                largest=arr[i][j];
            }
        }
    }
    printf("MAXIMUM ELEMENT:%d\n",largest);
}