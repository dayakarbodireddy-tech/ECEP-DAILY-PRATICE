#include<stdio.h>
int main()
{
    int rows1;
    printf("Enter the rows1: ");
    scanf("%d",&rows1);
    int columns1;
    printf("Enter the columns1: ");
    scanf("%d",&columns1);
    int arr1[rows1][columns1];
    printf("Enter the 2d array1 elements: ");
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int rows2;
    printf("Enter the rows2: ");
    scanf("%d",&rows2);
    int columns2;
    printf("Enter the columns2: ");
    scanf("%d",&columns2);
    int arr2[rows2][columns2];
    printf("Enter the 2d array2 elements: ");
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    if(columns1!=rows2)
    {
        printf("Multiplication not possible\n");
        return 1;
    }
    int product;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            product=0;
            for(int k=0;k<columns1;k++)
            {
                product=product+arr1[i][k]*arr2[k][j];
            }
            printf("%d ",product);
        }
        printf("\n");
    }

}