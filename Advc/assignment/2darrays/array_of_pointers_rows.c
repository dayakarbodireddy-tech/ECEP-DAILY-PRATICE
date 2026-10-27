#include<stdio.h>
#include<stdlib.h>
void printing_element(int rows,int columns,int **ptr)
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
    int columns;
    printf("Enter the columns: ");
    scanf("%d",&columns);
  int *arr[3];
  for(int i=0;i<3;i++)
{
    arr[i]=malloc(columns * sizeof(int));
}
//reading elements
printf("Enter the array elememts: ");
for(int i=0;i<3;i++)
{
    for(int j=0;j<columns;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printing_element(3,columns,arr);
//extending columns
int new_columns;
printf("Enter the new colums : ");
scanf("%d",&new_columns);
printf("Enter the new elements: ");
if(new_columns>0)
{
    for(int i=0;i<3;i++)
    {
        int *temp=realloc(arr[i],new_columns * sizeof(int));
        if(temp==NULL)
        {
            printf("memory creation is failed\n");
            return 1;
        }
        arr[i]=temp;
    }
    
}
//read new elements
for(int i=0;i<3;i++)
{
    for(int j=columns;j<new_columns;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
columns=new_columns;
printing_element(3,columns,arr);
for(int i=0;i<3;i++)
{
    free(arr[i]);
}
free(ptr);

return 0;

}