#include<stdio.h>
void square(int *p,int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
     square(arr,size);
     return 0;
}
void square(int *p,int size)
{
    for(int i=0;i<size;i++)
    {

        printf("%d ",*(p+i)**(p+i));
    }
}