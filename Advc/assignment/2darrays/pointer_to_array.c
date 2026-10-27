#include<stdio.h>
void fun(int rows,int columns,int (*ptr)[columns]);
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    int columns;
    printf("Enter the columns: ");
    scanf("%d",&columns);
    int arr[rows][columns];
    printf("Enter the 2d array elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    fun(rows,columns,arr);
    return 0;

}
void fun(int rows,int columns,int (*ptr)[columns])
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
       for(int j=0;j<columns;j++)
       {
        sum=sum+ptr[i][j];
       }
       
    }
    printf("%d\n",sum);
}