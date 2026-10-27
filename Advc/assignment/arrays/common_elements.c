#include<stdio.h>//commom elements iin both arrays
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    int i,j;
    
    printf("enter the array1 elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the array2 elements:\n");
    for(j=0;j<size;j++)
    {
        scanf("%d",&arr2[j]);
    }
    //checking common elements
    //int found=0;
    printf("common elements are: ");
    for(i=0;i<size;i++)
    {
       //found=0;
       for(j=0;j<size;j++)
       {
        if(arr1[i]==arr2[j])
        {
            printf("%d ",arr2[i]);
            break;
        }
       }
       printf("\n");
    }
    
    return 0;


}