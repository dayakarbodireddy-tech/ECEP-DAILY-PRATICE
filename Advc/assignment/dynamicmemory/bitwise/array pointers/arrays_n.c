#include<stdio.h>
int main()
{
    int arr1[3];
    int arr2[3];
    int arr3[3];
    int *main_array[3];
    main_array[0]=arr1;
    main_array[1]=arr2;
    main_array[2]=arr3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&main_array[i][j]);
        }
    }
    //printing
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d ",main_array[i][j]);
        }
        printf("\n");
    }
    
}