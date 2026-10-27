#include<stdio.h>
void largest_finding(int rows,int columns,int (*ptr)[columns])
{
    int largest=ptr[0][0];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(ptr[i][j]>largest)
            {
                largest=ptr[i][j];
            }
        }
    }
    int smallest=ptr[0][0];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(ptr[i][j]<smallest)
            {
                smallest=ptr[i][j];
            }
        }
    }
    //second largest
    int second_largest=smallest;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(ptr[i][j]>second_largest && ptr[i][j]<largest)
            {
                second_largest=ptr[i][j];
            }
        }
    }
    printf("second largest is %d\n",second_largest);
}
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    int columns;
    printf("Enter the columns: ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the 2d array elements :");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    largest_finding(rows,columns,arr);
    return 0;
}
