#include<stdio.h>
#include<stdlib.h>
void sorting(int *ptr,int size);
int main()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);
    int *arr=malloc(size*sizeof(int));
    printf("enter the array elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting(arr,size);
    free(arr);
    return 0;

}
void sorting(int *ptr,int size)
{
    int largest=*(ptr+0);
    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)>largest)
        {
            largest=*(ptr+i);
        }
    }
    int smallest=*(ptr+0);
    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)<smallest)
        {
            smallest=*(ptr+i);
        }
    }
    
    for(int i=0;i<size;i++)
    {
        int second_smallest=largest;
        for(int j=0;j<size;j++)
        {
        if(*(ptr+j)>smallest&&*(ptr+j)<second_smallest)
        {
            second_smallest=*(ptr+j);
        }
    }
        printf("%d ",smallest);
        smallest=second_smallest;
    }
    
}