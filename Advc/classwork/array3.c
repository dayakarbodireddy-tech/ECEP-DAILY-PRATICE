#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("copied to arr2 values are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    printf("%d\n",arr2[0]);
    return 0;
}