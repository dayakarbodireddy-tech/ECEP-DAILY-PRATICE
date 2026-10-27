#include<stdio.h>
#include<stdlib.h>
void printing_elements(int rows,int columns,int **ptr)
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
    int columns;
    printf("Enter the columns: ");
    scanf("%d",&columns);
    int **arr=malloc(rows * sizeof(int *));
    for(int i=0;i<rows;i++)
    {
        arr[i]=malloc(columns * sizeof(int));
    }
    //reading values
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printing_elements(rows,columns,arr);
    //extending rows and columns
    int new_rows;
    printf("Enter the new_rows : ");
    scanf("%d",&new_rows);
    int new_columns;
    printf("Enter the new columns: ");
    scanf("%d",&new_columns);
    int **temp1=realloc(arr,new_rows * sizeof(int *));
    if(temp1==NULL)
    {
        printf("Memory is not created\n");
        return 1;
    }
    arr=temp1;
    for(int i=rows;i<new_rows;i++)
    {
        int *temp=malloc(new_columns * sizeof(int));
        {
            if(temp==NULL)
            {
                printf("Memory is not created successfully\n");
                return 1;
            }
        }
        arr[i]=temp;
    }
    for(int i = 0; i < rows; i++)
{
    int *temp = realloc(arr[i], new_columns * sizeof(int));

    if(temp == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    arr[i] = temp;
}
    //read new values
    for(int i=0;i<new_rows;i++)
    {
        int start_column=(i<rows)?columns:0;
        for(int j=start_column;j<new_columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    rows=new_rows;
    columns=new_columns;
    printing_elements(rows,columns,arr);
    //free
    for(int i=0;i<rows;i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
