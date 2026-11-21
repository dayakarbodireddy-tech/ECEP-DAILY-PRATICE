// Check/print a Toeplitz matrix pattern.
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
    //checking toeplitz matrix or not
    int flag=1;
    for(int i=1;i<rows;i++)
    {
        for(int j=1;j<columns;j++)
        {
            if(arr[i][j]!=arr[i-1][j-1])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            continue;
        }else{
            printf("Not Toeplitz matrix\n");
            return 0;
        }
    }
    if(flag==1)
    {
        printf("It's a Toeplitz matrix\n");
        return 0;
    }
}