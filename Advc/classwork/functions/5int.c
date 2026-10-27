#include<stdio.h>
void array(int size)
{
    int arr[size];
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //for printing
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    array(size);
    return 0;
}