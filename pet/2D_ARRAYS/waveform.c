// Print a 2D array in wave/waveform form. Example: 1 2 3 / 4 5 6 fi 1 4 5 2 3 6
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
    //finding waveforms 
    for(int j=0;j<columns;j++)
    {
        if(j % 2 ==0)
        {
            for(int i=0;i<rows;i++ )
            {
                printf("%d ",arr[i][j]);
            }
        }else{
            for(int i=rows-1;i>=0;i--)
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}