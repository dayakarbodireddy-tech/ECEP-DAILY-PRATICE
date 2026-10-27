//columns fixed rows changed
#include<stdio.h>
#include<stdlib.h>
void printing(int rows,int columns,int (*ptr)[columns])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    int (*arr)[3]=malloc(rows * sizeof(*arr));
    printf("Enter the array elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //extending rows
    int new_rows;
    printf("Enter the new rows: ");
    scanf("%d",&new_rows);
    arr=realloc(arr,new_rows*sizeof(*arr));
    if(arr==NULL)
    {
        printf("Memory is not created\n");
        return 1;
    }
    printf("enter the new array elements: ");
    for(int i=rows;i<new_rows;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    rows=new_rows;
    printing(rows,3,arr);
    free(arr);
    return 0;

}