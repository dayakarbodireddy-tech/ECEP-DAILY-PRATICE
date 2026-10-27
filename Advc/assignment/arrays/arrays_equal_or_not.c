#include<stdio.h>
int main()
{
    int size1;
    printf("enter the size1: ");
    scanf("%d",&size1);
    int size2;
    printf("enter the size2: ");
    scanf("%d",&size2);
    int arr1[size1];
    printf("enter the array1 elements: ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[size2];
    printf("enter the array2 elements: ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //checking array1 with array2 element by element
    int i,j;
    int found=0;
    for(i=0;i<size1;i++)
    {
         //found=0;
        for(j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                found++;
                break;
            }
            //j++;
        }
        //i++;
    }
    if(found==size1)
    {
        printf("arrays are equal\n");
    }else{
        printf("not equal\n");
    }
    return 0;
}